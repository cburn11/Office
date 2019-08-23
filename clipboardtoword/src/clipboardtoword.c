#define CINTERFACE
#define COBJMACROS

#include <Windows.h>
#include <WindowsX.h>

#include <stdlib.h>
#include <string.h>

#include "resource.h"

#include "hash.h"
#include "Autowrap.h"

#define ComCtl6
#include "commonheaders.h"

#include "ClassFactory.h"
#include "ConnectableSource.h"
#include "ApplicationImpl.h"

#pragma comment(lib, "bcrypt.lib")
#pragma comment(lib, "Autowrap.lib")
#pragma comment(lib, "hash.lib")

#pragma warning(disable : 4133)

#define CB_BUFFER	16

#define PASTE_BM_DIRECT		1
#define PASTE_BM_INDIRECT	2
#define PASTE_ALL_DIRECT	3
#define PASTE_CUSTOM		4

INT_PTR CALLBACK CustomDlgProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

void * g_pConnectableSource;
APPLICATION_IMPL * g_pAppImpl;

struct tagSAVEFORMATS {
	int		format;
	WCHAR	* szFormat;
} saveformats[] = { { 0, L".doc" }, { 16, L".docx" }, { 17, L".pdf" } };

WCHAR * GetExtensionString(struct tagSAVEFORMATS * pformats, int size, int format) {
	
	for( int i = 0; i < size; ++i ) {
		if( pformats[i].format == format )
			return pformats[i].szFormat;
	}

	return NULL;
}

BYTE			g_prevhash[CB_BUFFER];

IDispatch		* g_pApplication = NULL;
IDispatch		* g_pDocument = NULL;
IDispatch		* g_pContent = NULL;

HWND			g_hwndLayout;
HWND			g_hwnd;

DWORD			g_paste;

BOOL			g_fQuerySave;
BOOL			g_fNoWord;

WCHAR			* g_szPath = NULL;
int				g_SaveFormat = -1;

INT_PTR CALLBACK DlgProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);
void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
void Cls_OnClipboardUpdate(HWND hwnd);
void Cls_OnDestroy(HWND hwnd);

void MirrorBuffer(BYTE * pBuffer, UINT cbBuffer, UINT width, UINT bitcount) {
	UINT	i, bytesperline, linecount;
	BYTE	* pCopy = (BYTE *) calloc(cbBuffer, sizeof(BYTE));
	if( !pCopy )
		return;
	
	bytesperline = width * bitcount / 8;
	linecount = cbBuffer / bytesperline;

	memcpy(pCopy, pBuffer, cbBuffer);

	for( i = 0; i < linecount; ++i ) {
		memcpy(pBuffer + i * bytesperline,
			pCopy + (linecount - 1) * bytesperline - i * bytesperline,
			bytesperline);
	}

	free(pCopy);
}

void MonitorClipboard(BOOL state) {

	if( state )
		AddClipboardFormatListener(g_hwnd);
	else
		RemoveClipboardFormatListener(g_hwnd);
	
}

void UpdatePageCount() {

	HRESULT		hr = S_FALSE;
	WCHAR		szPageCount[32];
	int			cPages;

	IDispatch	* pdispWindow = NULL;
	IDispatch	* pdispPane = NULL;
	IDispatch	* pdispPages = NULL;
	VARIANT		varResult;

	if( !g_pDocument )	goto CLEANUP;
	hr = GetDispProperty(g_pDocument, L"ActiveWindow", &varResult);
	if( S_OK != hr )	goto CLEANUP;
	MOVE_DISP_RESULT(&varResult, pdispWindow);

	if( !pdispWindow )	goto CLEANUP;
	hr = GetDispProperty(pdispWindow, L"ActivePane", &varResult);
	if( S_OK != hr )	goto CLEANUP;
	MOVE_DISP_RESULT(&varResult, pdispPane);

	if( !pdispPane )	goto CLEANUP;
	hr = GetDispProperty(pdispPane, L"Pages", &varResult);
	if( S_OK != hr )	goto CLEANUP;
	MOVE_DISP_RESULT(&varResult, pdispPages);

	if( !pdispPages )	goto CLEANUP;
	hr = GetDispProperty(pdispPages, L"Count", &varResult);
	if( S_OK != hr )	goto CLEANUP;
	cPages = varResult.lVal;

	wsprintf(szPageCount, L"%3i Pages", cPages);
	SetWindowText(GetDlgItem(g_hwnd, IDC_STATIC_PAGES), szPageCount);

CLEANUP:
#ifdef	_DEBUG
	if( S_OK != hr )
		MessageBox(g_hwnd, L"Error in UpdatePageCount. Attach Debugger",
			L"Error", MB_ICONERROR);
#endif	//_DEBUG

	if( pdispPages )	IDispatch_Release(pdispPages);
	if( pdispPane )		IDispatch_Release(pdispPane);
	if( pdispWindow )	IDispatch_Release(pdispWindow);
}

void SetPageOrientation(int i) {
	HRESULT		hr;
	IDispatch	* pdispPageSetup;
	VARIANT		varResult, varOrientation;

	hr = GetDispProperty(g_pContent, L"PageSetup", &varResult);
	MOVE_DISP_RESULT(&varResult, pdispPageSetup);
	
	hr = GetDispProperty(pdispPageSetup, L"Orientation", &varResult);
	if( SUCCEEDED(hr) && (varResult.lVal != i) ) {
		WCHAR * szCaption = (i == 1) ? L"Switch to Portrait" : L"Switch to Landscape";
		varOrientation.vt = VT_I4;	varOrientation.lVal = i;
		hr = PutDispProperty(pdispPageSetup, L"Orientation", &varOrientation, &varResult);
		if( SUCCEEDED(hr) ) {
			SetWindowText(g_hwndLayout, szCaption);
		}
	}

	IDispatch_Release(pdispPageSetup);
}

void CreateNewDocument() {
	HRESULT		hr;
	IDispatch	* pdispDocuments, * pdispPageSetup = NULL;

	VARIANT		varResult, varVisible, varPoints;
	
	hr = GetDispProperty(g_pApplication, L"Documents", &varResult);
	MOVE_DISP_RESULT(&varResult, pdispDocuments);

	varVisible.vt = VT_BOOL;	varVisible.boolVal = VARIANT_TRUE;
	hr = AutowrapNamedInvoke(&varResult, pdispDocuments, L"Add", 1,
		L"Visible", &varVisible);
	MOVE_DISP_RESULT(&varResult, g_pDocument);

	IDispatch_Release(pdispDocuments);

	hr = GetDispProperty(g_pApplication, L"Selection", &varResult);
	MOVE_DISP_RESULT(&varResult, g_pContent);

	SetPageOrientation(1);

	hr = GetDispProperty(g_pContent, L"PageSetup", &varResult);
	MOVE_DISP_RESULT(&varResult, pdispPageSetup);

	varPoints.vt = VT_R4;
	varPoints.fltVal = 0.2f;
	/*
	 *	Pass DISPATCH_PROPERTYGET | DISPATH_METHOD to Invoke as the flags parameter.
	 *	Passing only DISPATCH_METHOD results in Invoke returning E_FAIL. Passing
	 *	only DISPATCH_PROPERTYGET results in Invoke throwing an exception which
	 *	states InchesToPoints is not a property.
	 */
	hr = AutowrapInvoke(DISPATCH_PROPERTYGET | DISPATCH_METHOD, &varResult, g_pApplication, 
		L"InchesToPoints", 1, &varPoints);
	if( S_OK == hr ) {
		VARIANT varMargin; varMargin.vt = VT_R4; varMargin.fltVal = varResult.fltVal/*14.4f*/;
		hr = PutDispProperty(pdispPageSetup, L"TopMargin", &varMargin, &varResult);
		hr = PutDispProperty(pdispPageSetup, L"BottomMargin", &varMargin, &varResult);
		hr = PutDispProperty(pdispPageSetup, L"LeftMargin", &varMargin, &varResult);
		hr = PutDispProperty(pdispPageSetup, L"RightMargin", &varMargin, &varResult);
	}

	if( pdispPageSetup )	IDispatch_Release(pdispPageSetup);
}

BOOL GetBitmapBitsFromClipboard(BYTE ** ppBuffer, UINT * pcbBuffer, BITMAPINFOHEADER * pHeader) {

	HBITMAP		hbm;
	BITMAP		bm = {0};
	SIZE_T		cbBuffer;
	BYTE		* pBuffer;
	int			cbWritten;

	if( !OpenClipboard(g_hwnd) ) {

		*ppBuffer = NULL;
		*pcbBuffer = 0;

		return FALSE;
	}

	hbm = (HBITMAP) GetClipboardData(CF_BITMAP);
	cbWritten = GetObject(hbm, sizeof(bm), &bm);
	cbBuffer = bm.bmHeight * bm.bmPlanes * bm.bmWidthBytes;
	pBuffer = (BYTE *) calloc(cbBuffer, sizeof(BYTE));
	cbWritten = GetBitmapBits(hbm, cbBuffer, pBuffer);
	CloseClipboard();
	if( pHeader ) {
		pHeader->biBitCount = bm.bmBitsPixel;
		pHeader->biHeight = bm.bmHeight;
		pHeader->biPlanes = bm.bmPlanes;
		pHeader->biSize = sizeof(BITMAPINFOHEADER);
		pHeader->biSizeImage = 0;
		pHeader->biWidth = bm.bmWidth;
	}

	*ppBuffer = pBuffer;
	*pcbBuffer = cbBuffer;

	return TRUE;	
}

BOOL IsNewBitmapOnClipboard() {

	BYTE	* pBuffer, * pHash;
	UINT	cbBuffer, cbHash;

	BOOL fGet = FALSE;
	UINT cAttempts = 0;

	while( !( fGet = GetBitmapBitsFromClipboard(&pBuffer, &cbBuffer, NULL) ) ) {
		Sleep(10);
		cAttempts++;
		if( cAttempts >= 10 )
			break;
	}

	if( !fGet )
		return fGet;

	int cmp;

	hash(L"MD5", pBuffer, cbBuffer, &pHash, (DWORD *) &cbHash);

	free(pBuffer);

	cmp = memcmp(pHash, g_prevhash, cbHash);

	memcpy(g_prevhash, pHash, CB_BUFFER);

	free(pHash);

	if( 0 == cmp )
		return FALSE;
	

	return TRUE;
}

BOOL GetTempFile(HANDLE * phandle, WCHAR ** pszFileName) {

	WCHAR		* szTempDir, * szFileName;
	UINT		cchTempDir, cchFileName;
	HANDLE		hFile;

	szTempDir = (WCHAR *) calloc(MAX_PATH + 1, sizeof(WCHAR));
	szFileName = (WCHAR *) calloc(MAX_PATH + 1, sizeof(WCHAR));
	if( ! szTempDir || !szFileName ) {
		if( szTempDir )		free(szTempDir);
		if( szFileName )	free(szFileName);
		*pszFileName = NULL;
		*phandle = NULL;
		return FALSE;
	}

	cchTempDir = GetTempPath(MAX_PATH + 1, szTempDir);
	if( cchTempDir > 0 ) {
		cchFileName = GetTempFileName(szTempDir, L"ctw", 0, szFileName);
		if( cchFileName > 0 ) {
			free(szTempDir);
			hFile = CreateFile(szFileName, GENERIC_ALL, FILE_SHARE_READ, NULL,
				CREATE_ALWAYS, 0, NULL);
			if( hFile ) {
				*pszFileName = szFileName;
				*phandle = hFile;
				return TRUE;
			} else {
				*pszFileName = NULL;
				*phandle = NULL;
				free(szFileName);
				return FALSE;
			}
		} else {
			*pszFileName = NULL;
			*phandle = NULL;
			free(szTempDir);
			free(szFileName);
			return FALSE;
		}
	} else {
		free(szTempDir);
		free(szFileName);
		*pszFileName = NULL;
		*phandle = NULL;
		return FALSE;
	}
}

BOOL GetBitmapFromClipboard(BYTE ** ppBuffer, ULONG * pcbBuffer) {

	BYTE		* pBits;
	UINT		cbBits;

	BYTE		* pBitmap;
	UINT		cbBitmap;

	BITMAPINFOHEADER bmih = {0};

	if( GetBitmapBitsFromClipboard(&pBits, &cbBits, &bmih) ) {
		MirrorBuffer(pBits, cbBits, bmih.biWidth, bmih.biBitCount);
		cbBitmap = cbBits + sizeof(BITMAPFILEHEADER) +
			sizeof(BITMAPINFO);
		pBitmap = (BYTE *) calloc(cbBitmap, sizeof(BYTE));
		if( pBitmap ) {
			BITMAPFILEHEADER * pFileHeader = (BITMAPFILEHEADER *) pBitmap;
			BITMAPINFO * pInfo = 
				(BITMAPINFO *) (pBitmap + sizeof(BITMAPFILEHEADER));
			
			pFileHeader->bfOffBits = sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFO);
			pFileHeader->bfSize = cbBitmap;
			pFileHeader->bfType = MAKEWORD('B', 'M');

			memcpy(pBitmap + pFileHeader->bfOffBits,
				pBits, cbBits);
			free(pBits);

			memcpy(&(pInfo->bmiHeader), &bmih, sizeof(bmih));

			*ppBuffer = pBitmap;
			*pcbBuffer = cbBitmap;

			return TRUE;
		} else {
			free(pBits);
			*ppBuffer = NULL;
			return FALSE;
		}
	}

	*ppBuffer = NULL;
	return FALSE;
}

BOOL SaveBitmapToTempFile(HANDLE hFile, BYTE * pBuffer, ULONG cbBuffer) {

	DWORD cbWritten;

	return WriteFile(hFile, pBuffer, cbBuffer, &cbWritten, NULL);
}

HRESULT InsertBitmapIntoDocument(WCHAR * szFilePath) {

	HRESULT		hr;
	VARIANT		varResult, varFilename, varSave;

	IDispatch	* pdispInlineShapes = NULL;

	hr = GetDispProperty(g_pContent, L"InlineShapes", &varResult);
	MOVE_DISP_RESULT(&varResult, pdispInlineShapes);

	if( !SUCCEEDED(hr) || !pdispInlineShapes )
		return E_FAIL;

	varFilename.vt = VT_BSTR; varFilename.bstrVal = SysAllocString(szFilePath);
	varSave.vt = VT_BOOL; varSave.boolVal = VARIANT_TRUE;
	hr = AutowrapNamedInvoke(&varResult, pdispInlineShapes, L"AddPicture", 2,
		L"FileName", &varFilename, L"SaveWithDocument", &varSave);

	if( S_OK == hr ) IDispatch_Release(varResult.pdispVal);

	IDispatch_Release(pdispInlineShapes);

	SysFreeString(varFilename.bstrVal);

	return hr;
}

HRESULT LoadWord() {

	HRESULT			hr;
	CLSID			clsid;
	IUnknown		* pUnk;

	hr = CLSIDFromProgID(L"Word.Application", &clsid);
	hr = GetActiveObject(&clsid, NULL, &pUnk);
	if( !SUCCEEDED(hr) ) {
		hr = CoCreateInstance(&clsid, NULL, CLSCTX_LOCAL_SERVER, &IID_IUnknown, &pUnk);
		if( SUCCEEDED(hr) ) {
			VARIANT varResult, varVisible;
			varVisible.vt = VT_BOOL; varVisible.boolVal = VARIANT_TRUE;
			hr = PutDispProperty(pUnk, L"Visible", &varVisible, &varResult);
		}
	}

	hr = IUnknown_QueryInterface(pUnk, &IID_IDispatch, &g_pApplication);
	IUnknown_Release(pUnk);

	return hr;
}

BOOL InitWindow(HINSTANCE hInstance) {
	
	WNDCLASS	wndclass = { 0 };
	wndclass.cbWndExtra = DLGWINDOWEXTRA;
	wndclass.hbrBackground = (HBRUSH) ( COLOR_BTNFACE + 1 );
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hInstance = hInstance;
	wndclass.lpfnWndProc = DlgProc;
	wndclass.lpszClassName = L"ClipboardToWordMainWndClass";
	wndclass.style = CS_VREDRAW | CS_HREDRAW;

	if( !RegisterClass(&wndclass) ) {
		DWORD error = GetLastError();
		return FALSE;
	}

	return TRUE;
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, WCHAR * szCmdLine, int iShowCmd) {
	DWORD dwRegister;

	HRESULT hr;

#ifdef _DEBUG
	MessageBox(NULL, L"Attach debugger.", L"ClipboardToWord!wWinMain", MB_ICONINFORMATION);
#endif //	_DEBUG

	g_fQuerySave = FALSE;
	g_fNoWord = FALSE;

	int argc;
	WCHAR ** argv = CommandLineToArgvW(szCmdLine, &argc);
	WCHAR ** argv_preserve = argv;
	if( argc > 0 ) {
		for( int i = 0; i < argc; ++i ) {

			if( wcscmp(L"NOWORD", *argv) == 0 ||
				wcscmp(L"-Embedding", *argv) == 0) {

				if( wcscmp(L"-Embedding", *argv) == 0 ) iShowCmd = SW_HIDE;

				++argv; ++i;
				g_fNoWord = TRUE;
			} else if(wcscmp(*argv, L"SavePath") == 0 && ( i + 2 ) < argc) {
				++argv; ++i;
				g_szPath = *argv;
				++argv; ++i;
				g_SaveFormat = _wtoi(*argv);
				++argv;
			}
		}		
	}

	hr = OleInitialize(NULL);

	g_pConnectableSource = CreateConnectableSource();
	
	if( !g_fNoWord ) {
		hr = LoadWord();
		if( !SUCCEEDED(hr) )
			return 1;
	} else {
		
		hr = CoRegisterClassObject(&CLSID_Application, &g_cf,
			CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE, &dwRegister);
	}

	InitWindow(hInstance);

	HWND hwndMain = CreateDialog(hInstance, MAKEINTRESOURCE(IDD_DIALOG_MAIN), NULL, DlgProc);
	CreateApplicationImpl(hwndMain, &g_pAppImpl);

	ShowWindow(hwndMain, iShowCmd);
	UpdateWindow(hwndMain);

	MSG msg;
	while( GetMessage(&msg, NULL, 0, 0) ) {
		if( !IsDialogMessage(hwndMain, &msg) ) {	// Make sure default dialog processing still happens.
			TranslateMessage(&msg);					// Call TranslateAccelerator, after loading accelerators,
			DispatchMessage(&msg);					// If you want to use custom keyboard accelerators.
		}
	}
	//	Change this to CreateDialog, and add message loop.
	//	Also need to register the WindowClass, which is done above in InitWindow.
	//DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG_MAIN), NULL, DlgProc);

	if( g_pContent )		IDispatch_Release(g_pContent);

	if( g_pDocument )		{
								VARIANT	varResult, varSave;
								varSave.vt = VT_I4; varSave.lVal = 0;	// WdDoNotSaveChanges
								hr = AutowrapNamedInvoke(&varResult, g_pDocument, L"Close", 1,
									L"SaveChanges", &varSave);
								IDispatch_Release(g_pDocument);
							}	

	if( g_pApplication ) {
		IDispatch	* pdispDocuments;

		VARIANT		varResult;
	
		hr = GetDispProperty(g_pApplication, L"Documents", &varResult);
		MOVE_DISP_RESULT(&varResult, pdispDocuments);

		hr = GetDispProperty(pdispDocuments, L"Count", &varResult);
		if( SUCCEEDED(hr) && varResult.lVal < 1 )
			hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, g_pApplication, L"Quit", 0);

		IDispatch_Release(pdispDocuments);
		IDispatch_Release(g_pApplication);
	}

	LocalFree(argv_preserve);

	if( g_fNoWord )
		hr = CoRevokeClassObject(dwRegister);

	if( g_pConnectableSource )	DestroyConnectableSource(g_pConnectableSource);

	if( g_pAppImpl )	free(g_pAppImpl);

	OleUninitialize();

	return 0;
}

INT_PTR CALLBACK DlgProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

	switch( message ) {

		HANDLE_DLG_MSG(hwnd, WM_INITDIALOG, Cls_OnInitDialog);
		HANDLE_DLG_MSG(hwnd, WM_COMMAND, Cls_OnCommand);
		HANDLE_DLG_MSG(hwnd, WM_CLIPBOARDUPDATE, Cls_OnClipboardUpdate);
		HANDLE_DLG_MSG(hwnd, WM_DESTROY, Cls_OnDestroy);

	}

	return DefWindowProc(hwnd, message, wParam, lParam);
	//	Call DefWindowProc now that CreateDialog, insted of DialogBox, is used to create the window
	//	return FALSE;
}

void Cls_OnDestroy(HWND hwnd) {
	if( g_pConnectableSource ) {
		TriggerEvent(g_pConnectableSource, &IID_IClipboardEvents, EVENT_CODE_QUIT, NULL);
		TriggerEvent(g_pConnectableSource, &IID_IApplicationEvents, EVENT_CODE_QUIT, NULL);
	}
	PostQuitMessage(0);
}

BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam) {

	g_hwndLayout = GetDlgItem(hwnd, IDC_BUTTON_LAYOUT);
	g_hwnd = hwnd;

	Button_SetCheck(GetDlgItem(hwnd, IDC_CHECK_MONITOR), TRUE);
	MonitorClipboard(TRUE);

	HWND hwndCheckSave = GetDlgItem(hwnd, IDC_CHECK_SAVE);

	if( !g_fNoWord ) {

		CreateNewDocument();

		Button_SetCheck(GetDlgItem(hwnd, IDC_RADIO_DIRECT), TRUE);
		g_paste = PASTE_BM_DIRECT;

		UpdatePageCount();

		if( g_szPath != NULL && g_SaveFormat >= 0 ) {
			Button_SetCheck(hwndCheckSave, TRUE);
			WCHAR szPath[MAX_PATH] = { 0 };
			WCHAR * szExt = GetExtensionString(saveformats, 3, g_SaveFormat);
			if( szExt != NULL ) {
				wsprintf(szPath, L"%s%s", g_szPath, szExt);
				SetWindowText(GetDlgItem(hwnd, IDC_STATIC_SAVE), szPath);
			}
		} else {
			Button_SetCheck(hwndCheckSave, FALSE);
			Button_Enable(hwndCheckSave, FALSE);
		}
	} else {
		Button_SetCheck(GetDlgItem(hwnd, IDC_RADIO_CUSTOM), TRUE);
		g_paste = PASTE_CUSTOM;
		Button_SetCheck(hwndCheckSave, FALSE);
		Button_Enable(hwndCheckSave, FALSE);
		Button_Enable(g_hwndLayout, FALSE);
		Button_Enable(GetDlgItem(hwnd, IDC_BUTTON_SAVE), FALSE);
		Button_Enable(GetDlgItem(hwnd, IDC_BUTTON_DISCARD), FALSE);
		
		Button_Enable(GetDlgItem(hwnd, IDC_RADIO_ALL), FALSE);
		Button_Enable(GetDlgItem(hwnd, IDC_RADIO_DIRECT), FALSE);
		Button_Enable(GetDlgItem(hwnd, IDC_RADIO_INDIRECT), FALSE);

		Button_Enable(GetDlgItem(hwnd, IDC_CHECK_SAVEAS), FALSE);

		Button_Enable(GetDlgItem(hwnd, IDC_BUTTON_CUSTOM), TRUE);
	}

	return TRUE;
}

void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {

	VARIANT		varResult;
	HRESULT		hr;
	WCHAR		* szCaption;
	UINT		cchCaption;

	switch( id ) {

	// Uncomment to process "Escape" key
	//case IDCANCEL:
	case IDC_BUTTON_DISCARD:

		if( g_fQuerySave ) {
			int query = MessageBox(hwnd, L"Would you like to save before discarding?",
				L"ClipboardToWord", MB_YESNOCANCEL | MB_ICONQUESTION);
			switch( query ) {
			case IDYES:
				hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, g_pDocument, L"Save", 0);
				break;

			case IDNO:
				break;

			case IDCANCEL:
				return;
			}
		}

		if( Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_MONITOR)) )
			MonitorClipboard(FALSE);

		DestroyWindow(hwnd);
		// Changed after window creation was switched to CreateDialog from DialogBox
		//EndDialog(hwnd, 0);
		break;


	case IDC_BUTTON_SAVE:

		Button_Enable(hwndCtl, FALSE);

		if( Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_SAVE)) ) {
			VARIANT varPath, varFormat;
			varPath.vt = VT_BSTR;	varPath.bstrVal = SysAllocString(g_szPath);
			varFormat.vt = VT_I4;	varFormat.lVal = g_SaveFormat;
			hr = AutowrapNamedInvoke(&varResult, g_pDocument, L"SaveAs", 2,
				L"FileName", &varPath, L"FileFormat", &varFormat);
		} else {
			hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, g_pDocument, L"Save", 0);
		}

		if( S_OK == hr )
			g_fQuerySave = FALSE;

		Button_Enable(hwndCtl, TRUE);

		break;


	case IDC_BUTTON_LAYOUT:

		cchCaption = GetWindowTextLength(g_hwndLayout);
		szCaption = (WCHAR *) calloc(cchCaption + 1, sizeof(WCHAR));
		GetWindowText(g_hwndLayout, szCaption, cchCaption + 1);

		if( 0 == wcscmp(szCaption, L"Switch to Portrait") ) {
			SetPageOrientation(0);
		} else {
			SetPageOrientation(1);
		}

		break;

	case IDC_CHECK_MONITOR:

		MonitorClipboard(Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_MONITOR)));

		break;

	case IDC_CHECK_SAVE:

		break;

	case IDC_RADIO_DIRECT:
		g_paste = PASTE_BM_DIRECT;
		break;

	case IDC_RADIO_INDIRECT:
		g_paste = PASTE_BM_INDIRECT;
		break;

	case IDC_RADIO_ALL:
		g_paste = PASTE_ALL_DIRECT;
		break;

	case IDC_RADIO_CUSTOM:
		g_paste = PASTE_CUSTOM;
		break;

	case IDC_BUTTON_CUSTOM:
		// Pull this out to its own function so IApplication can also call it.
		DialogBox((HINSTANCE) GetWindowLongPtr(hwnd, GWLP_HINSTANCE), 
			MAKEINTRESOURCE(IDD_DIALOG_CUSTOM), hwnd, CustomDlgProc);
		break;

	}

	if( g_paste == PASTE_CUSTOM )
		EnableWindow(GetDlgItem(hwnd, IDC_BUTTON_CUSTOM), TRUE);
	else
		EnableWindow(GetDlgItem(hwnd, IDC_BUTTON_CUSTOM), FALSE);
}

void PasteAllDirect() {
	HRESULT		hr;
	VARIANT		varResult;
	g_fQuerySave = TRUE;
	hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, g_pContent, L"Paste", 0);
}

void PasteBMDirect() {
	if( IsClipboardFormatAvailable(CF_BITMAP) ) {
		/*HRESULT		hr;
		VARIANT		varResult;*/
		
		if( IsNewBitmapOnClipboard() ) {
			/*g_fQuerySave = TRUE;
			hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, g_pContent, L"Paste", 0);*/
			PasteAllDirect();
		}
				
	}
}

void PasteBMIndirect() {
	
	BOOL fBitmapOnClipboard = IsClipboardFormatAvailable(CF_BITMAP);

#ifdef	_DEBUG
	if( !fBitmapOnClipboard )
		MessageBox(NULL, L"IsClipboardFormatAvailable(CF_BITMAP) returned false.",
			L"Unexpected result", MB_ICONWARNING);
#endif	//_DEBUG

	if( fBitmapOnClipboard ) {
		HRESULT		hr;
		HANDLE		hTempFile = NULL;
		WCHAR		* szTempFilePath = NULL;
		ULONG		cbBuffer;
		BYTE		* pBuffer = NULL;
		
		if( GetTempFile(&hTempFile, &szTempFilePath) ) {
			if( IsNewBitmapOnClipboard() ) {
				if( GetBitmapFromClipboard(&pBuffer, &cbBuffer) ) {
					if( SaveBitmapToTempFile(hTempFile, pBuffer, cbBuffer) ) {
						CloseHandle(hTempFile);
						hTempFile = NULL;
						g_fQuerySave = TRUE;
						hr = InsertBitmapIntoDocument(szTempFilePath);
					}
				}
			}
		}

		if( hTempFile )			CloseHandle(hTempFile);
		if( szTempFilePath )	{ DeleteFile(szTempFilePath); free(szTempFilePath); }
		if( pBuffer )			free(pBuffer);
	}
}

void CustomHandler() {
	BOOL fBitmapOnClipboard = IsClipboardFormatAvailable(CF_BITMAP);

	//	Send ClipboardUpdate event
	if( g_pConnectableSource )	
		TriggerEvent(g_pConnectableSource, &IID_IClipboardEvents, EVENT_CODE_CLIPBOARDUPDATE, NULL);

	if( fBitmapOnClipboard ) {

		if( !IsNewBitmapOnClipboard() )		
			return;

		ULONG		cbBuffer = 0, cAttempts = 0;
		BYTE		* pBuffer = NULL;
		BOOL		fGet = FALSE;
		
		while( ! (fGet = GetBitmapFromClipboard(&pBuffer, &cbBuffer)) ) {
			++cAttempts;
			Sleep(10);
			if( cAttempts >= 10 )
				break;
		}

		if( !fGet )
			return;

		// Send NewBitmapOnClipboard event
		// NOT 64 bit compatible!
		if( g_pConnectableSource ) {
			LARGE_INTEGER li = { cbBuffer, pBuffer };
			TriggerEvent(g_pConnectableSource, &IID_IClipboardEvents, EVENT_CODE_NEWBITMAP, &li);
		}

		HANDLE		hTempFile = NULL;
		WCHAR		* szTempFilePath = NULL;
		if( GetTempFile(&hTempFile, &szTempFilePath) ) {

			if( SaveBitmapToTempFile(hTempFile, pBuffer, cbBuffer) ) {
				if( hTempFile ) { CloseHandle(hTempFile); hTempFile = NULL; }

				//	Send BitmapSavedToTempFile event
				if( g_pConnectableSource )	
					TriggerEvent(g_pConnectableSource, &IID_IClipboardEvents, 
						EVENT_CODE_BITMAPSAVED, szTempFilePath);

			}
		}

		if( szTempFilePath ) { DeleteFile(szTempFilePath); free(szTempFilePath); }

	if( pBuffer )	free(pBuffer);
		
	}
}

void Cls_OnClipboardUpdate(HWND hwnd) {		

	switch( g_paste ) {

	case PASTE_BM_DIRECT:
		PasteBMDirect();
		break;

	case PASTE_BM_INDIRECT:
		PasteBMIndirect();
		break;

	case PASTE_ALL_DIRECT:
		PasteAllDirect();
		break;

	case PASTE_CUSTOM:
		CustomHandler();
		break;

	}

	if( !g_fNoWord ) UpdatePageCount();
}