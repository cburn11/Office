#include <Windows.h>
#include <windowsx.h>

#include "ViewerPlugin.h"
#include "ViewerApplication.h"

#include "ClipboardToWord_h.h"

ViewerPlugin::ViewerPlugin() {

	auto hr = OleInitialize(nullptr);

	hr = CoCreateInstance(CLSID_Application, NULL, CLSCTX_INPROC_SERVER,
		IID_PPV_ARGS(&m_pApplication));

	m_pmainwindow = new ViewerMainWindow();

	if( S_OK == hr && m_pApplication ) {
		PostMessage(m_pmainwindow->m_window, WM_SETAPPLICATION, 0, (LPARAM) m_pApplication);
	}

}

ViewerPlugin::~ViewerPlugin() {

	if( m_pmainwindow->m_window ) {
		DestroyWindow(m_pmainwindow->m_window);
		//delete m_pmainwindow;
	}

	if( m_pmainwindow )
		delete m_pmainwindow;

	if( m_pApplication ) {
		m_pApplication->Quit();
		m_pApplication->Release();

	}
}


STDMETHODIMP ViewerPlugin::GetProperty(BSTR propertyname, BSTR * propertyvalue) {

	*propertyvalue = SysAllocString(L"");

	return S_OK;
}

STDMETHODIMP ViewerPlugin::SetProperty(BSTR propertyname, BSTR propertyvalue, VARIANT_BOOL * pres) {

	*pres = VARIANT_TRUE;

	std::wstring prop_name{ propertyname };
	if( prop_name == L"SaveDir" )
		SendMessage(m_pmainwindow->m_window, WM_SETSAVEDIR, 0, (LPARAM) propertyvalue);

	return S_OK;
}

STDMETHODIMP ViewerPlugin::ClipboardUpdate() {
	
	return S_OK;
}

STDMETHODIMP ViewerPlugin::NewBitmapOnClipboard() {
	
	PostMessage(m_pmainwindow->m_window, WM_NEWBITMAP, 0, 0);
	
	return S_OK;
}

STDMETHODIMP ViewerPlugin::BitmapSavedToTempFile(BSTR bstr_filepath) {
	
	return S_OK;
}

STDMETHODIMP ViewerPlugin::Quit() {
	
	/*if( m_pmainwindow )	delete m_pmainwindow;
	m_pmainwindow = nullptr;*/

	return S_OK;
}