#pragma once

#include <Windows.h>
#include <wincodec.h>

#include <d2d1.h>
#include <d2d1helper.h>

#include <vector>
#include <string>
#include <memory>

#include "windowclass.h"
#include "contextwindow.h"
#include "ClipboardToWord_h.h"

#define WM_SETAPPLICATION	(WM_USER + 10)
#define WM_NEWBITMAP		(WM_USER + 11)
#define WM_SETSAVEDIR		(WM_USER + 12)

#define IDC_CONTEXTMENU		10002

auto const padding = 10.0f;
auto const side = 120.0f;

class ViewerMainWindow : public ChildWindow<ViewerMainWindow> {
	
	IWICImagingFactory *	m_pWICFactory = nullptr;

	ID2D1Factory *			m_pD2DFactory = nullptr;
	ID2D1HwndRenderTarget *	m_pRenderTarget = nullptr;
	ID2D1SolidColorBrush *	m_pRedBrush = nullptr;
	ID2D1SolidColorBrush *	m_pGrayBrush = nullptr;

	IApplication * m_pApplication = nullptr;

	std::vector<IWICBitmap *>	m_bitmaps;
	std::vector<ID2D1Bitmap *>	m_bitmapcache;

	int m_selectedBitmap = -1;
	int m_contextBitmap = -1;
	int m_base = 0;

	std::wstring m_savepath{ L"c:\\temp\\pics\\" };

	std::unique_ptr<ContextWindow> m_pcontextwindow;
	
	void Cls_OnDestroy(HWND hwnd);
	void Cls_OnPaint(HWND hwnd);
	void Cls_OnSize(HWND hwnd, UINT state, int cx, int cy);
	void Cls_OnDisplayChange(HWND hwnd, UINT bitsPerPixel, UINT cxScreen, UINT cyScreen);
	void Cls_OnKey(HWND hwnd, UINT vk, BOOL fDown, int cRepeat, UINT flags);
	void Cls_OnLButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags);
	void Cls_OnRButtonDown(HWND hwnd, BOOL fDoubleClick, int x, int y, UINT keyFlags);
	void Cls_OnMouseWheel(HWND hwnd, int xPos, int yPos, int zDelta, UINT fwKeys);
	void Cls_OnMove(HWND hwnd, int x, int y);

	BOOL Cls_OnEraseBkgnd(HWND hwnd, HDC hdc);

	HRESULT GetBitmapFromClipboard(IWICBitmap **);
	
	HRESULT CreateDeviceIndependentResources();
	HRESULT CreateDeviceResources();

	void Render();
	void DiscardDeviceResources();

	bool GetFilepath(const WCHAR ** pszFilepath);
	void SaveBitmapToFile(UINT index, const WCHAR * szPath);
	void SaveBitmapToFileAs(UINT index);
	void SaveAllBitmaps();

	void ScrollDown();
	void ScrollUp();

	void ClearContext();

	int GetRelativeIndexFromXY(int x, int y);

	void RemoveBitmap(int index, bool fRender = true);
	void RemoveAllBitmaps();

public:

	ViewerMainWindow();
	virtual ~ViewerMainWindow();

	LRESULT MessageHandler(UINT const message, WPARAM const wparam, LPARAM const lparam) override;

};