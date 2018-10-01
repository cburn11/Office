#define CINTERFACE
#define COBJMACROS

#include <Windows.h>
#include <windowsx.h>
#include <stdlib.h>

#include "resource.h"
#include "ApplicationImpl.h"
#include "ConnectableSource.h"

extern void * g_pConnectableSource;

ITypeInfo		* g_pTypeInfo = NULL;

HRESULT loadMyTypeInfo() {

	HRESULT			hr;
	LPTYPELIB		pTypeLib;

	hr = LoadRegTypeLib(&LIBID_ClipboardToWord, 1, 0, 0, &pTypeLib);
	if( !SUCCEEDED(hr) ) {
		return hr;
	}

	hr = ITypeLib_GetTypeInfoOfGuid(pTypeLib,
		&IID_IApplication, &g_pTypeInfo);
	if( !SUCCEEDED(hr) ) {
		ITypeLib_Release(pTypeLib);
		return hr;
	}

	ITypeInfo_AddRef(g_pTypeInfo);
	ITypeLib_Release(pTypeLib);

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_QueryInterface(
	IApplication * This,
	/* [in] */ REFIID riid,
	/* [annotation][iid_is][out] */
	__RPC__deref_out  void **ppvObject) {

	if( IsEqualIID(riid, &IID_IUnknown) ||
		IsEqualIID(riid, &IID_IDispatch) ||
		IsEqualIID(riid, &IID_IApplication) ) {

		*ppvObject = This;
		IApplication_AddRef(This);

		return S_OK;
	} else if( IsEqualIID(riid, &IID_IConnectionPointContainer) ) {

		HRESULT hr = 
			IConnectionPointContainer_QueryInterface(
			(IConnectionPointContainer *) g_pConnectableSource, riid, ppvObject
		);

		return hr;

	}

	*ppvObject = NULL;

	return E_NOINTERFACE;
}

//	These are dummy methods, because the lifetime of this interface is
//	directly tied to the process.
ULONG STDMETHODCALLTYPE AppImpl_AddRef(IApplication * This) { return 2; }

ULONG STDMETHODCALLTYPE AppImpl_Release(IApplication * This) { return 1; }

HRESULT STDMETHODCALLTYPE AppImpl_GetTypeInfoCount(
	IApplication * This,
	/* [out] */ UINT *pctinfo) {

	*pctinfo = 1;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_GetTypeInfo(
	IApplication * This,
	/* [in] */ UINT iTInfo,
	/* [in] */ LCID lcid,
	/* [out] */ ITypeInfo **ppTInfo) {

	HRESULT			hr;

	*ppTInfo = NULL;

	if( iTInfo )
		return ResultFromScode(DISP_E_BADINDEX);

	if( g_pTypeInfo ) {

		ITypeInfo_AddRef(g_pTypeInfo);
		hr = S_OK;

	} else {

		hr = loadMyTypeInfo();

	}

	if( SUCCEEDED(hr) )
		*ppTInfo = g_pTypeInfo;

	return hr;
}

HRESULT STDMETHODCALLTYPE AppImpl_GetIDsOfNames(
	IApplication * This,
	/* [in] */ REFIID riid,
	/* [size_is][in] */ LPOLESTR *rgszNames,
	/* [range][in] */ UINT cNames,
	/* [in] */ LCID lcid,
	/* [size_is][out] */ DISPID *rgDispId) {

	HRESULT			hr;

	if( !g_pTypeInfo ) {
		hr = loadMyTypeInfo();
		if( !SUCCEEDED(hr) )
			return hr;
	}

	return DispGetIDsOfNames(g_pTypeInfo, rgszNames, cNames, rgDispId);
}

HRESULT STDMETHODCALLTYPE AppImpl_Invoke(
	IApplication * This,
	/* [in] */ DISPID dispIdMember,
	/* [in] */ REFIID riid,
	/* [in] */ LCID lcid,
	/* [in] */ WORD wFlags,
	/* [out][in] */ DISPPARAMS *pDispParams,
	/* [out] */ VARIANT *pVarResult,
	/* [out] */ EXCEPINFO *pExcepInfo,
	/* [out] */ UINT *puArgErr) {

	HRESULT			hr;

	if( !g_pTypeInfo ) {
		hr = loadMyTypeInfo();
		if( !SUCCEEDED(hr) )
			return hr;
	}

	if( !IsEqualIID(riid, &IID_NULL) )
		return ResultFromScode(DISP_E_UNKNOWNINTERFACE);

	return DispInvoke(This, g_pTypeInfo, dispIdMember,
		wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);
}

HRESULT STDMETHODCALLTYPE AppImpl_get_Visible(
	IApplication * This,
	VARIANT_BOOL *pvis) {

	if( !pvis ) return E_POINTER;

	APPLICATION_IMPL * pApp = (APPLICATION_IMPL *) This;

	*pvis = IsWindowVisible(pApp->hwnd) ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_put_Visible(
	IApplication * This,
	/* [in] */ VARIANT_BOOL vis) {

	APPLICATION_IMPL * pApp = (APPLICATION_IMPL *) This;
	
	int iShow = ( VARIANT_TRUE == vis ) ? SW_SHOW : SW_HIDE;
	ShowWindow(pApp->hwnd, iShow);

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_get_Monitor(
	IApplication * This,
	VARIANT_BOOL *pvis) {

	if( !pvis ) return E_POINTER;

	APPLICATION_IMPL * pApp = (APPLICATION_IMPL *) This;

	BOOL checked = Button_GetCheck(GetDlgItem(pApp->hwnd, IDC_CHECK_MONITOR));
	*pvis = checked ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_put_Monitor(
	IApplication * This,
	/* [in] */ VARIANT_BOOL vis) {

	APPLICATION_IMPL * pApp = (APPLICATION_IMPL *) This;

	HWND hwndCheck = GetDlgItem(pApp->hwnd, IDC_CHECK_MONITOR);
	BOOL requested_state = ( vis == VARIANT_TRUE ) ? TRUE : FALSE;
	
	if( requested_state != Button_GetCheck(hwndCheck) ) {
		Button_SetCheck(hwndCheck, requested_state);
		SendMessage(pApp->hwnd, WM_COMMAND, MAKEWPARAM(IDC_CHECK_MONITOR, 0), (LPARAM) hwndCheck);
	}

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_Quit(
	IApplication * This ) {

	APPLICATION_IMPL * pApp = (APPLICATION_IMPL *) This;
	DestroyWindow(pApp->hwnd);

	return S_OK;
}

HRESULT STDMETHODCALLTYPE AppImpl_LoadPlugin(
	IApplication * This,
	BSTR path,
	IPlugin ** ppdispPlugin) {

	if( !ppdispPlugin ) return E_POINTER;

	IPlugin * pdisp = NULL;
	BOOL res = LoadPlugin(g_pConnectableSource, path, &pdisp);
	if( res ) {
		*ppdispPlugin = pdisp;
		return S_OK;
	}

	return E_FAIL;
}

HRESULT STDMETHODCALLTYPE AppImpl_UnloadPlugin(
	IApplication * This,
	BSTR path,
	VARIANT_BOOL *pres) {

	if( !pres ) return E_POINTER;

	BOOL res = UnloadPlugin(g_pConnectableSource, path);
	*pres = res ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}

IApplicationVtbl	g_IApplicationVtbl = { 
	AppImpl_QueryInterface, AppImpl_AddRef, AppImpl_Release,
	AppImpl_GetTypeInfoCount, AppImpl_GetTypeInfo, AppImpl_GetIDsOfNames, AppImpl_Invoke,
	AppImpl_get_Visible, AppImpl_put_Visible, AppImpl_get_Monitor, AppImpl_put_Monitor,
	AppImpl_Quit, AppImpl_LoadPlugin, AppImpl_UnloadPlugin
};

BOOL CreateApplicationImpl(HWND hwnd, APPLICATION_IMPL ** ppAppImpl) {

	if( !ppAppImpl )	return FALSE;

	*ppAppImpl = NULL;

	APPLICATION_IMPL * ptemp = (APPLICATION_IMPL *) malloc(sizeof(APPLICATION_IMPL));
	if( !ptemp )	return FALSE;

	ptemp->hwnd = hwnd;
	ptemp->pApp.lpVtbl = &g_IApplicationVtbl;

	*ppAppImpl = ptemp;

	return TRUE;
}