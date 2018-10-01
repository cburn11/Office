#pragma once

#include <Windows.h>

#include <wincodec.h>

HRESULT GetWICBitmapFromClipboard(IWICImagingFactory * pWICFactory, IWICBitmap ** ppbitmap);

HRESULT SaveWICBitmapAsJPG(IWICImagingFactory * pWICFactory, const WCHAR * szSavePath, IWICBitmap * pbitmap);