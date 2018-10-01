#include <Windows.h>

#include "iunknownmacros.h"

HRESULT InterfaceTableQueryInterface(void * pThis, const INTERFACE_ENTRY * pTable, REFIID riid, void ** ppv) {

	if( InlineIsEqualGUID(riid, IID_IUnknown) ) {

		*ppv = (char *) pThis + pTable->dwData;
		( (IUnknown *) ( *ppv ) )->AddRef();
		return S_OK;

	} else {

		HRESULT hr = E_NOINTERFACE;

		while( pTable->pfnFinder ) {

			if( !pTable->pIID || InlineIsEqualGUID(riid, *pTable->pIID) ) {

				if( pTable->pfnFinder == ENTRY_IS_OFFSET ) {
					*ppv = (char *) pThis + pTable->dwData;
					( (IUnknown *) ( *ppv ) )->AddRef();
					hr = S_OK;
					break;
				} else {
					hr = pTable->pfnFinder(pThis, pTable->dwData, riid, ppv);
					if( hr == S_OK ) break;
				}
			}

			++pTable;
		}

		if( hr != S_OK ) *ppv = NULL;
		return hr;
	}
}