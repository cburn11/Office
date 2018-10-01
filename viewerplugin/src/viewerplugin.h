#pragma once

#include <Windows.h>
#include <windowsx.h>

#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

#include "ClipboardToWord_h.h"

#include "ViewerApplication.h"

class ATL_NO_VTABLE ViewerPlugin :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<ViewerPlugin, &CLSID_ClipboardEventsPlugin>,
	public IDispatchImpl<IPlugin, &IID_IPlugin, &LIBID_ClipboardToWord>,
	public IDispatchImpl<IClipboardEvents, &IID_IClipboardEvents, &LIBID_ClipboardToWord> {

	IApplication *			m_pApplication = nullptr;
	ViewerMainWindow *		m_pmainwindow;

	BEGIN_COM_MAP(ViewerPlugin)
		COM_INTERFACE_ENTRY(IPlugin)
		COM_INTERFACE_ENTRY2(IDispatch, IPlugin)
		COM_INTERFACE_ENTRY(IClipboardEvents)
	END_COM_MAP()

	ViewerPlugin();
	~ViewerPlugin();

	DECLARE_NO_REGISTRY()

	DECLARE_NOT_AGGREGATABLE(ViewerPlugin)

	STDMETHODIMP GetProperty(BSTR propertyname, BSTR * propertyvalue);
	STDMETHODIMP SetProperty(BSTR propertyname, BSTR propertyvalue, VARIANT_BOOL * pres);

	STDMETHODIMP ClipboardUpdate();
	STDMETHODIMP NewBitmapOnClipboard();
	STDMETHODIMP BitmapSavedToTempFile(BSTR bstr_filepath);
	STDMETHODIMP Quit();

};