#pragma once

#include <Windows.h>

#include <shellscalingapi.h>
#include <wrl.h>
using Microsoft::WRL::ComPtr;

#include <vector>
using std::vector;

#include <tuple>
using std::tuple;
using std::make_tuple;
using std::get;

#include <string>
using std::wstring;

#include <d3d11_2.h>
#include <d2d1_2.h>
#include <d2d1_2helper.h>
#include <DXGIDebug.h>

#include <dcomp.h>

#include <dwrite_2.h>

#include "windowclass.h"

#define WM_CONTEXTACTION	(WM_USER + 13)

struct ComException {

	HRESULT result;

	ComException(HRESULT const value) : result(value) {

	}
};

template <typename T>
static float PhysicalToLogical(T const pixel, float const dpi) {
	return pixel * 96.0f / dpi;
}

template <typename T>
static float LogicalToPhysical(T const pixel, float const dpi) {
	return pixel * dpi / 96.0f;
}

class ContextWindow : public ChildWindow<ContextWindow> {

	int m_ctrlId;

	int BUTTON_COUNT;

	float m_dpiX = 0.0f;
	float m_dpiY = 0.0f;

	float m_buttonPadding;
	float m_buttonHeight;
	float m_buttonWidth;

	int m_mouseX = -1;
	int m_mouseY = -1;
	int m_mouseOver = -1;

	RECT m_clientRect;

	ComPtr<IDWriteTextFormat> m_textFormat;

	ComPtr<ID3D11Device> m_device3D;
	ComPtr<IDCompositionDesktopDevice> m_device;
	ComPtr<IDCompositionTarget> m_target;
	
	using visual_ptr = ComPtr<IDCompositionVisual2>;
	//	Base visual, button caption, plain visual, highlighted visual
	using button_tuple = tuple<visual_ptr, wstring, visual_ptr, visual_ptr>;
	vector<button_tuple> m_buttons;

	bool IsDeviceCreated() const;

	void CreateDeviceResources();
	void ReleaseDeviceResources();
	void CreateDevice3D();
	void RenderButtons();

	ComPtr<ID2D1Device> CreateDevice2D();
	ComPtr<IDCompositionVisual2> CreateVisual();
	ComPtr<IDCompositionVisual2> CreateButtonTextVisual(const WCHAR * szText, int color);
	ComPtr<IDCompositionSurface> CreateCommonSurface();

	template <typename T>
	ComPtr<IDCompositionSurface> CreateSurface(T const width, T const height);

	void Cls_OnPaint(HWND hwnd);
	void Cls_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags);
	void Cls_OnMouseMove(HWND hwnd, int x, int y, UINT keyFlags);

	BOOL Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);

	void DpiChangedHandler(WPARAM const wparam, LPARAM const lparam);

	int GetButtonFromXY(int x, int y);

public:
	
	template <typename T, size_t N>
	ContextWindow(HWND hwndParent, int cx, int cy, int ctrlId, const T(&button_text)[N]) {

		m_ctrlId = ctrlId;

		BUTTON_COUNT = N;
		m_buttons.reserve(N);

		for( int index = 0; index < BUTTON_COUNT; ++index ) {

			m_buttons.push_back(make_tuple(nullptr, button_text[index], nullptr, nullptr));

		}

		wc.hInstance = (HINSTANCE) GetModuleHandle(L"ViewerPlugin.dll");
		wc.lpfnWndProc = BasicWindow::WndProc;
		wc.lpszClassName = L"ViewerPluginContextWindow";
		wc.style = CS_VREDRAW | CS_HREDRAW;

		DWORD error;
		auto ret = RegisterClass(&wc);
		if( !ret )
			error = GetLastError();

		auto hwnd = CreateWindowEx(WS_EX_NOREDIRECTIONBITMAP, wc.lpszClassName, szWindowName,
			WS_CHILD,
			CW_USEDEFAULT, CW_USEDEFAULT, cx, cy, hwndParent, NULL, wc.hInstance, this);
		if( !hwnd )
			error = GetLastError();
	}

	~ContextWindow();

	LRESULT MessageHandler(UINT const message, WPARAM const wparam, LPARAM const lparam) override;

	void ShowContextWindow(int x, int y);
	void HideContextWindow();

};