#include <Windows.h>

#include <ClipboardToWord_h.h>

#include "clipboardextender.h"

ClipboardEventsImpl::ClipboardEventsImpl(HWND hwnd) {

	m_hwndApp = hwnd;
}

HRESULT ClipboardEventsImpl::loadMyTypeInfo() {

	HRESULT			hr;
	LPTYPELIB		pTypeLib;

	hr = LoadRegTypeLib(LIBID_ClipboardToWord, 1, 0, 0, &pTypeLib);
	if( !SUCCEEDED(hr) ) {
		return hr;
	}

	hr = pTypeLib->GetTypeInfoOfGuid(
		IID_IClipboardEvents, &m_pTypeInfo);
	if( !SUCCEEDED(hr) ) {
		pTypeLib->Release();
		return hr;
	}

	m_pTypeInfo->AddRef();
	pTypeLib->Release();

	return S_OK;
}

STDMETHODIMP ClipboardEventsImpl::GetTypeInfoCount(UINT * pctinfo) {

	*pctinfo = 1;  return S_OK;
}

STDMETHODIMP ClipboardEventsImpl::GetTypeInfo(UINT iTInfo, LCID, ITypeInfo ** ppTInfo) {

	HRESULT			hr;

	*ppTInfo = NULL;

	if( iTInfo )
		return ResultFromScode(DISP_E_BADINDEX);

	if( m_pTypeInfo ) {

		m_pTypeInfo->AddRef();
		hr = S_OK;

	} else {

		hr = loadMyTypeInfo();

	}

	if( SUCCEEDED(hr) )
		*ppTInfo = m_pTypeInfo;

	return hr;
}

STDMETHODIMP ClipboardEventsImpl::GetIDsOfNames(REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID, DISPID * rgDispId) {

	HRESULT hr;

	if( !m_pTypeInfo ) {
		hr = loadMyTypeInfo();
		if( !SUCCEEDED(hr) )
			return hr;
	}

	return DispGetIDsOfNames(m_pTypeInfo, rgszNames, cNames, rgDispId);
}

STDMETHODIMP ClipboardEventsImpl::Invoke(DISPID dispIdMember,
	/* [in] */ REFIID riid,
	/* [in] */ LCID lcid,
	/* [in] */ WORD wFlags,
	/* [out][in] */ DISPPARAMS *pDispParams,
	/* [out] */ VARIANT *pVarResult,
	/* [out] */ EXCEPINFO *pExcepInfo,
	/* [out] */ UINT *puArgErr) {

	HRESULT hr;

	if( !m_pTypeInfo ) {
		hr = loadMyTypeInfo();
		if( !SUCCEEDED(hr) )
			return hr;
	}

	if( !IsEqualIID(riid, IID_NULL) )
		return ResultFromScode(DISP_E_UNKNOWNINTERFACE);

	hr = DispInvoke(dynamic_cast<IClipboardEvents *>( this ), m_pTypeInfo, dispIdMember,
		wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);

	return hr;
}

STDMETHODIMP ClipboardEventsImpl::ClipboardUpdate() {

	PostMessage(m_hwndApp, CE_CLIPBOARDEVENT, 0, 0);

	return S_OK;
}

STDMETHODIMP ClipboardEventsImpl::NewBitmapOnClipboard() {

	return S_OK;
}

STDMETHODIMP ClipboardEventsImpl::BitmapSavedToTempFile(BSTR bstr_filepath) {

	return S_OK;
}

STDMETHODIMP ClipboardEventsImpl::Quit() {

	return S_OK;
}