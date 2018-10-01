#define COBJMACROS

#include <Windows.h>
#include <objbase.h>

#include <OCIdl.h>

#include "office\office 2007\inc\modi.h"

CLSID		g_clsidDocument;

BOOL InitializeMODI() {

	HRESULT		hr;

	hr = CLSIDFromProgID(L"MODI.Document", &g_clsidDocument);
	if( hr != S_OK ) {
		return FALSE;
	}

	return TRUE;
}

void CleanupMODI() {

}

BOOL PerformOCRonTiff(WCHAR * szPath, UINT * pcchText, WCHAR ** pszText) {

	HRESULT		hr;
	BOOL		ret = FALSE;

	IDocument	* pDocument = NULL;
	IImages		* pImages = NULL;
	IImage		* pImage = NULL;
	ILayout		* pLayout = NULL;
	IDispatch	* pdispImage = NULL;
	BSTR		bstrText = NULL, bstrPath = NULL;
	LONG		cWords;

	ULONG		count;

	
	hr = CoCreateInstance(&g_clsidDocument, NULL, CLSCTX_INPROC_SERVER,
		&IID_IDocument, &pDocument);	

	bstrPath = SysAllocString(szPath);
	hr = IDocument_Create(pDocument, bstrPath);
	if( hr != S_OK )	goto CLEANUP;

	hr = IDocument_get_Images(pDocument, &pImages);
	if( hr != S_OK )	goto CLEANUP;

	hr = IImages_get_Item(pImages, 0, &pdispImage);
	if( hr != S_OK )	goto CLEANUP;

	hr = IDispatch_QueryInterface(pdispImage,
		&IID_IImage, &pImage);

	hr = IImage_OCR(pImage, miLANG_ENGLISH, TRUE, TRUE);
	if( hr != S_OK )	goto CLEANUP;

	hr = IImage_get_Layout(pImage, &pLayout);
	if( hr != S_OK )	goto CLEANUP;

	hr = ILayout_get_NumWords(pLayout, &cWords);
	if( hr != S_OK )	goto CLEANUP;

	if( cWords < 1 ) {
		ret = TRUE;		
		WCHAR * szError = L"[OCR failed to return words]";
		*pcchText = wcslen(szError);
		*pszText = (WCHAR *) CoTaskMemAlloc(sizeof(WCHAR) * ( *pcchText + 1 ));
			
		wcscpy_s(*pszText, *pcchText + 1, szError);
		goto CLEANUP;
	}

	hr = ILayout_get_Text(pLayout, &bstrText);
	if( hr != S_OK )	goto CLEANUP;
	
	int		cchTextOut = SysStringLen(bstrText);
	WCHAR * szTextOut;
	szTextOut = ( WCHAR * ) CoTaskMemAlloc(sizeof(WCHAR) * (cchTextOut + 1));
	if( !szTextOut ) {
		*pcchText = -1;
		*pszText = NULL;

		goto CLEANUP;
	}
	wcscpy_s(szTextOut, cchTextOut + 1, bstrText);

	*pcchText = cchTextOut;
	*pszText = szTextOut;

	ret = TRUE;

CLEANUP:

	if( pLayout )		count = ILayout_Release(pLayout);
	if( pdispImage )	count = IDispatch_Release(pdispImage);
	if( pImage )		count = IImage_Release(pImage);

	if( pImages )		count = IImages_Release(pImages);	

	if( bstrText )		SysFreeString(bstrText);
	if( bstrPath )		SysFreeString(bstrPath);

	if( pDocument )	{
		hr = IDocument_Close(pDocument, VARIANT_FALSE);
		count = IDocument_Release(pDocument);
	}

	return ret;
}