#pragma once

#include <Windows.h>
#include <windowsx.h>

#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

#include "ClipboardToWord_h.h"

class ATL_NO_VTABLE OCRPlugin :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<OCRPlugin, &CLSID_ClipboardEventsPlugin>,
	public IDispatchImpl<IPlugin, &IID_IPlugin, &LIBID_ClipboardToWord>,
	public IDispatchImpl<IClipboardEvents, &IID_IClipboardEvents, &LIBID_ClipboardToWord> {

	BEGIN_COM_MAP(OCRPlugin)
		COM_INTERFACE_ENTRY(IPlugin)
		COM_INTERFACE_ENTRY2(IDispatch, IPlugin)
		COM_INTERFACE_ENTRY(IClipboardEvents)
	END_COM_MAP()

	OCRPlugin();
	virtual ~OCRPlugin();

	DECLARE_NO_REGISTRY()

	DECLARE_NOT_AGGREGATABLE(OCRPlugin)

	STDMETHODIMP GetProperty(BSTR propertyname, BSTR * propertyvalue);
	STDMETHODIMP SetProperty(BSTR propertyname, BSTR propertyvalue, VARIANT_BOOL * pres);

	STDMETHODIMP ClipboardUpdate();
	STDMETHODIMP NewBitmapOnClipboard();
	STDMETHODIMP BitmapSavedToTempFile(BSTR bstr_filepath);
	STDMETHODIMP Quit();

};