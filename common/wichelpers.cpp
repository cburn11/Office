#include <Windows.h>

#include "wichelpers.h"

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
			pCopy + ( linecount - 1 ) * bytesperline - i * bytesperline,
			bytesperline);
	}

	free(pCopy);
}

HRESULT GetWICBitmapFromClipboard(IWICImagingFactory * pWICFactory, IWICBitmap ** ppbitmap) {

	HRESULT hr;

	if( !ppbitmap )	return E_POINTER;

	*ppbitmap = nullptr;

	bool fCreateFactory = false;
	if( !pWICFactory ) {
		hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
			IID_PPV_ARGS(&pWICFactory));

		if( hr != S_OK ) {
			return E_FAIL;
		}

		fCreateFactory = true;
	}

	IDataObject * pdata_obj = nullptr;
	hr = OleGetClipboard(&pdata_obj);
	if( S_OK == hr ) {

		IEnumFORMATETC * penum = nullptr;
		hr = pdata_obj->EnumFormatEtc(DATADIR_GET, &penum);

		if( S_OK == hr ) {

			FORMATETC formatetc{ 0 };
			STGMEDIUM stgmedium{ 0 };
			while( S_OK == penum->Next(1, &formatetc, nullptr) ) {

				if( formatetc.cfFormat == CF_BITMAP ||
					formatetc.cfFormat == CF_DIB ) {

					hr = pdata_obj->GetData(&formatetc, &stgmedium);

					if( S_OK == hr ) {

						IWICBitmap * pbitmap = nullptr;

						if( stgmedium.tymed == TYMED_GDI ) {

							HBITMAP hbitmap = stgmedium.hBitmap;
							hr = pWICFactory->CreateBitmapFromHBITMAP(hbitmap, NULL, WICBitmapUseAlpha, &pbitmap);

							DeleteObject(hbitmap);

						} else if( stgmedium.tymed == TYMED_HGLOBAL ) {
							hr = S_FALSE;
							auto cb = GlobalSize(stgmedium.hGlobal);
							if( cb > 0 ) {

								unsigned char * bytes = ( unsigned char * ) new char[cb] {0};
								if( bytes ) {

									void * pvoid = GlobalLock(stgmedium.hGlobal);
									if( pvoid ) {

										memcpy((void *) bytes, pvoid, cb);
										GlobalUnlock(stgmedium.hGlobal);

										BITMAPINFO * pbm = (BITMAPINFO *) bytes;

										unsigned char * buffer = bytes + pbm->bmiHeader.biSize;

										if( pbm->bmiHeader.biHeight > 0 )
											MirrorBuffer(buffer, pbm->bmiHeader.biSizeImage,
												pbm->bmiHeader.biWidth, pbm->bmiHeader.biBitCount);

										hr = pWICFactory->CreateBitmapFromMemory(pbm->bmiHeader.biWidth, pbm->bmiHeader.biHeight,
											GUID_WICPixelFormat32bppBGR, pbm->bmiHeader.biWidth * pbm->bmiHeader.biBitCount / 8,
											cb - pbm->bmiHeader.biSize, buffer, &pbitmap);

										delete[] bytes;
									}

								}
							}

						} else {
							hr = S_FALSE;
						}

						if( S_OK == hr ) {

							IWICFormatConverter * pconverter = nullptr;
							hr = pWICFactory->CreateFormatConverter(&pconverter);
							if( S_OK == hr && pconverter ) {

								hr = pconverter->Initialize(pbitmap, GUID_WICPixelFormat32bppBGR,
									WICBitmapDitherTypeNone, nullptr, 0.f, WICBitmapPaletteTypeCustom);
								pbitmap->Release();
								hr = pWICFactory->CreateBitmapFromSource(pconverter, WICBitmapCacheOnLoad,
									&pbitmap);

								*ppbitmap = pbitmap;
								pconverter->Release();
							}
						}

						ReleaseStgMedium(&stgmedium);
					}

					break;
				}


			}

			penum->Release();
		}

		pdata_obj->Release();
	}

	if( fCreateFactory ) {
		if( pWICFactory ) pWICFactory->Release();
	}

	return hr;

}

HRESULT SaveWICBitmapAsJPG(IWICImagingFactory * pWICFactory, const WCHAR * szSavePath, IWICBitmap * pbitmap) {

	HRESULT hr;

	bool fCreateFactory = false;
	if( !pWICFactory ) {
		hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
			IID_PPV_ARGS(&pWICFactory));

		if( hr != S_OK ) {
			return E_FAIL;
		}

		fCreateFactory = true;
	}

	IWICStream * pwicstream = nullptr;
	hr = pWICFactory->CreateStream(&pwicstream);
	pwicstream->InitializeFromFilename(szSavePath, GENERIC_WRITE);

	IStream * pstream = nullptr;
	hr = pwicstream->QueryInterface(IID_PPV_ARGS(&pstream));

	IWICBitmapEncoder * pencoder = nullptr;
	IWICBitmapFrameEncode * pframeencoder = nullptr;
	IPropertyBag2 * pprop = nullptr;

	hr = pWICFactory->CreateEncoder(GUID_ContainerFormatJpeg, nullptr, &pencoder);

	hr = pencoder->Initialize(pstream, WICBitmapEncoderNoCache);

	hr = pencoder->CreateNewFrame(&pframeencoder, &pprop);

	hr = pframeencoder->Initialize(pprop);

	WICPixelFormatGUID req_format = GUID_WICPixelFormat24bppBGR;
	hr = pframeencoder->SetPixelFormat(&req_format);

	UINT width, height;
	hr = pbitmap->GetSize(&width, &height);
	WICRect wrect = { 0, 0, width, height };

	hr = pframeencoder->SetSize(width, height);

	hr = pframeencoder->WriteSource(pbitmap, &wrect);

	hr = pframeencoder->Commit();

	hr = pencoder->Commit();

	pwicstream->Release();
	pstream->Release();
	pencoder->Release();
	pprop->Release();
	pframeencoder->Release();

	if( fCreateFactory ) {
		if( pWICFactory ) pWICFactory->Release();
	}

	return S_OK;
}