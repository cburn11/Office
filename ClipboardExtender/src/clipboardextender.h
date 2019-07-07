#pragma once

#include <Windows.h>
#include <atlbase.h>
#include <atlcom.h>
#include <atlcomcli.h>

#include <memory>
#include <string>
#include <vector>

#include <windowclass.h>
#include <iunknownmacros.h>
#include <ClipboardToWord_h.h>

class ClipboardEventsImpl : public IClipboardEvents {

	ITypeInfo		* m_pTypeInfo = nullptr;

	HRESULT loadMyTypeInfo();

	HWND	m_hwndApp;

public:

	IMPLEMENT_UNKNOWN_NO_DELETE(ClipboardEventsImpl)

	BEGIN_INTERFACE_TABLE(ClipboardEventsImpl)
		IMPLEMENTS_INTERFACE(IClipboardEvents)
		IMPLEMENTS_INTERFACE_AS(IDispatch, IClipboardEvents)
	END_INTERFACE_TABLE

	ClipboardEventsImpl(HWND hwnd);

	STDMETHODIMP GetTypeInfoCount(UINT * pctinfo);
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID, ITypeInfo ** ppTInfo);
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID, DISPID * rgDispId);
	STDMETHODIMP Invoke(DISPID dispIdMember,
		/* [in] */ REFIID riid,
		/* [in] */ LCID lcid,
		/* [in] */ WORD wFlags,
		/* [out][in] */ DISPPARAMS *pDispParams,
		/* [out] */ VARIANT *pVarResult,
		/* [out] */ EXCEPINFO *pExcepInfo,
		/* [out] */ UINT *puArgErr);

	STDMETHODIMP ClipboardUpdate();
	STDMETHODIMP NewBitmapOnClipboard();
	STDMETHODIMP BitmapSavedToTempFile(BSTR bstr_filepath);
	STDMETHODIMP Quit();

};

#define CE_CLIPBOARDEVENT (WM_APP + 1)

class ClipboardExtenderMainWindow : public ApplicationWindow<ClipboardExtenderMainWindow> {

public:

	ClipboardExtenderMainWindow();
	~ClipboardExtenderMainWindow();

	LRESULT MessageHandler(UINT const message, WPARAM const wparam, LPARAM const lparam);

private:

	static const int padding = 8;
	static const int cyButton = 25;
	static const int cxButton = 100;

	static const int ID_BUTTON_COPY = 1000;
	static const int ID_BUTTON_RESET = 1001;

	IClipboardEvents *		m_pEvents = nullptr;

	IApplication *			m_pCBApplication = nullptr;
	IConnectionPoint *		m_pCP = nullptr;
	
	DWORD					m_cookie = 0; 

	std::vector<std::wstring> m_strings;

	HWND					m_hwndListBox;
	HWND					m_hwndButtonReset;
	HWND					m_hwndButtonCopyAll;

	bool					m_fCopyEvent = false;

	void intrnlRegisterClass();
	void intrnlCreateWindow();
	void intrnlLoadAccellorators();

	void LoadEventSink();
	void LoadClipboardToWordApplication();

	void ResetListBox();
	void SaveText(const std::wstring& text);

	std::wstring GetClipboardText();
	void CopyAllToClipboad();

	BOOL Cls_OnCreate(HWND hwnd, LPCREATESTRUCT lpCreateStruct);

	void Cls_OnSize(HWND hwnd, UINT state, int cx, int cy);
	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);
	void Cls_OnClipboardUpdate(HWND hwnd);
};

