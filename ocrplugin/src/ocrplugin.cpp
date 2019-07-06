#include <Windows.h>
#include <windowsx.h>
#include <wincodec.h>
#include <atlcomcli.h>

#include "OCRPlugin.h"
#include "ClipboardToWord_h.h"

#define IDC_BUTTON_MANUALCHECK 1001

extern "C" BOOL InitializeMODI();
extern "C" CLSID g_clsidDocument;
extern "C" BOOL PerformOCRonTiff(WCHAR * szPath, UINT * pcchText, WCHAR ** pszText);

extern "C" IWICImagingFactory		* g_pFactory;
extern "C" BOOL InitializeIWIC();
extern "C" void CleanupIWIC();
extern "C" BOOL ConvertBitMapToTiff(WCHAR * szPath, BITMAP * pbm, int cbBuffer, BYTE * pBuffer);

WCHAR g_szTempFileFolder[MAX_PATH];

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

BOOL Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);
void Cls_OnSize(HWND hwnd, UINT state, int cx, int cy);
void Cls_OnDestroy(HWND hwnd);
void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);

HWND	g_hwndText;
HWND	g_hwndMain;
HWND	g_hwndManualCheck;

WCHAR		* g_szClassName = L"ScreenToTiffOCR";
HINSTANCE	g_hInstance;

HWND CreateMainWindow() {
	DWORD error;

	HWND hwndMain = CreateWindow(g_szClassName, L"Screen OCR", WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 600, 350, NULL, NULL, g_hInstance, 0);
	if( hwndMain == NULL ) {
		error = GetLastError();
		return NULL;
	}

	ShowWindow(hwndMain, SW_NORMAL);
	UpdateWindow(hwndMain);

	return hwndMain;
}

OCRPlugin::OCRPlugin() {
	
	InitializeMODI();

	InitializeIWIC();

	GetTempPath(MAX_PATH, g_szTempFileFolder);

	
	WNDCLASS	wndclass = { 0 };

	wndclass.hbrBackground = GetSysColorBrush(COLOR_BTNFACE);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.lpfnWndProc = WndProc;
	wndclass.lpszClassName = g_szClassName;
	wndclass.hInstance = (HINSTANCE) GetModuleHandle(L"OCRPlugin.dll");
	g_hInstance = wndclass.hInstance;

	DWORD error;
	if( !RegisterClass(&wndclass) ) {
		error = GetLastError();
	}

	g_hwndMain = CreateMainWindow();
	SetWindowLongPtr(g_hwndMain, GWLP_USERDATA, (LONG_PTR) this);
}

OCRPlugin::~OCRPlugin() {
	
	CleanupIWIC();

	if( g_hwndMain )	DestroyWindow(g_hwndMain);

}

BOOL Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	g_hwndText = CreateWindow(L"Edit", NULL, WS_CHILD | WS_VISIBLE | WS_VSCROLL | ES_MULTILINE | ES_READONLY,
		0, 0, 0, 0, hwnd, NULL, NULL, 0);
	if( !g_hwndText ) {
		DWORD error = GetLastError();
		return error;
	}

	g_hwndManualCheck = CreateWindow(L"Button", L"&Manual Check Clipboard", WS_CHILD | WS_VISIBLE,
		0, 0, 0, 0, hwnd, NULL, NULL, 0);
	if( !g_hwndManualCheck ) {
		DWORD error = GetLastError();
		return error;
	}
	auto prev = SetWindowLongPtr(g_hwndManualCheck, GWLP_ID, IDC_BUTTON_MANUALCHECK);

	return TRUE;
}

void Cls_OnSize(HWND hwnd, UINT state, int cx, int cy) {

	static const UINT padding = 5;
	static const UINT button_height = 20;

	UINT cx_button = cx - 2 * padding;
	UINT cy_button = button_height;

	UINT x_text = padding;
	UINT y_text = padding;
	UINT cx_text = cx - 2 * padding;
	UINT cy_text = cy - 3 * padding - cy_button;

	UINT x_button = padding;
	UINT y_button = 2 * padding + cy_text;

	MoveWindow(g_hwndText, x_text, y_text, cx_text, cy_text, TRUE);

	MoveWindow(g_hwndManualCheck, x_button, y_button, cx_button, cy_button, TRUE);

}

void Cls_OnDestroy(HWND hwnd) {

	g_hwndMain = NULL;
	g_hwndText = NULL;

}

void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {

	switch( id ) {

	case IDC_BUTTON_MANUALCHECK: {
		
		OCRPlugin * pPlugin = (OCRPlugin *) GetWindowLongPtr(hwnd, GWLP_USERDATA);
			
		HRESULT hr;
		if( pPlugin )	
			hr = pPlugin->NewBitmapOnClipboard();

		break; }
	}
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

	switch( message ) {

		HANDLE_MSG(hwnd, WM_CREATE, Cls_OnCreate);
		HANDLE_MSG(hwnd, WM_SIZE, Cls_OnSize);
		HANDLE_MSG(hwnd, WM_DESTROY, Cls_OnDestroy);
		HANDLE_MSG(hwnd, WM_COMMAND, Cls_OnCommand);

	}

	return DefWindowProc(hwnd, message, wParam, lParam);
}

STDMETHODIMP OCRPlugin::GetProperty(BSTR propertyname, BSTR * propertyvalue) {

	*propertyvalue = SysAllocString(L"");

	return S_OK;
}

STDMETHODIMP OCRPlugin::SetProperty(BSTR propertyname, BSTR propertyvalue, VARIANT_BOOL * pres) {

	*pres = VARIANT_TRUE;

	return S_OK;
}

STDMETHODIMP OCRPlugin::ClipboardUpdate() {


	return S_OK;
}

STDMETHODIMP OCRPlugin::NewBitmapOnClipboard() {

	BOOL	fOpenCB;
	DWORD	error;

	fOpenCB = OpenClipboard(NULL);
	if( !fOpenCB ) {
		error = GetLastError();
		return E_FAIL;
	}

	UINT	format = CF_BITMAP;
	HBITMAP hbm = (HBITMAP) GetClipboardData(format);
	BITMAP bm = { 0 };
	int cbWritten = GetObject(hbm, sizeof(bm), &bm);
	int	cbBM = bm.bmHeight * bm.bmPlanes * bm.bmWidthBytes;
	BYTE * pBuffer = (BYTE *) CoTaskMemAlloc(cbBM);
	if( !pBuffer ) return E_OUTOFMEMORY;
	cbWritten = GetBitmapBits(hbm, cbBM, pBuffer);
	
	CloseClipboard();
	fOpenCB = FALSE;

	WCHAR szTempFilePath[MAX_PATH] = { 0 };
	if( GetTempFileName(g_szTempFileFolder, L"OCR", 0, szTempFilePath) == 0 ) {
		CoTaskMemFree(pBuffer);
		error = GetLastError();
		return E_FAIL;
	}

	BOOL fConvert = ConvertBitMapToTiff(szTempFilePath, &bm, cbWritten, pBuffer);
	if( !fConvert ) {
		CoTaskMemFree(pBuffer);
		return E_FAIL;
	}

	UINT	cchText;
	WCHAR	* szText = NULL;
	BOOL fOCR = PerformOCRonTiff(szTempFilePath, &cchText, &szText);
	if( fOCR ) {
		
		if( !g_hwndMain )
			g_hwndMain = CreateMainWindow();

		Edit_SetText(g_hwndText, szText);
		
	} 

	if( szText) CoTaskMemFree(szText);
	if( pBuffer ) { CoTaskMemFree(pBuffer); }
	DeleteFile(szTempFilePath);

	if( fOpenCB )CloseClipboard();

	return S_OK;
}

STDMETHODIMP OCRPlugin::BitmapSavedToTempFile(BSTR bstr_filepath) {



	return S_OK;
}

STDMETHODIMP OCRPlugin::Quit() {



	return S_OK;
}