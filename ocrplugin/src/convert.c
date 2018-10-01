#define COBJMACROS

#include <Windows.h>
#include <wincodec.h>

#pragma comment(lib, "Windowscodecs.lib")

IWICImagingFactory		* g_pFactory = NULL;

BOOL InitializeIWIC() {

	HRESULT		hr;

	hr = CoCreateInstance(&CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
		&IID_IWICImagingFactory, &g_pFactory);

	if( hr != S_OK ) {
		return FALSE;
	}

	return TRUE;
}

void CleanupIWIC() {

	if( g_pFactory )
		IWICImagingFactory_Release(g_pFactory);

}

BOOL ConvertBitMapToTiff(WCHAR * szPath, BITMAP * pbm, int cbBuffer, BYTE * pBuffer) {

	HRESULT		hr;
	
	IWICBitmapEncoder		* pEncoder;
	IWICBitmapFrameEncode	* pFrameEncode;
	IPropertyBag2			* pPropBag;
	IWICStream				* pStream;	

	hr = IWICImagingFactory_CreateStream(g_pFactory, &pStream);

	hr = IWICStream_InitializeFromFilename(pStream, szPath, GENERIC_WRITE);

	hr = IWICImagingFactory_CreateEncoder(g_pFactory, &GUID_ContainerFormatTiff,
		NULL, &pEncoder);

	IStream		* ps;
	hr = IWICStream_QueryInterface(pStream, &IID_IStream, &ps);
	hr = IWICBitmapEncoder_Initialize(pEncoder, ps, WICBitmapEncoderNoCache);

	hr = IWICBitmapEncoder_CreateNewFrame(pEncoder, &pFrameEncode, &pPropBag);

	PROPBAG2	option[2] = { 0 };
	option[0].pstrName = L"TiffCompressionMethod";
	option[1].pstrName = L"CompressionQuality";

	VARIANT		vars[2];
	VariantInit(&vars[0]);
	vars[0].vt = VT_UI1;
	vars[0].bVal = WICTiffCompressionNone;
	vars[1].vt = VT_R4;
	vars[1].fltVal = 1.0;

	hr = IPropertyBag2_Write(pPropBag, 2, option, vars);

	hr = IWICBitmapFrameEncode_Initialize(pFrameEncode, pPropBag);

	hr = IWICBitmapFrameEncode_SetSize(pFrameEncode, pbm->bmWidth, pbm->bmHeight);

	WICPixelFormatGUID formatGUID = GUID_WICPixelFormat32bppRGBA;
	hr = IWICBitmapFrameEncode_SetPixelFormat(pFrameEncode, &formatGUID);

	hr = IsEqualGUID(&formatGUID, &GUID_WICPixelFormat32bppRGBA);
	if( hr != S_OK )
		hr = IWICBitmapFrameEncode_SetPixelFormat(pFrameEncode, &formatGUID);

	hr = IWICBitmapFrameEncode_WritePixels(pFrameEncode, pbm->bmHeight,
		pbm->bmWidthBytes, cbBuffer, pBuffer);

	hr = IWICBitmapFrameEncode_Commit(pFrameEncode);

	hr = IWICBitmapEncoder_Commit(pEncoder);

	ULONG count;
	if( pPropBag )
		count = IPropertyBag2_Release(pPropBag);

	if( pFrameEncode )
		count = IWICBitmapFrameEncode_Release(pFrameEncode);

	if( pEncoder )
		count = IWICBitmapEncoder_Release(pEncoder);

	if( pStream )
		count = IWICStream_Release(pStream);

	if( ps )
		count = IStream_Release(ps);

	return TRUE;
}