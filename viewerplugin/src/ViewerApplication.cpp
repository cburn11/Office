#include <Windows.h>
#include <windowsx.h>
#include <wincodec.h>

#include <ctime>

#include <d2d1.h>
#include <d2d1helper.h>
#pragma comment(lib, "d2d1.lib")

#include <atlcomcli.h>
#include <atltypes.h>

#include "ViewerApplication.h"
#include "wichelpers.h"



ViewerMainWindow::ViewerMainWindow() {

	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hInstance = (HINSTANCE) GetModuleHandle(L"ViewerPlugin.dll");
	wc.lpfnWndProc = BasicWindow::WndProc;
	wc.lpszClassName = L"ViewerPluginApplicationWindow";
	wc.style = CS_VREDRAW | CS_HREDRAW;

	DWORD error;
	auto ret = RegisterClass(&wc);
	if( !ret ) 
		error = GetLastError();

	szWindowName = L"Viewer Plugin";

	CreateDeviceIndependentResources();
	
	auto hwnd = CreateWindowEx(0, wc.lpszClassName, szWindowName, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT, 900, 1200, NULL, NULL, wc.hInstance, this);
	if( !hwnd )
		error = GetLastError();
	else {
		ShowWindow(m_window, SW_SHOW);
		UpdateWindow(m_window);
	}

	const WCHAR * buttons[] = { L"Save", L"Save as ...", L"Save all", L"Delete", L"Delete all"};
	m_pcontextwindow = 
		std::make_unique<ContextWindow>(hwnd, 150, side + 2 * padding, IDC_CONTEXTMENU, buttons);
}

ViewerMainWindow::~ViewerMainWindow() {
	
	auto ret = UnregisterClass(wc.lpszClassName, wc.hInstance);

	for( auto pbitmap : m_bitmaps ) {
		pbitmap->Release();
	}

	for( auto pbitmap : m_bitmapcache ) {
		pbitmap->Release();
	}

	if( m_pWICFactory )		m_pWICFactory->Release();

	if( m_pD2DFactory ) m_pD2DFactory->Release();
	if( m_pRenderTarget ) m_pRenderTarget->Release();
	if( m_pRedBrush ) m_pRedBrush->Release();
	if( m_pGrayBrush ) m_pGrayBrush->Release();
}

HRESULT ViewerMainWindow::GetBitmapFromClipboard(IWICBitmap ** ppbitmap) {

	return GetWICBitmapFromClipboard(m_pWICFactory, ppbitmap);
}

HRESULT ViewerMainWindow::CreateDeviceIndependentResources() {

	auto hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
		IID_PPV_ARGS(&m_pWICFactory));

	hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &m_pD2DFactory);

	return hr;
}

HRESULT ViewerMainWindow::CreateDeviceResources() {

	HRESULT hr = S_OK;

	if( !m_pRenderTarget ) {

		CRect rect;
		GetClientRect(m_window, &rect);

		D2D1_SIZE_U size = D2D1::SizeU(rect.Width(), rect.Height());
		hr = m_pD2DFactory->CreateHwndRenderTarget(D2D1::RenderTargetProperties(),
			D2D1::HwndRenderTargetProperties(m_window, size),
			&m_pRenderTarget);

		m_pRenderTarget->CreateSolidColorBrush(
			D2D1::ColorF(D2D1::ColorF::Red), &m_pRedBrush);

		m_pRenderTarget->CreateSolidColorBrush(
			D2D1::ColorF(D2D1::ColorF::Gray, 0.75f), &m_pGrayBrush);

		for( auto pwicbitmap : m_bitmaps ) {
			ID2D1Bitmap * pD2DBitmap = nullptr;
			hr = m_pRenderTarget->CreateBitmapFromWicBitmap(pwicbitmap, &pD2DBitmap);
			m_bitmapcache.push_back(pD2DBitmap);
		}
	}

	return hr;
}

void ViewerMainWindow::Render() {

	std::wstring caption{ L"Viewer Plugin" };

	if( S_OK == CreateDeviceResources() ) {

		if( 0 == ( D2D1_WINDOW_STATE_OCCLUDED & m_pRenderTarget->CheckWindowState() ) ) {

			m_pRenderTarget->BeginDraw();
			
			HRESULT hr;
			
			ID2D1Bitmap * pselectedbitmap = nullptr;

			auto size = m_pRenderTarget->GetSize();
			D2D1_RECT_F rect = D2D1::RectF(0, 0, size.width, size.height);

			m_pRenderTarget->Clear(D2D1::ColorF(D2D1::ColorF::White));
			
			auto count = m_bitmapcache.size();
			int preview_count = rect.bottom / (side + padding);
			if( count > 0 ) {

				m_base = 0;
				if( count > preview_count ) {
					m_base = m_selectedBitmap - preview_count / 2;
					if( m_base < 0 ) m_base = 0;
					if( m_selectedBitmap + preview_count / 2 >= count ) m_base = count - preview_count;
				}
		
				//	Draw preview bitmaps
				for(int index = 0; index < preview_count; ++index ) {

					if( m_base + index == count )
						break;

					ID2D1Bitmap * pbitmap = m_bitmapcache.at(m_base + index);;

					float x = 0.0f;
					float y = index * side + index * padding;

					if( m_base + index == m_selectedBitmap ) {
						
						D2D1_RECT_F highlight_rect = D2D1::RectF(x + padding / 3, y + padding / 3 , 
							x + side + 2 * padding - padding / 3, y + side + 2 * padding - padding / 3);
						
						m_pRenderTarget->FillRectangle(&highlight_rect, m_pRedBrush);

						pselectedbitmap = pbitmap;
					}

					x += padding;
					y += padding;
					D2D1_RECT_F local_rect = D2D1::RectF(x, y, x + side, y + side);		
					
					if( pbitmap ) {

						m_pRenderTarget->DrawBitmap(pbitmap, &local_rect);
					}
				}

				if( pselectedbitmap ) {
					
					rect.top += padding;
					rect.left += side + 2 * padding;
					rect.right -= padding;					

					auto bmsize = pselectedbitmap->GetSize();
					float ratio = bmsize.width / bmsize.height;

					float displayWidth = rect.right - rect.left;
					float displayHeight = rect.bottom - rect.top;

					if( ratio > 1 ) {
					
						bmsize.width = displayWidth;
						bmsize.height = displayWidth / ratio;
						
						if( bmsize.height > displayHeight ) {
							bmsize.height = displayHeight;
							bmsize.width = displayHeight * ratio;
						}

					} else if( ratio < 1 ) {

						bmsize.height = displayHeight;
						bmsize.width = displayHeight * ratio;
						
						if( bmsize.width > displayWidth ) {
							bmsize.width = displayWidth;
							bmsize.height = displayWidth / ratio;
						}

					} else {
						
						auto min = min(displayWidth, displayHeight);
						bmsize.width = min;
						bmsize.height = min;

					}

					rect.bottom = rect.top + bmsize.height;
					rect.right = rect.left + bmsize.width;

					m_pRenderTarget->DrawBitmap(pselectedbitmap, &rect);

					caption += L": ";
					caption += std::to_wstring(m_selectedBitmap + 1);
					caption += L"/";
					caption += std::to_wstring(count);
				}
			}
			
			if( D2DERR_RECREATE_TARGET == m_pRenderTarget->EndDraw() ) {
				DiscardDeviceResources();
			}
		}
	}

	SetWindowText(m_window, caption.c_str());
}

void ViewerMainWindow::DiscardDeviceResources() {

	if( m_pRenderTarget ) {

		m_pRenderTarget->Release();
		m_pRenderTarget = nullptr;

	}

	if( m_pRedBrush ) {

		m_pRedBrush->Release();
		m_pRedBrush = nullptr;

	}

	if( m_pGrayBrush ) {

		m_pGrayBrush->Release();
		m_pGrayBrush = nullptr;

	}

	for( auto pbitmaps : m_bitmapcache ) {
		pbitmaps->Release();
	}

	m_bitmapcache.clear();
}

LRESULT ViewerMainWindow::MessageHandler(UINT const message, WPARAM const wParam, LPARAM const lParam) {

	switch( message ) {

		HANDLE_MSG(m_window, WM_DESTROY, Cls_OnDestroy);
		HANDLE_MSG(m_window, WM_KEYDOWN, Cls_OnKey);
		HANDLE_MSG(m_window, WM_PAINT, Cls_OnPaint);
		HANDLE_MSG(m_window, WM_ERASEBKGND, Cls_OnEraseBkgnd);
		HANDLE_MSG(m_window, WM_SIZE, Cls_OnSize);
		HANDLE_MSG(m_window, WM_DISPLAYCHANGE, Cls_OnDisplayChange);
		HANDLE_MSG(m_window, WM_LBUTTONDOWN, Cls_OnLButtonDown);
		HANDLE_MSG(m_window, WM_RBUTTONDOWN, Cls_OnRButtonDown);
		HANDLE_MSG(m_window, WM_MOUSEWHEEL, Cls_OnMouseWheel);
		HANDLE_MSG(m_window, WM_MOVE, Cls_OnMove);

	case WM_SETAPPLICATION:
		m_pApplication = (IApplication *) lParam;
		return 0;

	case WM_NEWBITMAP: {

		IWICBitmap * pbitmap = nullptr;
		auto hr = GetBitmapFromClipboard(&pbitmap);
		for( int tries = 0; hr != S_OK && tries < 100; ++tries, hr = hr = GetBitmapFromClipboard(&pbitmap) )
			;

		if( S_OK == hr && pbitmap ) {

			ID2D1Bitmap * pD2DBitmap = nullptr;
			hr = m_pRenderTarget->CreateBitmapFromWicBitmap(pbitmap, &pD2DBitmap);

			if( S_OK == hr && pD2DBitmap ) {

				m_bitmaps.push_back(pbitmap);
				m_bitmapcache.push_back(pD2DBitmap);

				m_selectedBitmap = m_bitmaps.size() - 1;

				Render();
			}
		}
		
		return 0; }

	case WM_SETSAVEDIR:

		m_savepath = (BSTR) lParam;

	case WM_CONTEXTACTION: {

		std::wstring action{ (const WCHAR *) lParam };

		if( action == L"Delete" ) {

			RemoveBitmap(m_contextBitmap);

		} else if( action == L"Save" ) {

			SaveBitmapToFile(m_contextBitmap, nullptr);

		} else if( action == L"Save as ..." ) {

			SaveBitmapToFileAs(m_base + m_contextBitmap);

		} else if( action == L"Save all" ) {

			SaveAllBitmaps();

		} else if( action == L"Delete all" ) {

			RemoveAllBitmaps();

		}

		break; }

	}

	auto ret = __super::MessageHandler(message, wParam, lParam);
	return ret;
}

void ViewerMainWindow::Cls_OnDestroy(HWND hwnd) {

	if( m_pApplication )	m_pApplication->Quit();

	m_window = NULL;

}

void ViewerMainWindow::Cls_OnPaint(HWND hwnd) {

	PAINTSTRUCT ps{ 0 };
	auto hdc = BeginPaint(m_window, &ps);

	Render();

	EndPaint(m_window, &ps);

}

void ViewerMainWindow::Cls_OnSize(HWND hwnd, UINT state, int cx, int cy) {
	
	if( m_pRenderTarget ) {

		if( S_OK != m_pRenderTarget->Resize(D2D1::SizeU(cx, cy))) {
			DiscardDeviceResources();
			UpdateWindow(m_window);
		}
	}
}

void ViewerMainWindow::Cls_OnDisplayChange(HWND hwnd, UINT bitsPerPixel, UINT cxScreen, UINT cyScreen) {

	Render();
}

BOOL ViewerMainWindow::Cls_OnEraseBkgnd(HWND hwnd, HDC hdc) {

	return TRUE;
}

void ViewerMainWindow::ScrollDown() {

	ClearContext();

	if( m_selectedBitmap + 1 < m_bitmaps.size() ) {

		++m_selectedBitmap;
		Render();
	}
}

void ViewerMainWindow::ScrollUp() {

	ClearContext();

	if( m_selectedBitmap > 0 ) {

		--m_selectedBitmap;
		Render();
	}
}

void ViewerMainWindow::Cls_OnKey(HWND hwnd, UINT vk, BOOL fDown, int cRepeat, UINT flags) {
	
	ClearContext();

	switch( vk ) {

	case VK_DOWN:	//	Down Arrow key
	case VK_NEXT:	//	Page Down key
		
		ScrollDown();

		break;

	case VK_UP:		//	Up Arrow key
	case VK_PRIOR:	//	Page Up key

		ScrollUp();

		break;

	case VK_F12: {

		short keystate = GetKeyState(VK_CONTROL);
		if( keystate >> 15 ) {
			SaveAllBitmaps();
		} else {
			SaveBitmapToFile(m_selectedBitmap, nullptr);
		}

		break; }

	case VK_DELETE: {

		RemoveBitmap(m_selectedBitmap);

		break; }
	}
}

void ViewerMainWindow::SaveAllBitmaps() {

	static WCHAR szsavepath[MAX_PATH]{ 0 };

	auto size = m_bitmaps.size();

	auto t = time(nullptr);
	auto local_time = localtime(&t);
	
	wstring base_name = std::to_wstring(local_time->tm_mon) + std::to_wstring(local_time->tm_mday) +
		std::to_wstring(local_time->tm_year);		

	for( int i = 0; i < size; ++i ) {
		
		swprintf_s(szsavepath, L"%s%s_%.3d", m_savepath.c_str(), base_name.c_str(), i);

		SaveBitmapToFile(i, szsavepath);
	}
}

void ViewerMainWindow::SaveBitmapToFile(UINT index, const WCHAR * szPath) {

	static WCHAR sztempfilename[MAX_PATH]{ 0 };

	if( index >= m_bitmaps.size() ) return;

	auto pwicbitmap = m_bitmaps.at(index);

	if( !szPath )  {
		GetTempFileName(m_savepath.c_str(), L"VWR", 0, sztempfilename);
		DeleteFile(sztempfilename);
	} else {
		wcscpy_s(sztempfilename, MAX_PATH, szPath);
	}

	std::wstring tempfilepath{ L"" };

	auto period = wcschr(sztempfilename, L'.');
	if( period ) {
		*period = L'\0';
	}

	tempfilepath += sztempfilename;
	tempfilepath += L".jpg";

	SaveWICBitmapAsJPG(m_pWICFactory, tempfilepath.c_str(), pwicbitmap);
}

bool ViewerMainWindow::GetFilepath(const WCHAR ** pszFilepath) {

	WCHAR			* szFilename = nullptr;
	OPENFILENAME	ofn = { sizeof(ofn), 0 };

	szFilename = new WCHAR[MAX_PATH]{ 0 };
	if( !szFilename ) {
		*pszFilepath = nullptr;
		return false;
	}

	ofn.hwndOwner = m_window;
	ofn.lpstrFile = szFilename;
	ofn.nMaxFile = sizeof(WCHAR) * MAX_PATH;

	ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

	DWORD error;
	BOOL ret;

	ofn.lpstrInitialDir = m_savepath.c_str();
	ofn.lpstrFilter = L"jpg\0*.jpg\0";
	ofn.nFileExtension = 1;
	ret = GetSaveFileName(&ofn);

	if( ret ) {		

		*pszFilepath = szFilename;

		return true;

	} else {
		error = CommDlgExtendedError();
	}

	delete[] szFilename;
	return false;
}

void ViewerMainWindow::SaveBitmapToFileAs(UINT index) {

	const WCHAR * szFilepath = nullptr;
	if( GetFilepath(&szFilepath) ) {

		SaveBitmapToFile(index, szFilepath);

		delete[] szFilepath;
	}
}

void ViewerMainWindow::Cls_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags) {

	ClearContext();

	auto relative_clicked = GetRelativeIndexFromXY(x, y);
	if( relative_clicked < 0 ) return;

	m_selectedBitmap = m_base + relative_clicked;
	
	Render();	
}

void ViewerMainWindow::Cls_OnRButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags) {

	auto relative_clicked = GetRelativeIndexFromXY(x, y);
	if( relative_clicked < 0 ) return;

	m_contextBitmap = m_base + relative_clicked;

	x = 2 * padding + side;
	y = relative_clicked * ( padding + side );

	m_pcontextwindow->ShowContextWindow(x, y);

	Render();
}

void ViewerMainWindow::Cls_OnMouseWheel(HWND hwnd, int xPos, int yPos, int zDelta, UINT fwKeys) {

	if( zDelta > 0 ) {

		ScrollUp();

	} else {

		ScrollDown();

	}

}

int ViewerMainWindow::GetRelativeIndexFromXY(int x, int y) {
	
	UINT error = -1;

	if( x > 2 * padding + side || x < padding )
		return error;

	UINT index = y / ( padding + side );

	auto bitmap_count = m_bitmaps.size();

	if( index + m_base >= bitmap_count )
		return error;

	return index;
}

void ViewerMainWindow::ClearContext() {

	//m_contextBitmap = -1;

	if( m_pcontextwindow )
		m_pcontextwindow->HideContextWindow();

}

void ViewerMainWindow::Cls_OnMove(HWND hwnd, int x, int y) {

	if( m_contextBitmap >= 0)
		ClearContext();
}

void ViewerMainWindow::RemoveBitmap(int index, bool fRender) {

	auto size = m_bitmaps.size();

	if( size > 0 && index < size ) {

		auto iter = std::begin(m_bitmaps) + index;
		if( *iter ) ( *iter )->Release();
		m_bitmaps.erase(iter);

		auto iter2 = std::begin(m_bitmapcache) + index;
		if( *iter2 ) ( *iter2 )->Release();
		m_bitmapcache.erase(iter2);

		if( index == m_selectedBitmap && m_selectedBitmap > 0 ) --m_selectedBitmap;

		if( fRender)
			Render();
	}
}

void ViewerMainWindow::RemoveAllBitmaps() {

	auto size = m_bitmaps.size();
	for( int index = size - 1; index >= 0; --index ) {
		RemoveBitmap(index, false);
	}

	Render();
}