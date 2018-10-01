#define CINTERFACE
#define COBJMACROS

#include <Windows.h>

#include <stdlib.h>

#include "ClipboardToWord_h.h"
#include "ApplicationImpl.h"

extern void * g_pConnectableSource;		// Defined in clipboardtoword.c

HRESULT STDMETHODCALLTYPE CF_QueryInterface( 
            __RPC__in IClassFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
			__RPC__deref_out  void **ppvObject) {

				if(IsEqualIID(riid, &IID_IUnknown) || IsEqualIID(riid, &IID_IClassFactory)) {

					*ppvObject = This;

					return S_OK;
				}

				*ppvObject = NULL;

				return E_NOINTERFACE;
}

        
ULONG STDMETHODCALLTYPE CF_AddRef( 
            __RPC__in IClassFactory * This) {

				return 2;
}
        
ULONG STDMETHODCALLTYPE CF_Release( 
            __RPC__in IClassFactory * This) {

				return 1;
}
        
HRESULT STDMETHODCALLTYPE CF_CreateInstance( 
            IClassFactory * This,
            /* [unique][in] */ IUnknown *pUnkOuter,
            /* [in] */ REFIID riid,
			/* [iid_is][out] */ void **ppvObject) {

				//HRESULT		hr;

	if( !ppvObject )
	return E_POINTER;

	*ppvObject = NULL;

	if(pUnkOuter != NULL)
		return E_INVALIDARG;

	if( IsEqualIID(riid, &IID_IUnknown) ||
		IsEqualIID(riid, &IID_IApplication) ) {

		HRESULT	hr = IApplication_QueryInterface(&(g_pAppImpl->pApp), riid, ppvObject);
		return hr;
	}

	return E_NOINTERFACE;
}
        
HRESULT STDMETHODCALLTYPE CF_LockServer( 
            IClassFactory * This,
			/* [in] */ BOOL fLock) {

				return S_OK;
}


IClassFactoryVtbl	vtbl = {CF_QueryInterface, CF_AddRef, CF_Release,
								CF_CreateInstance, CF_LockServer};

IClassFactory		g_cf = {&vtbl};