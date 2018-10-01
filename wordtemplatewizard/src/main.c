#define COBJMACROS
#define _WIN32_WINNT 0x0600

#include <Windows.h>
#include <WindowsX.h>
#include <Commctrl.h>
#include <tchar.h>

#include <ocidl.h>

#include <stdlib.h>
#include <stdio.h>

#include "office\office 2013\inc\mso.h"
#include "office\office 2013\inc\msword.h"

#include "Autowrap.h"
#define ComCtl6
#include "CommonHeaders.h"
#include "WordTemplateWizardGlobals.h"

#include "resource.h"

#pragma comment(lib, "Autowrap.lib")
#pragma comment(lib, "Comctl32.lib")


//	The other option is to implement interface IMessageFilter
//	and register the implementing object using CoRegisterMessageFilter
#define E_REJECTED_BY_CALLEE	0x80010001
#define RETRY_ON_REJECTION(stmt, res)	while( ((res) = (stmt)) == E_REJECTED_BY_CALLEE) { ; }

_Application		* g_pWordApp;
_Document			* g_pDoc;

//					7.18.14 - This flag has been replaced by BOOL CallWordQuit()
//BOOL				g_fActive;

HWND				g_hwndWord;		//	Added 2.1.13 - HWND for the main Word window

//	Added 12.18.13 - Save path for final document.
WCHAR				* g_szSavePath = NULL;
WCHAR				* g_szTemplatePath = NULL;

PTAG				g_pTags;
INT					g_cTags;

HFONT				g_hfEdit = NULL;

HKEY				g_hKey;

INT_PTR CALLBACK MainDialogProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
void Cls_OnDestroy(HWND hwnd);
BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);

//	Added 4.17.14 - To Set the focus on the edit control when the app is activated.
void Cls_OnActivate(HWND hwnd, UINT state, HWND hwndActDeact, BOOL fMinimized);

BOOL LoadTags(_Document * pDoc, PTAG * ppTags, INT * pcTags);
BOOL TagExists(WCHAR * szTag, PTAG pTags, INT cTags);
BOOL InitTag(PTAG pTag, WCHAR * szTag, WCHAR * szText);
BOOL FreeTag(PTAG pTag);

void SetCurrentTag(HWND hwndCombo, HWND hwndEdit, INT i);
void SaveTagText(HWND hwndEdit, INT i);

void ReplaceTags();
void SaveDoc();

BOOL CallWordQuit() {

	Documents * pDocs = NULL;
	long count;
	HRESULT hr;

	if( !g_pWordApp )
		return FALSE;

	hr = _Application_get_Documents(g_pWordApp, &pDocs);
	if( S_OK != hr || !pDocs )
		return TRUE;

	hr = Documents_get_Count(pDocs, &count);
	if( S_OK != hr )
		return TRUE;


	if( count > 1 )
		return FALSE;

	return TRUE;
}

/*
 *		Added 12.20.13
 */

BOOL ProcessCmdLine(WCHAR * szCmdLine) {

	WCHAR		** argv;
	int			argc;

	WCHAR		* szTemplate, * szSave;

	argv = CommandLineToArgvW(szCmdLine, &argc);

	if( argv == NULL ) {
		DWORD error;
		error = GetLastError();
		return FALSE;
	}

	szTemplate = NULL;
	szSave = NULL;

	if( argc < 1 ) {
		LocalFree((HLOCAL) argv);
		return FALSE;
	} else if( argc == 1 ) {
		szTemplate = argv[0];
	} else if( argc > 1 ) {
		if( wcscmp(argv[0], L"template") == 0 ) {
			szTemplate = argv[1];
			if( argc > 3 )
				szSave = argv[3];
		} else {
			if( argc > 3 )
				szTemplate = argv[3];
			else {
				LocalFree((HLOCAL) argv);
				return FALSE;
			}

			szSave = argv[1];
		}
	}

	if( NULL != szTemplate ) {
		int cchTemplate;

		cchTemplate = wcslen(szTemplate);
		g_szTemplatePath = (WCHAR *) calloc(cchTemplate + 1, sizeof(WCHAR));
		wcscpy(g_szTemplatePath, szTemplate);
	}

	if( NULL != szSave ) {
		int cchSave;

		cchSave = wcslen(szSave);
		g_szSavePath = (WCHAR *) calloc(cchSave + 1, sizeof(WCHAR));
		wcscpy(g_szSavePath, szSave);
	}

	LocalFree((HLOCAL) argv);

	return TRUE;
}

/*
 *		Added 11.24.13 to Load the previous window position
 */

BOOL SavePrevPos(int x, int y) {

	LONG	ret;

	if( g_hKey == NULL || g_hKey == INVALID_HANDLE_VALUE )
		return FALSE;

	RegSetValueEx(g_hKey, L"x", 0, REG_DWORD, (BYTE *) &x, sizeof(int));

	ret = RegSetValueEx(g_hKey, L"y", 0, REG_DWORD, (BYTE *) &y, sizeof(int));


	if( ERROR_SUCCESS == ret )
		return TRUE;

	return FALSE;
}

BOOL LoadPrevPos(int * px, int * py) {
	LSTATUS		ret;

	ret = RegOpenKeyEx(HKEY_CURRENT_USER, SUBKEY_PATH,
		0, KEY_ALL_ACCESS, &g_hKey);

	if( ret == ERROR_FILE_NOT_FOUND ) {

		ret = (LSTATUS) RegCreateKeyEx(HKEY_CURRENT_USER, SUBKEY_PATH, 0, NULL, 0,
			KEY_ALL_ACCESS, NULL, &g_hKey, NULL);

		if( ret == ERROR_SUCCESS ) {
			if( SavePrevPos(100, 100) )
				ret = ERROR_SUCCESS;
			else
				ret = ERROR_FILE_NOT_FOUND;
		}

	}

	if( ret == ERROR_SUCCESS ) {

			int		x, y;
			DWORD	cbOut = sizeof(int);
			LONG	ret;

#if _WIN32_WINNT >= 0x0600
			ret = RegGetValue(g_hKey, NULL, L"x", RRF_RT_REG_DWORD, NULL, &x, &cbOut);

			ret = RegGetValue(g_hKey, NULL, L"y", RRF_RT_REG_DWORD, NULL, &y, &cbOut);
#else
			ret = RegQueryValueEx(g_hKey, L"x", NULL, NULL, (BYTE *) &x, &cbOut);

			ret = RegQueryValueEx(g_hKey, L"y", NULL, NULL, (BYTE *) &y, &cbOut);
#endif


			if( ret == ERROR_SUCCESS ) {
				*px = x;
				*py = y;
				return TRUE;
			}			
	}

	*px = 0;
	*py = 0;

	return FALSE;
}

/*
 *		Added 7.30.13 to Remove line breaks when text is pasted into the edit control.
 */

WCHAR * RemoveLineBreaksFromText(WCHAR * szText, int cchText, int offset, int limit, int * pcchEditedText) {

	WCHAR		* szEditedText;
	int			i, j;

	if( limit > cchText )
		return NULL;

	szEditedText = (WCHAR *) calloc(cchText + 1, sizeof(WCHAR));
	if( !szEditedText ) {
		*pcchEditedText = -1;
		return NULL;
	}

	if( offset > 0 ) {
		memcpy(szEditedText, szText, offset * sizeof(WCHAR));
	}

	limit += offset;
	for( i = offset, j = offset; i < limit; ++i ) {
		WCHAR	c;

		c = *(szText + i);

		if( c != L'\n' && c != L'\r') {
			*(szEditedText + j) = c;
			++j;
		}
	}

	*pcchEditedText = j;

	return szEditedText;
}

LRESULT CALLBACK EditCtlSubclassProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
	WNDPROC		EditWndProc;
	LRESULT		ret = 0;
	WCHAR		* szText;
	int			cchText, cchTextBefore, selection, endselection, beginselection;
	short		keystate;

	EditWndProc = (WNDPROC) GetWindowLongPtr(hwnd, GWLP_USERDATA);

	switch( message ) {

	case WM_PASTE:		
		
		cchTextBefore = Edit_GetTextLength(hwnd);

		endselection = HIWORD((selection = Edit_GetSel(hwnd)));	
		beginselection = LOWORD(selection);

		ret = CallWindowProc(EditWndProc, hwnd, message, wParam, lParam);
		cchText = Edit_GetTextLength(hwnd);

		szText = (WCHAR *) malloc((cchText + 1) * sizeof(WCHAR));
		if( szText ) {
			WCHAR * szEditedText;
			int		cchEditedText;
			
			Edit_GetText(hwnd, szText, cchText + 1);

			szEditedText = RemoveLineBreaksFromText(szText, cchText,
				beginselection, cchTextBefore - cchText, &cchEditedText);
			//szEditedText = RemoveLineBreaksFromText(szText, cchText, 0, &cchEditedText);
			if( szEditedText ) {
				//Edit_SetText(hwnd, szEditedText);
				//free(szEditedText);
				//Edit_SetSel(hwnd, cchEditedText, cchEditedText);
			}

			free(szText);
		}

		return ret;

	case WM_KEYDOWN:
		keystate = GetKeyState(VK_CONTROL);
		if( wParam == 0x41 && (keystate >> 15)) {
			cchText = Edit_GetTextLength(hwnd);
			Edit_SetSel(hwnd, 0, cchText);
		}

	}

	return CallWindowProc(EditWndProc, hwnd, message, wParam, lParam);
}

/*
 *		End 7.30.13 Edit.
 */

HRESULT	NewDocumentFromTemplate(TCHAR * szTemplate, Documents * pDocs, _Document ** ppDoc) {

	HRESULT			hr;

	VARIANT			varResult;
	VARIANT			varTemplate;	

	varTemplate.vt = VT_BSTR;
	varTemplate.bstrVal = SysAllocString(szTemplate);
	
	RETRY_ON_REJECTION(AutowrapNamedInvoke(&varResult, pDocs, L"Add", 1, L"Template", &varTemplate), hr);

	SysFreeString(varTemplate.bstrVal);

	if( !SUCCEEDED(hr) )
		return hr;

	hr = TRANSFORM_DISP_RESULT(&varResult, ppDoc, &IID__Document);

	return hr;
}

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, 
					 TCHAR * szCmdLine, int iShowCmd) {

	WNDCLASS		wndclass = {0};
	HWND			hwnd;
	HACCEL			haccel;
	MSG				msg;

	HRESULT			hr;
	IUnknown		* pUnk;		
	INT_PTR			ret;
	int				x, y;

	CLSID			clsidWord;

	BOOL			fCmdLine;

	InitCommonControls();

	hr = OleInitialize(NULL);

	//	Load Word
	//hr = GetActiveObject(&CLSID_Application, NULL, &pUnk);
	hr = CLSIDFromProgID(L"Word.Application", &clsidWord);
	hr = GetActiveObject(&clsidWord, NULL, &pUnk);
	if(SUCCEEDED(hr)) {

		hr = IUnknown_QueryInterface(pUnk, &IID__Application, &g_pWordApp);
		IUnknown_Release(pUnk);
		//g_fActive = TRUE;		

	} else {

		hr = CoCreateInstance(&CLSID_Application, NULL, CLSCTX_LOCAL_SERVER,
			&IID__Application, &g_pWordApp);
		//g_fActive = FALSE;

	}
	if(!SUCCEEDED(hr)) {
		MessageBox(NULL, L"Error Instantiating Word.Application", L"Error", MB_ICONERROR);
		return (int) hr;
	}

	_Application_put_Visible(g_pWordApp, VARIANT_TRUE);
	g_hwndWord = FindWindow(L"OpusApp", NULL);

	fCmdLine = ProcessCmdLine(szCmdLine);

	//	Create new document from template passed on command line
	/*if(_tcslen(szCmdLine) > 0) {*/
	if( NULL != g_szTemplatePath ) {
		Documents		* pDocs;

		//hr = _Application_get_Documents(g_pWordApp, &pDocs);
		RETRY_ON_REJECTION(_Application_get_Documents(g_pWordApp, &pDocs), hr);
		if(!SUCCEEDED(hr) || !pDocs) {
			ret = (int) hr;
#ifdef _DEBUG
			{ WCHAR szError[256] = {0};
			wsprintf(szError, L"Error: ret = 0x%x.", ret); 
			MessageBox(NULL, szError, L"Load Error", MB_ICONERROR); }
#endif
			goto CLEANUP;
		}
		
		hr = NewDocumentFromTemplate(g_szTemplatePath, pDocs, &g_pDoc);
		if(!SUCCEEDED(hr) || !g_pDoc) {
			Documents_Release(pDocs);
			ret = (int) hr;

#ifdef _DEBUG
			{ WCHAR szError[256] = {0};
			wsprintf(szError, L"Error: ret = 0x%x.", ret); 
			MessageBox(NULL, szError, L"Load Error", MB_ICONERROR); }
#endif
			goto CLEANUP;
		}

		Documents_Release(pDocs);

	} else {

		ret = 1;
		goto CLEANUP;

	}

	wndclass.cbWndExtra = DLGWINDOWEXTRA;
	wndclass.hbrBackground = (HBRUSH) (COLOR_BTNFACE + 1);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));
	wndclass.hInstance = hInstance;
	wndclass.lpfnWndProc = MainDialogProc;
	wndclass.lpszClassName = L"Word Template Wizard";
	wndclass.style = CS_VREDRAW | CS_HREDRAW;

	if(!RegisterClass(&wndclass)) {
		ret = GetLastError();
		goto CLEANUP;
	}

	hwnd = CreateDialog(hInstance, MAKEINTRESOURCE(IDD_DIALOG1),
		NULL, MainDialogProc);

	//	Load previous coordinates
	if( LoadPrevPos(&x, &y) )
		SetWindowPos(hwnd, NULL, x, y, 0, 0, SWP_NOREDRAW | SWP_NOOWNERZORDER |
			SWP_NOZORDER | SWP_NOSIZE | SWP_NOREDRAW);

	ShowWindow(hwnd, iShowCmd);
	UpdateWindow(hwnd);

	haccel = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDR_ACCELERATOR1));

	while(GetMessage(&msg, NULL, 0, 0)) {
		if(!TranslateAccelerator(hwnd, haccel, &msg) && !IsDialogMessage(hwnd, &msg)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	ret = msg.wParam;

CLEANUP:

	if( g_szSavePath )
		free(g_szSavePath);

	if( g_szTemplatePath )
		free(g_szTemplatePath);

	if( g_hfEdit )
		DeleteObject((HGDIOBJ) g_hfEdit);

	if(g_pDoc) {
		_Document_Release(g_pDoc);
	}

	if(g_pWordApp) {
		//if(!g_fActive) {
		if( CallWordQuit() ) {
			VARIANT		varSaveOptions;

			//_Application_put_Visible(g_pWordApp, VARIANT_TRUE);

			varSaveOptions.vt = VT_I4;
			varSaveOptions.lVal = wdDoNotSaveChanges;
			//varSaveOptions.lVal = wdPromptToSaveChanges;
			hr = AutowrapNamedInvoke(NULL, g_pWordApp, L"Quit", 1,
				L"SaveChanges", &varSaveOptions);
		}
		_Application_Release(g_pWordApp);
	}

	OleUninitialize();

	return (int) ret;
}

INT_PTR CALLBACK MainDialogProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

	switch(message) {

		HANDLE_DLG_MSG(hwnd, WM_COMMAND, Cls_OnCommand);
		HANDLE_DLG_MSG(hwnd, WM_INITDIALOG, Cls_OnInitDialog);
		HANDLE_DLG_MSG(hwnd, WM_DESTROY, Cls_OnDestroy);
		HANDLE_DLG_MSG(hwnd, WM_ACTIVATE, Cls_OnActivate);

	}

	return DefWindowProc(hwnd, message, wParam, lParam);
}

void Cls_OnDestroy(HWND hwnd) {

	RECT rect;

	GetWindowRect(hwnd, &rect);
	SavePrevPos(rect.left, rect.top);

	PostQuitMessage(0);

}

void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {
	static INT		prevTag = 0;
	static BOOL		fTextChange = FALSE;

	HWND			hwndCombo, hwndEdit;
	int				cursel;

	hwndCombo = GetDlgItem(hwnd, IDC_COMBO_TAGS);
	hwndEdit = GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT);
	cursel = ComboBox_GetCurSel(hwndCombo);

	switch(id) {

		case ID_ACCELERATOR_B:
			
			SetFocus(hwndCombo);
			ComboBox_ShowDropdown(hwndCombo, TRUE);
			
			break;

		case ID_ACCELERATOR_N:		//	PageUp
			
			if( cursel > 0 ) {
				--cursel;
				ComboBox_SetCurSel(hwndCombo, cursel);
				SendMessage(hwnd, WM_COMMAND, MAKEWPARAM(IDC_COMBO_TAGS, CBN_SELENDOK),
					(LPARAM) hwndCombo);
			}

			break;

		case ID_ACCELERATOR_M:		//	PageDown

			if( cursel < g_cTags ) {
				++cursel;
				ComboBox_SetCurSel(hwndCombo, cursel);
				SendMessage(hwnd, WM_COMMAND, MAKEWPARAM(IDC_COMBO_TAGS, CBN_SELENDOK),
					(LPARAM) hwndCombo);
			}

			break;


		case IDC_COMBO_TAGS:

			if(codeNotify == CBN_SELENDOK) {
				int		i;

				if(fTextChange) {	//	Save new tag text

					SaveTagText(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), prevTag);

					fTextChange = FALSE;
				}

				i = ComboBox_GetCurSel(hwndCtl);
				SetCurrentTag(hwndCtl, GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), i);

				prevTag = i;
			}

			return;

		case IDC_EDIT_REPLACEMENT:

			if(codeNotify == EN_CHANGE)
				fTextChange = TRUE;

			return;

		case IDC_BUTTON_SAVE:

			if(fTextChange) {	//	Save new tag text

				SaveTagText(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), prevTag);

				fTextChange = FALSE;
			}

			ReplaceTags();

			//	Added 2.1.13 -	Bring Word application window to the foreground
			//					to show the SaveAs dialog.
			//if( g_fActive )
			_Application_Activate(g_pWordApp);

			if( g_hwndWord )
				SetForegroundWindow(g_hwndWord);

			if( !Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_PATH)) ) {
				if( g_szSavePath != NULL ) {
					free(g_szSavePath);
					g_szSavePath = NULL;
				}
			}

			//	Added 6.19.13 - Options for actions after Generate

			if( Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_SAVE)) )
				SaveDoc();

			if( Button_GetCheck(GetDlgItem(hwnd, IDC_CHECK_CLOSE)) )
				DestroyWindow(hwnd);

			return;
	}
}

void PopulateComboBox(HWND hwndCombo, PTAG pTags, int cTags) {
	int			i;

	for(i = 0; i < cTags; i++) {

		ComboBox_AddString(hwndCombo, pTags[i].szTag);

	}
}

BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam) {

	HWND		hwndCombo;
	//int			ret;
	WNDPROC		EditWndProc;

	hwndCombo = GetDlgItem(hwnd, IDC_COMBO_TAGS);

	//ret = ComboBox_SetItemHeight(hwndCombo, 0, 300);

	if(LoadTags(g_pDoc, &g_pTags, &g_cTags)) {

		PopulateComboBox(hwndCombo, g_pTags, g_cTags);

		SetCurrentTag(hwndCombo, GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), 0);

	} else {
		/*
		 *	Load tags has failed.
		 *	g_cTags contains the error code.
		 */
		if( g_cTags == LT_ERROR_CONTENT ) {

			while( g_cTags == LT_ERROR_CONTENT ) {
				if( LoadTags(g_pDoc, &g_pTags, &g_cTags) ) {
					PopulateComboBox(hwndCombo, g_pTags, g_cTags);
					SetCurrentTag(hwndCombo, GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), 0);
				}
			}

		} else if( g_cTags == LT_ERROR_FIND ) {

			HRESULT hr = (HRESULT) g_pTags;
			if( LoadTags(g_pDoc, &g_pTags, &g_cTags) ) {
				PopulateComboBox(hwndCombo, g_pTags, g_cTags);
				SetCurrentTag(hwndCombo, GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), 0);
			}

		}
	}

	Button_SetCheck(GetDlgItem(hwnd, IDC_CHECK_SAVE), TRUE);
	Button_SetCheck(GetDlgItem(hwnd, IDC_CHECK_CLOSE), TRUE);

	if( g_szSavePath )
		Button_SetCheck(GetDlgItem(hwnd, IDC_CHECK_PATH), TRUE);
	else
		Button_Enable(GetDlgItem(hwnd, IDC_CHECK_PATH), FALSE);
	
	g_hfEdit = CreateFont(-16, 0, 0, 0, FW_NORMAL,
		FALSE, FALSE, FALSE, DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY,
		DEFAULT_PITCH,
		L"Times New Roman");

	if( g_hfEdit )
		SetWindowFont(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), g_hfEdit, TRUE);

	//	Added 7.30.13 to subclass Edit control to remove line breaks from text
	//	on paste operations.
	EditWndProc = (WNDPROC) SetWindowLongPtr(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT),
		GWLP_WNDPROC, (LONG_PTR) EditCtlSubclassProc);
	SetWindowLongPtr(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT), GWL_USERDATA,
		(LONG_PTR) EditWndProc);

	SendNotifyMessage(hwnd, WM_CHANGEUISTATE, MAKEWPARAM(UIS_CLEAR, UISF_HIDEACCEL), 0);  

	return FALSE;
}

BOOL LoadTags(_Document * pDoc, PTAG * ppTags, INT * pcTags) {

	HRESULT			hr;

	Range			* pRange;
	Find			* pFind;

	VARIANT			varResult, varText, varMWC;

	PTAG			pTags, pTemp;

	INT				cTags, i;

	i = 0;

	cTags = TAG_BUFFER_INIT_COUNT;
	pTags = (PTAG) malloc(cTags * sizeof(TAG));
	if(!pTags) {
		*ppTags = NULL;
		*pcTags = LT_ERROR_MEM;
		return FALSE;
	}

	RETRY_ON_REJECTION(_Document_get_Content(pDoc, &pRange), hr);
//	hr = _Document_get_Content(pDoc, &pRange);	
	if( !SUCCEEDED(hr) || !pRange ) {
#ifdef _DEBUG
		MessageBox(NULL, L"GetContent error", L"Error", MB_ICONERROR);
#endif //_DEBUG
		*pcTags = LT_ERROR_CONTENT; 
		return FALSE; 
	}
	hr = Range_get_Find(pRange, &pFind);		if( !SUCCEEDED(hr) || !pFind ) { Range_Release(pRange); *pcTags = LT_ERROR_FIND; return FALSE; }
	varText.vt = VT_BSTR;		varText.bstrVal = SysAllocString(L"(\\[{2})(*)(\\]{2})");
	varMWC.vt = VT_BOOL;		varMWC.boolVal = VARIANT_TRUE;
	hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 2,
		L"FindText", &varText, L"MatchWildcards", &varMWC);
	if( !SUCCEEDED(hr) ) {
#ifdef _DEBUG
		MessageBox(NULL, L"Execute Error", L"Error", MB_ICONERROR);
#endif //_DEBUG
		*pcTags = LT_ERROR_FIND;
		*ppTags = (PTAG) hr;
		return FALSE; 
	}
	while( SUCCEEDED(hr) && varResult.boolVal == VARIANT_TRUE) {

		BSTR		bstrTag;

		hr = Range_get_Text(pRange, &bstrTag);

		if(!TagExists((WCHAR *) bstrTag, pTags, i)) {

			if(i >= cTags) {

				pTemp = pTags;
				cTags *= 2;
				pTags = (PTAG) malloc(sizeof(TAG) * cTags);
				memcpy(pTags, pTemp, sizeof(TAG) * cTags / 2);
				free(pTemp);

			}

			InitTag(pTags + i, (WCHAR *) bstrTag, (WCHAR *) bstrTag);

			++i;
		}

		SysFreeString(bstrTag);

		hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 2,
			L"FindText", &varText, L"MatchWildcards", &varMWC);
		if( !SUCCEEDED(hr) ) {
#ifdef _DEBUG
			MessageBox(NULL, L"Execute Error", L"Error", MB_ICONERROR);
#endif //_DEBUG
			*pcTags = LT_ERROR_FIND;
			*ppTags = (PTAG) hr;
			return FALSE; 
		}
	}

	SysFreeString(varText.bstrVal);

	Find_Release(pFind);
	Range_Release(pRange);

	if(SUCCEEDED(hr)) {
		*pcTags = i;
		*ppTags = pTags;
	}

	return TRUE;
}

BOOL TagExists(WCHAR * szTag, PTAG pTags, INT cTags) {

	int		i;

	if(cTags < 1)
		return FALSE;

	for(i = 0; i < cTags; i++) {

		if(wcscmp(szTag, (pTags + i)->szTag) == 0)
			return TRUE;

	}

	return FALSE;

}	

BOOL InitTag(PTAG pTag, WCHAR * szTag, WCHAR * szText) {

	if(!pTag || !szTag || !szText)
		return FALSE;
	
	pTag->cchTag = wcslen(szTag);
	pTag->cchText = wcslen(szText);

	pTag->szTag = NULL;
	pTag->szText = NULL;

	pTag->szTag = (WCHAR *) malloc(sizeof(WCHAR) * (pTag->cchTag + 1));
	pTag->szText = (WCHAR *) malloc(sizeof(WCHAR) * (pTag->cchText + 1));

	if(!pTag->szTag || !pTag->szText) {
		if(pTag->szTag)		free(pTag->szTag);
		if(pTag->szText)	free(pTag->szText);
		return FALSE;
	}

	memcpy(pTag->szTag, szTag, sizeof(WCHAR) * (pTag->cchTag + 1));
	memcpy(pTag->szText, szText, sizeof(WCHAR) * (pTag->cchText + 1));

	return TRUE;
}

void SetCurrentTag(HWND hwndCombo, HWND hwndEdit, INT i) {

	ComboBox_SetCurSel(hwndCombo, i);

	Edit_SetText(hwndEdit, g_pTags[i].szText);
	Edit_SetSel(hwndEdit, 0, g_pTags[i].cchText);
	SetFocus(hwndEdit);
}

void SaveTagText(HWND hwndEdit, INT i) {

	int		cchText;
	TCHAR	* szText;

	PTAG	pprevTag;

	pprevTag = &(g_pTags[i]);

	cchText = Edit_GetTextLength(hwndEdit);
	szText = (TCHAR *) malloc((cchText + 1) * sizeof(TCHAR));
	memset(szText, 0, sizeof(TCHAR) * (cchText + 1));
	pprevTag->cchText = Edit_GetText(hwndEdit, szText, cchText + 1);
	free(pprevTag->szText);
	pprevTag->szText = szText;

}

void ReplaceTags() {

	HRESULT			hr;

	Range			* pRange = NULL;
	Find			* pFind = NULL;
	//Replacement	* pReplacement;

	VARIANT			varResult, varTag, varText, /*varReplace, */varWrap;
	VARIANT			varMatchCase;

	int				i;

	BSTR	bstrBlank = SysAllocString(L"");	

	for(i = 0; i < g_cTags; i++) {

		//	Added 2.1.13 -	Continue on to the next tag if the tag text
		//					was not altered. Otherwise, the while loop
		//					on the result of the Find object Execute method
		//					will be infinite.
		if( wcscmp(g_pTags[i].szTag, g_pTags[i].szText) == 0)
			continue;

		//hr = _Document_get_Content(g_pDoc, &pRange);
		RETRY_ON_REJECTION(_Document_get_Content(g_pDoc, &pRange), hr);

		//hr = Range_get_Find(pRange, &pFind);
		RETRY_ON_REJECTION(Range_get_Find(pRange, &pFind), hr);


		varTag.vt = VT_BSTR;	
		varTag.bstrVal = SysAllocString(g_pTags[i].szTag);

		varText.vt = VT_BSTR;	
		varText.bstrVal = SysAllocString(g_pTags[i].szText);
		
		//varReplace.vt = VT_INT;	varReplace.intVal = wdReplaceAll;
		varWrap.vt = VT_INT;	varWrap.intVal = wdFindContinue;

		varMatchCase.vt = VT_BOOL;
		varMatchCase.boolVal = VARIANT_FALSE;

		/*hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 1,
			L"FindText", &varTag);*/
		hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 2,
			L"FindText", &varTag, L"MatchCase", &varMatchCase);
		

		while( SUCCEEDED(hr) && varResult.boolVal == VARIANT_TRUE) {
			
			hr = Range_put_Text(pRange, bstrBlank);
			
			// Breakup long text; program seems to have trouble passing large BSTRs.
			if(g_pTags[i].cchText > RANGE_MAX_INSERT) {		

				UINT	j, cchCopy;
				BSTR	bstrSub;
				TCHAR	szSub[RANGE_MAX_INSERT + 1] = {0};

				for(j = 0; j < g_pTags[i].cchText; ) {

					cchCopy = (RANGE_MAX_INSERT < (g_pTags[i].cchText - j)) ? RANGE_MAX_INSERT : g_pTags[i].cchText - j;
					memcpy(szSub, g_pTags[i].szText + j, cchCopy * sizeof(WCHAR));
					bstrSub = SysAllocString(szSub);
					hr = Range_InsertAfter(pRange, bstrSub);
					j += cchCopy;
					SysFreeString(bstrSub);
					memset(szSub, 0, (RANGE_MAX_INSERT + 1) * sizeof(TCHAR));

				}

			} else {
			
				hr = Range_InsertAfter(pRange, varText.bstrVal);

			}
			
			/*hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 2,
				L"FindText", &varTag, L"Wrap", &varWrap);*/
			hr = AutowrapNamedInvoke(&varResult, pFind, L"Execute", 3,
				L"FindText", &varTag, L"Wrap", &varWrap, L"MatchCase", &varMatchCase);
		}

		SysFreeString(varText.bstrVal);
		SysFreeString(varTag.bstrVal);

		//Replacement_Release(pReplacement);
		if( pFind)	Find_Release(pFind);
		if( pRange)	Range_Release(pRange);
	}

	SysFreeString(bstrBlank);

}

void SaveDoc() {
	HRESULT	hr;

	if( NULL != g_szSavePath ) {

		VARIANT		varName, varFormat, varResult;
		
		varName.vt = VT_BSTR;	varName.bstrVal = SysAllocString(g_szSavePath);
		varFormat.vt = VT_I4;	/*varFormat.lVal = wdFormatDocument;*/

#if _WIN32_WINNT >= 0x0600
		varFormat.lVal = 16;	//	wdFormatDocumentDefault 
#else
		varFormat.lVal = 0;		//	wdFormatDocument
#endif
		

		hr = AutowrapNamedInvoke(&varResult, g_pDoc, L"SaveAs", 2,
			L"FileName", &varName, L"FileFormat", &varFormat);

		SysFreeString(varName.bstrVal);
		
	} else {

		hr= _Document_Save(g_pDoc);

	}

	/*if(!g_fActive)
		_Application_put_Visible(g_pWordApp, VARIANT_FALSE);*/
}

void Cls_OnActivate(HWND hwnd, UINT state, HWND hwndActDeact, BOOL fMinimized) {

	if( state == WA_ACTIVE || state == WA_CLICKACTIVE ) {
		SetFocus(GetDlgItem(hwnd, IDC_EDIT_REPLACEMENT));
	}

}