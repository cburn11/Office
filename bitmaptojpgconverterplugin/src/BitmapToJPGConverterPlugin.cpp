#include <Windows.h>
#include <wincodec.h>
#include <string.h>

#include <string>
#include <time.h>

#include "iunknownmacros.h"
#include "ClipboardToWord_h.h"

#pragma comment(lib, "Windowscodecs.lib")

HINSTANCE		g_hInstance;

ULONG			g_ref;

class ClipboardEventsImpl : public IPlugin, public IClipboardEvents {

	IWICImagingFactory		* g_pFactory = nullptr;

	ITypeInfo		* g_pTypeInfo = nullptr;

	std::wstring m_savedir{ L"C:\\temp\\" };

	HRESULT loadMyTypeInfo() {

		HRESULT			hr;
		LPTYPELIB		pTypeLib;

		hr = LoadRegTypeLib(LIBID_ClipboardToWord, 1, 0, 0, &pTypeLib);
		if( !SUCCEEDED(hr) ) {
			return hr;
		}

		hr = pTypeLib->GetTypeInfoOfGuid(
			IID_IPlugin, &g_pTypeInfo);
		if( !SUCCEEDED(hr) ) {
			pTypeLib->Release();
			return hr;
		}

		g_pTypeInfo->AddRef();
		pTypeLib->Release();

		return S_OK;
	}

public:

	IMPLEMENT_UNKNOWN_LIBRARY(ClipboardEventsImpl, g_ref)

	//IMPLEMENT_DISPATCH_DUMMY(ClipboardEventsImpl)

	BEGIN_INTERFACE_TABLE(ClipboardEventsImpl)
		IMPLEMENTS_INTERFACE(IPlugin)
		IMPLEMENTS_INTERFACE_AS(IDispatch, IPlugin)
		IMPLEMENTS_INTERFACE(IClipboardEvents)
	END_INTERFACE_TABLE

	ClipboardEventsImpl() {
		auto hr = OleInitialize(nullptr);
		hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER,
			IID_PPV_ARGS(&g_pFactory));
	}

	STDMETHODIMP GetTypeInfoCount(UINT * pctinfo) { *pctinfo = 1;  return S_OK; }
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID, ITypeInfo ** ppTInfo) {
		HRESULT			hr;

		*ppTInfo = NULL;

		if( iTInfo )
			return ResultFromScode(DISP_E_BADINDEX);

		if( g_pTypeInfo ) {

			g_pTypeInfo->AddRef();
			hr = S_OK;

		} else {

			hr = loadMyTypeInfo();

		}

		if( SUCCEEDED(hr) )
			*ppTInfo = g_pTypeInfo;

		return hr;
	}
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID, DISPID * rgDispId) { 
		
		HRESULT hr;
		
		if( !g_pTypeInfo ) {
			hr = loadMyTypeInfo();
			if( !SUCCEEDED(hr) )
				return hr;
		}

		return DispGetIDsOfNames(g_pTypeInfo, rgszNames, cNames, rgDispId);
	}

	STDMETHODIMP Invoke(DISPID dispIdMember,
		/* [in] */ REFIID riid,
		/* [in] */ LCID lcid,
		/* [in] */ WORD wFlags,
		/* [out][in] */ DISPPARAMS *pDispParams,
		/* [out] */ VARIANT *pVarResult,
		/* [out] */ EXCEPINFO *pExcepInfo,
		/* [out] */ UINT *puArgErr) {

		HRESULT hr;

		if( !g_pTypeInfo ) {
			hr = loadMyTypeInfo();
			if( !SUCCEEDED(hr) )
				return hr;
		}

		if( !IsEqualIID(riid, IID_NULL) )
			return ResultFromScode(DISP_E_UNKNOWNINTERFACE);

		return DispInvoke(dynamic_cast<IPlugin *>(this), g_pTypeInfo, dispIdMember,
			wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
	
	}

	STDMETHODIMP GetProperty(BSTR propertyname, BSTR * propertyvalue) {

		*propertyvalue = nullptr;

		return S_OK;
	}

	STDMETHODIMP SetProperty(BSTR propertyname, BSTR propertyvalue, VARIANT_BOOL * pres) {

		*pres = VARIANT_TRUE;

		std::wstring prop_name{ propertyname };
		if( prop_name == L"SaveDir" )
			m_savedir = propertyvalue;

		return S_OK;
	}

	STDMETHODIMP ClipboardUpdate() {
		
		return S_OK;
	}

	STDMETHODIMP NewBitmapOnClipboard() {
		
		return S_OK;
	}

	STDMETHODIMP BitmapSavedToTempFile(BSTR bstr_filepath) {

		std::wstring filepath{ bstr_filepath };

		auto szFilename = wcsrchr(bstr_filepath, L'\\') + 1;
		auto period = wcschr(szFilename, L'.');
		memset(period, 0, 2);

		SYSTEMTIME system_time{ 0 };
		GetSystemTime(&system_time);

		std::wstring filename{ szFilename };		

		//std::wstring new_filepath{ L"C:\\temp\\pics\\" };
		std::wstring new_filepath{ m_savedir };
		new_filepath += filename;
		new_filepath += L"-" + std::to_wstring(system_time.wYear) + std::to_wstring(system_time.wMonth) +
			std::to_wstring(system_time.wDay) + std::to_wstring(system_time.wMilliseconds);
		new_filepath += L".jpg";

		IWICBitmapDecoder *		pdecoder = nullptr;
		IWICBitmapFrameDecode *	pframedecoder = nullptr;

		auto hr = g_pFactory->CreateDecoderFromFilename(filepath.c_str(), nullptr, GENERIC_READ,
			WICDecodeMetadataCacheOnLoad, &pdecoder);

		UINT cFrames;
		hr = pdecoder->GetFrameCount(&cFrames);

		for( UINT i = 0; i < cFrames; ++i ) {
			hr = pdecoder->GetFrame(i, &pframedecoder);
			UINT width, height;
			hr = pframedecoder->GetSize(&width, &height);
			WICRect wrect = { 0, 0, width, height };
			WICPixelFormatGUID format;
			hr = pframedecoder->GetPixelFormat(&format);
			IWICFormatConverter * pformatconverter = nullptr;
			hr = g_pFactory->CreateFormatConverter(&pformatconverter);
			hr = pformatconverter->Initialize(pframedecoder, GUID_WICPixelFormat24bppBGR,
				WICBitmapDitherTypeNone, nullptr, 0.f, WICBitmapPaletteTypeCustom);

			IWICStream * pwicstream = nullptr;
			hr = g_pFactory->CreateStream(&pwicstream);
			pwicstream->InitializeFromFilename(new_filepath.c_str() , GENERIC_WRITE);

			IStream * pstream = nullptr;
			hr = pwicstream->QueryInterface(IID_PPV_ARGS(&pstream));

			IWICBitmapEncoder * pencoder = nullptr;
			IWICBitmapFrameEncode * pframeencoder = nullptr;
			IPropertyBag2 * pprop = nullptr;

			hr = g_pFactory->CreateEncoder(GUID_ContainerFormatJpeg, nullptr, &pencoder);

			hr = pencoder->Initialize(pstream, WICBitmapEncoderNoCache);

			hr = pencoder->CreateNewFrame(&pframeencoder, &pprop);

			hr = pframeencoder->Initialize(pprop);

			WICPixelFormatGUID req_format = GUID_WICPixelFormat24bppBGR;

			hr = pframeencoder->SetPixelFormat(&req_format);

			hr = pframeencoder->SetSize(width, height);

			hr = pframeencoder->WriteSource(pformatconverter, &wrect);

			hr = pframeencoder->Commit();

			hr = pencoder->Commit();

			pwicstream->Release();
			pstream->Release();
			pencoder->Release();
			pprop->Release();
			pframeencoder->Release();
			pframedecoder->Release();
			pformatconverter->Release();
		}

		pdecoder->Release();

		return S_OK;
	}

	STDMETHODIMP Quit() {

		return S_OK;
	}
};

class LocalClassFactory : public IClassFactory {

public:

	IMPLEMENT_UNKNOWN_NO_DELETE(LocalClassFactory)

	BEGIN_INTERFACE_TABLE(LocalClassFactory)
		IMPLEMENTS_INTERFACE(IClassFactory)
	END_INTERFACE_TABLE

	STDMETHODIMP CreateInstance(IUnknown * pUnk, REFIID riid, void ** ppvoid) {
	
		HRESULT hr;

		if( !ppvoid ) return E_POINTER;

		*ppvoid = nullptr;

		auto ptemp = new ClipboardEventsImpl;
		if( !ptemp ) return E_OUTOFMEMORY;

		hr = ptemp->QueryInterface(riid, ppvoid);
		if( S_OK == hr ) ++g_ref;

		return hr;

	}

	STDMETHODIMP LockServer(BOOL fLock) {
		return S_OK;
	}
};

LocalClassFactory cf;

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, void * pvoid) {

	switch( dwReason ) {

	case DLL_PROCESS_ATTACH:

		DisableThreadLibraryCalls((HMODULE) hInstance);

		g_hInstance = hInstance;
		g_ref = 0;

		break;
	}

	return TRUE;
}

HRESULT CALLBACK DllGetClassObject(REFCLSID rclsid, REFIID riid, void ** ppv) {

	if( InlineIsEqualGUID(rclsid, CLSID_ClipboardEventsPlugin) ) {
		return cf.QueryInterface(riid, ppv);
	}

	return E_NOINTERFACE;
}

HRESULT CALLBACK DllCanUnloadNow() {

	HRESULT		hr;

	hr = ( g_ref > 0 ) ? S_FALSE : S_OK;

	return hr;
}