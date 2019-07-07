#include <Windows.h>
#include <windowsx.h>
#include <atlcomcli.h>

#include <string>
#include <sstream>
#include <memory>

#include <Autowrap.h>
#include <ClipboardToWord_h.h>

#include "clipboardextender.h"
#include "resource.h"

#pragma comment(lib, "autowrap.lib")

ClipboardExtenderMainWindow::ClipboardExtenderMainWindow() {

	intrnlRegisterClass();
	intrnlCreateWindow();
	intrnlLoadAccellorators();

	LoadEventSink();

	LoadClipboardToWordApplication();

}

ClipboardExtenderMainWindow::~ClipboardExtenderMainWindow() {
	
	HRESULT hr;

	if( m_pCP && m_cookie > 0) {

		hr = m_pCP->Unadvise(m_cookie);
		m_pCP->Release();
	}

	if( m_pClipboardDispatch ) {

		VARIANT varResult;

		hr = AutowrapInvoke(DISPATCH_METHOD, &varResult, m_pClipboardDispatch, L"Quit", 0);
		m_pClipboardDispatch->Release();
	}

}

void ClipboardExtenderMainWindow::intrnlRegisterClass() {
	
	szWindowName = L"Clipboard Extender";

	wc.hbrBackground = (HBRUSH) ( COLOR_BTNFACE + 1 );
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = (HINSTANCE) GetModuleHandle(nullptr);
	wc.lpfnWndProc = __super::WndProc;
	wc.lpszClassName = L"clipboardextender_mainwindow_class";
	wc.style = CS_VREDRAW | CS_HREDRAW;

	if( !RegisterClass(&wc) ) {
		std::string strError = "RegisterClass error: " + std::to_string(GetLastError());
		throw std::exception{ strError.c_str() };
	}
}

void ClipboardExtenderMainWindow::intrnlCreateWindow() {

	m_window = CreateWindow(wc.lpszClassName, szWindowName, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 1280, 720,
		NULL, NULL, wc.hInstance, this);

	if( NULL == m_window ) {
		std::string strError = "CreateWindow error: " + std::to_string(GetLastError());
		throw std::exception{ strError.c_str() };
	}

}

void ClipboardExtenderMainWindow::intrnlLoadAccellorators() {

	m_accel = LoadAccelerators(wc.hInstance, MAKEINTRESOURCE(IDR_ACCELERATOR_MAIN));
}

void ClipboardExtenderMainWindow::LoadEventSink() {

	m_pEvents = new ClipboardEventsImpl{this->m_window};
}

void ClipboardExtenderMainWindow::LoadClipboardToWordApplication() {

	HRESULT hr = OleInitialize(NULL);

	hr = CoCreateInstance(CLSID_Application, nullptr, CLSCTX_SERVER, IID_PPV_ARGS(&m_pClipboardDispatch));

	if( hr != S_OK ) {
		
		std::stringstream ss;
		ss << "CoCreateInstance returned 0x" << std::hex << (unsigned long) hr;
		
		throw std::exception{ ss.str().c_str() };
	}

	// Attach to Events;

	CComQIPtr<IConnectionPointContainer> pCPC{ m_pClipboardDispatch };
	if( !pCPC )			throw std::exception{ "Error attaching to ClipboardToWord" };

	hr = pCPC->FindConnectionPoint(IID_IClipboardEvents, &m_pCP);
	if( S_OK != hr )	throw std::exception{ "Error attaching to ClipboardToWord" };

	hr = m_pCP->Advise((IUnknown *) m_pEvents, &m_cookie);
	if( S_OK != hr )	throw std::exception{ "Error attaching to ClipboardToWord" };

}

LRESULT ClipboardExtenderMainWindow::MessageHandler(UINT const message, WPARAM const wParam, LPARAM const lParam) {

	LRESULT res;
	
	switch( message ) {

		HANDLE_MSG(m_window, WM_CREATE, Cls_OnCreate);
		HANDLE_MSG(m_window, WM_SIZE, Cls_OnSize);
		HANDLE_MSG(m_window, WM_COMMAND, Cls_OnCommand);

	case CE_CLIPBOARDEVENT:
		res = 0;
		Cls_OnClipboardUpdate(m_window);
		break;

	default:
		res = __super::MessageHandler(message, wParam, lParam);
		break;
	}

	return res;
}

BOOL ClipboardExtenderMainWindow::Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	m_hwndListBox = CreateWindow(L"ListBox", L"hwndString", WS_CHILD | WS_VISIBLE | WS_BORDER,
		0, 0, 0, 0, hwnd, NULL, NULL, 0);

	m_hwndButtonCopyAll = CreateWindow(L"Button", L"&Copy All", WS_CHILD | WS_VISIBLE,
		0, 0, 0, 0, hwnd, NULL, NULL, 0);
	SetWindowLongPtr(m_hwndButtonCopyAll, GWLP_ID, ID_BUTTON_COPY);

	m_hwndButtonReset = CreateWindow(L"Button", L"&Reset", WS_CHILD | WS_VISIBLE,
		0, 0, 0, 0, hwnd, NULL, NULL, 0);
	SetWindowLongPtr(m_hwndButtonReset, GWLP_ID, ID_BUTTON_RESET);

	return TRUE;
}

void ClipboardExtenderMainWindow::Cls_OnSize(HWND hwnd, UINT state, int cx, int cy) {

	MoveWindow(m_hwndListBox, padding, padding, cx - 2 * padding, cy - cyButton - 3 * padding, TRUE);

	MoveWindow(m_hwndButtonCopyAll, padding, cy - padding - cyButton, cxButton, cyButton, TRUE);

	MoveWindow(m_hwndButtonReset, 2 * padding + cxButton, cy - padding - cyButton, cxButton, cyButton, TRUE);
}

void ClipboardExtenderMainWindow::Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {

	switch( id ) {

	case ID_ACC_COPY:
	case ID_BUTTON_COPY:
		CopyAllToClipboad();
		break;

	case ID_ACC_RESET:
	case ID_BUTTON_RESET:
		ResetListBox();
		break;
	}

}

void ClipboardExtenderMainWindow::Cls_OnClipboardUpdate(HWND hwnd) {

	if( m_fCopyEvent ) {
		m_fCopyEvent = false;
		return;
	}

	auto text = this->GetClipboardText();
	
	SaveText(text);
}

void ClipboardExtenderMainWindow::ResetListBox() {

	ListBox_ResetContent(m_hwndListBox);

	m_strings.clear();
}

std::wstring ClipboardExtenderMainWindow::GetClipboardText() {

	std::wstring text{ L"" };

	if( OpenClipboard(m_window) ) {

		HANDLE hClipData = GetClipboardData(CF_UNICODETEXT);
		if( hClipData ) {

			WCHAR *	szClipData = (WCHAR *) GlobalLock((HGLOBAL) hClipData);
			if( szClipData ) {
				text = szClipData;
			}

			GlobalUnlock((HGLOBAL) hClipData);
		}

		CloseClipboard();
	} 

	return text;
}

void ClipboardExtenderMainWindow::CopyAllToClipboad() {

	std::wstringstream wss;

	for( const auto& str : m_strings ) {

		wss << str << L"\r\n";
	}

	SIZE_T cb = 2 * ( wss.str().size() + 1 );

	HGLOBAL	hMem = GlobalAlloc(GHND, cb);
	if( hMem ) {

		WCHAR * szData = (WCHAR *) GlobalLock(hMem);
		if( szData ) {

			memcpy(szData, wss.str().c_str(), cb);
			GlobalUnlock(hMem);

			while( !OpenClipboard(m_window) ) {

			}

			m_fCopyEvent = true;
			EmptyClipboard();
			HANDLE hRet = SetClipboardData(CF_UNICODETEXT, (HANDLE) hMem);
			CloseClipboard();

			return;
		}

		GlobalFree(hMem);
	}

}

void ClipboardExtenderMainWindow::SaveText(const std::wstring& text) {

	if( m_strings.size() > 0 ) {

		const auto& last_text = *( m_strings.end() - 1 );
		if( last_text == text )		return;
	}

	ListBox_AddString(m_hwndListBox, text.c_str());

	m_strings.push_back(text);
}