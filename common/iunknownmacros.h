#ifndef __IUnknownMacros_Header
#define __IUnknownMacros_Header

#ifdef __cplusplus

typedef HRESULT(*INTERFACE_FINDER)( void * pThis, DWORD dwData, REFIID riid, void ** ppv );

#define ENTRY_IS_OFFSET INTERFACE_FINDER(-1)

typedef struct _INTERFACE_ENTRY {
	const IID *			pIID;
	INTERFACE_FINDER	pfnFinder;
	DWORD				dwData;
} INTERFACE_ENTRY;

#define BASE_OFFSET(ClassName, BaseName) (DWORD(static_cast<BaseName *>(reinterpret_cast<ClassName *>(0x10000000))) - 0x10000000)

#define BEGIN_INTERFACE_TABLE(ClassName) \
	typedef ClassName _ITCls; \
	const INTERFACE_ENTRY * GetInterfaceTable() { \
		static const INTERFACE_ENTRY table[] = { \

#define IMPLEMENTS_INTERFACE(Itf) {&IID_##Itf, ENTRY_IS_OFFSET, BASE_OFFSET(_ITCls, Itf)},

#define IMPLEMENTS_INTERFACE_AS(req, Itf) {&IID_##req, ENTRY_IS_OFFSET, BASE_OFFSET(_ITCls, Itf)},

#define END_INTERFACE_TABLE {0, 0, 0} }; return table; };

HRESULT InterfaceTableQueryInterface(void * pThis, const INTERFACE_ENTRY * pTable, REFIID riid, void ** ppv);

struct AUTO_LONG {
	LONG		value;

	AUTO_LONG() {
		value = 0;
	}
};

#define IMPLEMENT_UNKNOWN(ClassName) \
	AUTO_LONG m_cRef; \
	STDMETHODIMP QueryInterface(REFIID riid, void ** ppv) { \
		return InterfaceTableQueryInterface(this, GetInterfaceTable(), riid, ppv); } \
	STDMETHODIMP_(ULONG) AddRef() { return InterlockedIncrement(&m_cRef.value); } \
	STDMETHODIMP_(ULONG) Release() { ULONG res = InterlockedDecrement(&m_cRef.value); \
		if( res == 0) delete this; \
		return res; }

#define IMPLEMENT_UNKNOWN_LIBRARY(ClassName, ref) \
	AUTO_LONG m_cRef; \
	STDMETHODIMP QueryInterface(REFIID riid, void ** ppv) { \
		return InterfaceTableQueryInterface(this, GetInterfaceTable(), riid, ppv); } \
	STDMETHODIMP_(ULONG) AddRef() { return InterlockedIncrement(&m_cRef.value); } \
	STDMETHODIMP_(ULONG) Release() { ULONG res = InterlockedDecrement(&m_cRef.value); \
		if( res == 0) { --(ref); delete this; } \
		return res; }

#define IMPLEMENT_UNKNOWN_NO_DELETE(ClassName) \
	STDMETHODIMP QueryInterface(REFIID riid, void ** ppv) { \
		return InterfaceTableQueryInterface(this, GetInterfaceTable(), riid, ppv); } \
	STDMETHODIMP_(ULONG) AddRef() { return 2; } \
	STDMETHODIMP_(ULONG) Release() { return 1; }

#define IMPLEMENT_DISPATCH_DUMMY(ClassName) \
	STDMETHODIMP GetTypeInfoCount(UINT *) { return E_NOTIMPL; } \
	STDMETHODIMP GetTypeInfo(UINT, LCID, ITypeInfo **) { return E_NOTIMPL; } \
	STDMETHODIMP GetIDsOfNames(REFIID, LPOLESTR *, UINT, LCID, DISPID *) { return E_NOTIMPL; } \
	STDMETHODIMP Invoke(DISPID, REFIID, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *) { return E_NOTIMPL; }

#endif //	__cplusplus

#endif //	__IUnknownMacro_Header