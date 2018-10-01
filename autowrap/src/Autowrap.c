#define COBJMACROS

#include <Windows.h>
#include <tchar.h>

#include <stdlib.h>

#include "AutoInternalDefinitions.h"

HRESULT AutowrapInvoke(int type, VARIANT * pvResult, void * pDispIn,
					   OLECHAR * szName, int cArgs, ...) {

	HRESULT			hr;

	DISPPARAMS		dispparamsAuto;
	EXCEPINFO		excepinfoAuto;
	UINT			uArgErrAuto;

	VARIANT			* pvAuto = NULL;

	DISPID			dispidSave = DISPID_PROPERTYPUT;
	DISPID			dispidAuto;

	va_list			marker = NULL;

	IDispatch		* pDisp;

	hr = IUnknown_QueryInterface((IUnknown *) pDispIn, &IID_IDispatch, &pDisp);
	if(!SUCCEEDED(hr))
		goto CLEANUP;

	if(cArgs > 0) {

		va_start(marker, cArgs);

		pvAuto = (VARIANT *) malloc(sizeof(VARIANT) * cArgs);

		if(!pvAuto) {
				
			hr = E_OUTOFMEMORY;

			goto CLEANUP;

		}

	}

	{
		VARIANT		* pvar = NULL;
		int			i;

		for(i = 0; i < cArgs; ++i) {			

			pvar = va_arg(marker, VARIANT *);

			memcpy((pvAuto + i), pvar, sizeof(VARIANT));

		}
	
		hr = IDispatch_GetIDsOfNames(pDisp, &IID_NULL, &szName, 1,
			LOCALE_SYSTEM_DEFAULT, &dispidAuto);

	}

	if(FAILED(hr)) {

		pvResult = NULL;

		goto CLEANUP;

	}

	dispparamsAuto.cArgs = cArgs;
	dispparamsAuto.cNamedArgs = 0;
	dispparamsAuto.rgvarg = pvAuto;
	dispparamsAuto.rgdispidNamedArgs = NULL;

	if(type & DISPATCH_PROPERTYPUT) {

		dispparamsAuto.cNamedArgs = 1;
		dispparamsAuto.rgdispidNamedArgs = &dispidSave;

	}

	hr = IDispatch_Invoke(pDisp, dispidAuto, &IID_NULL,
		LOCALE_SYSTEM_DEFAULT, type, &dispparamsAuto, pvResult,
		&excepinfoAuto, &uArgErrAuto);

	va_end(marker);

CLEANUP:

	if(pvAuto)	free(pvAuto);

	if(pDisp)		IDispatch_Release(pDisp);

	return hr;
}

HRESULT AutowrapNamedInvoke(VARIANT * pvResult, void * pDispIn,
					   OLECHAR * szName, int cArgs, ...) {

	int				i;

	HRESULT			hr;

	DISPPARAMS		dispparamsAuto = {0};
	EXCEPINFO		excepinfoAuto;
	UINT			uArgErrAuto;

	VARIANT			* pvAuto = NULL;

	DISPID			* pdispidAuto = NULL;
	LPOLESTR		* szNames = NULL;

	IDispatch		* pDisp;

	va_list			marker;

	hr = IUnknown_QueryInterface((IUnknown *) pDispIn, &IID_IDispatch, &pDisp);
	if(!SUCCEEDED(hr))
		goto CLEANUP;

	va_start(marker, cArgs);

	pdispidAuto = (DISPID *) malloc(sizeof(DISPID) * (1 + cArgs));
	szNames = (LPOLESTR *) malloc(sizeof(LPOLESTR) * (1 + cArgs));
	if(cArgs > 0)
		pvAuto = (VARIANT *) malloc(sizeof(VARIANT) * cArgs);

	if(!pdispidAuto || !szNames || (!pvAuto && cArgs > 0)) {
				
		hr = E_OUTOFMEMORY;

		goto CLEANUP;

	}

	szNames[0] = szName;

	for(i = 0; i < cArgs; ++i) {
			
		VARIANT		* pvar;

		szNames[i + 1] = va_arg(marker, OLECHAR *);

		pvar = va_arg(marker, VARIANT *);
		memcpy((pvAuto + i), pvar, sizeof(VARIANT));

	}

	hr = IDispatch_GetIDsOfNames(pDisp, &IID_NULL, szNames, cArgs + 1,
		LOCALE_SYSTEM_DEFAULT, pdispidAuto);

	if(FAILED(hr)) {

		pvResult = NULL;

		goto CLEANUP;

	}

	dispparamsAuto.cArgs = cArgs;
	dispparamsAuto.cNamedArgs = cArgs;
	if(cArgs > 0) {
		dispparamsAuto.rgvarg = pvAuto;
		dispparamsAuto.rgdispidNamedArgs = &pdispidAuto[1];
	}

	hr = IDispatch_Invoke(pDisp, pdispidAuto[0], &IID_NULL,
		LOCALE_SYSTEM_DEFAULT, DISPATCH_METHOD, &dispparamsAuto, pvResult,
		&excepinfoAuto, &uArgErrAuto);

	va_end(marker);

CLEANUP:

	if(pdispidAuto)	free(pdispidAuto);
	if(szNames)		free(szNames);
	if(pvAuto)		free(pvAuto);

	if(pDisp)		IDispatch_Release(pDisp);

	return hr;
}

HRESULT GetDispProperty(void * pdisp, OLECHAR * szName, VARIANT * pvResult) {

	return AutowrapInvoke(DISPATCH_PROPERTYGET, 
		pvResult, pdisp, szName, 0);

}

HRESULT PutDispProperty(void * pdisp, OLECHAR * szName,
						VARIANT * pvValue, VARIANT * pvResult) {

	return AutowrapInvoke(DISPATCH_PROPERTYPUT,
		pvResult, pdisp, szName, 1, pvValue);
}