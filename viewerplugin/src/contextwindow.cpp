#include <Windows.h>
#include <windowsx.h>

#include <shellscalingapi.h>

#include "ContextWindow.h"

#pragma comment(lib, "shcore")
#pragma comment(lib, "d3d11")
#pragma comment(lib, "d2d1")
#pragma comment(lib, "dcomp")
#pragma comment(lib, "dwrite")

using D2D1::Matrix3x2F;

ContextWindow::~ContextWindow() {

	ReleaseDeviceResources();

}

void ContextWindow::ShowContextWindow(int x, int y) {

	m_mouseOver = -1;
	m_mouseX = -1;
	m_mouseY = -1;

	SetWindowPos(m_window, NULL, x, y, 0, 0, SWP_NOSIZE | SWP_SHOWWINDOW);

	ShowWindow(m_window, SW_SHOW);
	UpdateWindow(m_window);

}

void ContextWindow::HideContextWindow() {

	ShowWindow(m_window, SW_HIDE);

}

bool ContextWindow::IsDeviceCreated() const {

	return m_device3D;
}

void ContextWindow::ReleaseDeviceResources() {

	m_device3D.Reset();

	for( auto& button_obj : m_buttons ) {

		auto& base_visual = get<0>(button_obj);
		auto& plain_visual = get<2>(button_obj);
		auto& highlight_visual = get<3>(button_obj);

		base_visual->RemoveAllVisuals();
		
		base_visual.Reset();
		plain_visual.Reset();
		highlight_visual.Reset();

	}
}


void ContextWindow::CreateDevice3D() {

	if( IsDeviceCreated() )
		return;

	unsigned flags = D3D11_CREATE_DEVICE_BGRA_SUPPORT |
		D3D11_CREATE_DEVICE_SINGLETHREADED;

#ifdef _DEBUG
	flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

	auto hr = D3D11CreateDevice(nullptr,
		D3D_DRIVER_TYPE_HARDWARE,
		nullptr,
		flags,
		nullptr, 0,
		D3D11_SDK_VERSION,
		m_device3D.GetAddressOf(),
		nullptr,
		nullptr);
}

ComPtr<ID2D1Device> ContextWindow::CreateDevice2D() {
	ComPtr<IDXGIDevice3> deviceX;
	auto hr = m_device3D.As(&deviceX);

	D2D1_CREATION_PROPERTIES properties = {};

#ifdef _DEBUG
	properties.debugLevel = D2D1_DEBUG_LEVEL_INFORMATION;
#endif

	ComPtr<ID2D1Device> device2D;

	hr = D2D1CreateDevice(deviceX.Get(),
		properties,
		device2D.GetAddressOf());

	return device2D;
}

ComPtr<IDCompositionVisual2> ContextWindow::CreateVisual() {
	
	ComPtr<IDCompositionVisual2> visual;

	auto hr = m_device->CreateVisual(visual.GetAddressOf());

	return visual;
}

template <typename T>
ComPtr<IDCompositionSurface> ContextWindow::CreateSurface(T const width, T const height) {
	
	ComPtr<IDCompositionSurface> surface;

	auto hr = m_device->CreateSurface(static_cast<unsigned>( width ),
		static_cast<unsigned>( height ),
		DXGI_FORMAT_B8G8R8A8_UNORM,
		DXGI_ALPHA_MODE_PREMULTIPLIED,
		surface.GetAddressOf());

	return surface;
}

ComPtr<IDCompositionSurface> ContextWindow::CreateCommonSurface() {

	ComPtr<IDCompositionSurface> surface =
		CreateSurface(LogicalToPhysical(m_buttonWidth, m_dpiX),
			LogicalToPhysical(m_buttonHeight, m_dpiY));

	ComPtr<ID2D1DeviceContext> dc;
	POINT offset = {};

	auto hr = surface->BeginDraw(nullptr,
		__uuidof( dc ),
		reinterpret_cast<void **>( dc.GetAddressOf() ),
		&offset);

	ComPtr<ID2D1SolidColorBrush> m_graybrush;
	hr = dc->CreateSolidColorBrush(D2D1::ColorF(D2D1::ColorF::DarkBlue, 0.85f),
		m_graybrush.GetAddressOf());

	dc->SetDpi(m_dpiX, m_dpiY);

	dc->SetTransform(Matrix3x2F::Translation(PhysicalToLogical(offset.x, m_dpiX),
		PhysicalToLogical(offset.y, m_dpiY)));

	dc->Clear();

	D2D1_RECT_F buttonRect = D2D1::RectF(0, 0, m_buttonWidth, m_buttonHeight);
	auto buttonRoundedRect = D2D1::RoundedRect(buttonRect, 10.0f, 10.0f);
	dc->FillRoundedRectangle(&buttonRoundedRect, m_graybrush.Get());

	hr = surface->EndDraw();

	return surface;
}

ComPtr<IDCompositionVisual2> ContextWindow::CreateButtonTextVisual(const WCHAR * szText, int color) {

	ComPtr<IDCompositionVisual2> visual = CreateVisual();

	ComPtr<IDCompositionSurface> surface =
		CreateSurface(LogicalToPhysical(m_buttonWidth, m_dpiX),
			LogicalToPhysical(m_buttonHeight, m_dpiY));

	ComPtr<ID2D1DeviceContext> dc;
	POINT offset = {};

	auto hr = surface->BeginDraw(nullptr,
		__uuidof( dc ),
		reinterpret_cast<void **>( dc.GetAddressOf() ),
		&offset);

	dc->SetDpi(m_dpiX, m_dpiY);

	dc->SetTransform(Matrix3x2F::Translation(PhysicalToLogical(offset.x, m_dpiX),
		PhysicalToLogical(offset.y, m_dpiY)));

	dc->Clear();

	ComPtr<ID2D1SolidColorBrush> brush;
	hr = dc->CreateSolidColorBrush(D2D1::ColorF(color, 1.0f),
		brush.GetAddressOf());

	dc->DrawTextW(szText, wcslen(szText) + 1,
		m_textFormat.Get(), D2D1::RectF(0, 0, m_buttonWidth, m_buttonHeight), brush.Get());

	hr = surface->EndDraw();

	visual->SetContent(surface.Get());

	return visual;
}

void ContextWindow::CreateDeviceResources()
{
	if( IsDeviceCreated() )
		return;

	CreateDevice3D();

	ComPtr<ID2D1Device> const device2D = CreateDevice2D();

	auto hr = DCompositionCreateDevice2(
		device2D.Get(),
		__uuidof( m_device ),
		reinterpret_cast<void **>( m_device.ReleaseAndGetAddressOf() ));

	hr = m_device->CreateTargetForHwnd(m_window,
		true,
		m_target.ReleaseAndGetAddressOf());

	ComPtr<IDCompositionVisual2> rootVisual = CreateVisual();
	hr = m_target->SetRoot(rootVisual.Get());

	ComPtr<IDCompositionSurface> surface =
		CreateCommonSurface();

	for( int index = 0; index < BUTTON_COUNT; ++index ) {
		
		auto& button_obj = m_buttons.at(index);
		
		auto& base_visual = get<0>(button_obj);
		auto& button_text = get<1>(button_obj);
		auto& plain_visual = get<2>(button_obj);
		auto& highlighted_visual = get<3>(button_obj);

		base_visual = CreateVisual();
		hr = base_visual->SetOffsetX(PhysicalToLogical(0, m_dpiX));
		hr = base_visual->SetOffsetY(PhysicalToLogical(index * (m_buttonHeight + m_buttonPadding), m_dpiY));
		hr = base_visual->SetContent(surface.Get());
		hr = rootVisual->AddVisual(base_visual.Get(), false, nullptr);

		plain_visual = CreateButtonTextVisual(button_text.c_str(), D2D1::ColorF::White);
		highlighted_visual = CreateButtonTextVisual(button_text.c_str(), D2D1::ColorF::Yellow);
	}

}

void ContextWindow::RenderButtons() {

	if( !IsDeviceCreated() )
		return;

	int index = 0;

	for( auto& button_obj : m_buttons) {

		auto& base_visual = get<0>(button_obj);

		base_visual->RemoveAllVisuals();

		IDCompositionVisual * pchildvisual = nullptr;

		if( index == m_mouseOver ) {

			pchildvisual = get<3>(button_obj).Get();			

		} else {
			
			pchildvisual = get<2>(button_obj).Get();

		}

		base_visual->AddVisual(pchildvisual, FALSE, nullptr);

		++index;
	}
	
	auto hr = m_device->Commit();
}

void ContextWindow::Cls_OnPaint(HWND hwnd) {

	try {

		if( IsDeviceCreated() ) {

			auto hr = m_device3D->GetDeviceRemovedReason();
			if( S_OK != hr ) throw ComException{ hr };

		} else {

			CreateDeviceResources();
		}
		
		RenderButtons();
		
		ValidateRect(m_window, nullptr);

	} catch( ComException const & e ) {

		ReleaseDeviceResources();
	}
}

void ContextWindow::Cls_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags) {

	auto& button = m_buttons.at(m_mouseOver);
	auto& caption = get<1>(button);

	SendMessage(GetParent(m_window), WM_CONTEXTACTION, m_ctrlId, (LPARAM) caption.c_str());

	HideContextWindow();

}

LRESULT ContextWindow::MessageHandler(UINT const message, WPARAM const wParam, LPARAM const lParam) {

	switch( message ) {

		HANDLE_MSG(m_window, WM_PAINT, Cls_OnPaint);
		HANDLE_MSG(m_window, WM_LBUTTONDOWN, Cls_OnLButtonDown);
		HANDLE_MSG(m_window, WM_MOUSEMOVE, Cls_OnMouseMove);
		HANDLE_MSG(m_window, WM_CREATE, Cls_OnCreate);

	case WM_DPICHANGED:
		DpiChangedHandler(wParam, lParam);
	}

	auto ret = __super::MessageHandler(message, wParam, lParam);
	return ret;
}

void ContextWindow::DpiChangedHandler(WPARAM const wparam, LPARAM const lparam) {

	try {

		m_dpiX = LOWORD(wparam);
		m_dpiY = HIWORD(wparam);

		RECT const * suggested =
			reinterpret_cast<RECT const *>( lparam );

		SetWindowPos(m_window,
			nullptr,
			suggested->left,
			suggested->top,
			suggested->right - suggested->left,
			suggested->bottom - suggested->top,
			SWP_NOACTIVATE | SWP_NOZORDER);

		if( !IsDeviceCreated() ) return;

		RenderButtons();

		m_device->Commit();

	} catch( ComException const & e ) {

		ReleaseDeviceResources();

		InvalidateRect(m_window, nullptr, false);
	}

}

void ContextWindow::Cls_OnMouseMove(HWND hwnd, int x, int y, UINT keyFlags) {

	m_mouseX = x;
	m_mouseY = y;

	int prev_mouseOver = m_mouseOver;
	int current_mouseOver = GetButtonFromXY(x, y);

	if( current_mouseOver == prev_mouseOver )
		return;

	m_mouseOver = current_mouseOver;

	RenderButtons();

}

BOOL ContextWindow::Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct) {

	HMONITOR const monitor = MonitorFromWindow(m_window,
		MONITOR_DEFAULTTONEAREST);

	unsigned dpiX = 0;
	unsigned dpiY = 0;

	auto hr = GetDpiForMonitor(monitor,
		MDT_EFFECTIVE_DPI,
		&dpiX,
		&dpiY);

	m_dpiX = static_cast<float>( dpiX );
	m_dpiY = static_cast<float>( dpiY );

	GetClientRect(m_window, &m_clientRect);
	auto scaled_width = PhysicalToLogical(m_clientRect.right, m_dpiX);
	auto scaled_height = PhysicalToLogical(m_clientRect.bottom, m_dpiY);
	m_clientRect.right = scaled_width;
	m_clientRect.bottom = scaled_height;

	SetWindowPos(m_window,
		nullptr,
		0, 0,
		m_clientRect.right - m_clientRect.left,
		m_clientRect.bottom - m_clientRect.top,
		SWP_NOACTIVATE | SWP_NOMOVE | SWP_NOZORDER);

	m_buttonPadding = 2.0f;
	m_buttonHeight = ( m_clientRect.bottom - m_clientRect.top - (BUTTON_COUNT - 1) * m_buttonPadding ) / (float) BUTTON_COUNT;
	m_buttonWidth = m_clientRect.right - m_clientRect.left;

	ComPtr<IDWriteFactory2> factory;

	DWriteCreateFactory(
		DWRITE_FACTORY_TYPE_SHARED,
		__uuidof( factory ),
		reinterpret_cast<IUnknown **>( factory.GetAddressOf() ));

	factory->CreateTextFormat(L"Arial",
		nullptr,
		DWRITE_FONT_WEIGHT_NORMAL,
		DWRITE_FONT_STYLE_NORMAL,
		DWRITE_FONT_STRETCH_NORMAL,
		m_buttonHeight / 3.0f * 2.0f,
		L"en",
		m_textFormat.GetAddressOf());

	m_textFormat->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
	m_textFormat->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);

	CreateDeviceResources();

	return TRUE;
}

int ContextWindow::GetButtonFromXY(int x, int y) {

	return y / ( m_buttonHeight + m_buttonPadding );

}