#pragma once

#include <OCIdl.h>

#include "ClipboardToWord_h.h"

#define EVENT_CODE_CLIPBOARDUPDATE	1000
#define EVENT_CODE_NEWBITMAP		1001
#define EVENT_CODE_BITMAPSAVED		1002
#define EVENT_CODE_QUIT				1003

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

void * CreateConnectableSource();

void TriggerEvent(void * pCS, const GUID * riid, int code, void * pv);

void DestroyConnectableSource(void * pCS);

BOOL LoadPlugin(void * pCS, const WCHAR * szPath, void ** ppvoid);

BOOL UnloadPlugin(void * pCS, const WCHAR * szPath);

#ifdef __cplusplus
}

#include <vector>

#include "IUnknownMacros.h"

class ConnectableSource;

template<typename T, REFIID U = __uuidof(T)>
class ConnectionPoint : public IConnectionPoint, public IEnumConnections {

	typedef std::pair<IUnknown *, DWORD> ConnectedPair;
	std::vector<ConnectedPair>	m_connections;

	ConnectableSource&		m_container;
	IID						m_iid = U;

	DWORD					m_nextcookie = 1000;

	ULONG					m_enumIndex = 0;

public:

	ConnectionPoint(ConnectableSource& container) : m_container{ container } {

	}

	IMPLEMENT_UNKNOWN_NO_DELETE(ConnectionPoint)

	BEGIN_INTERFACE_TABLE(ConnectionPoint)
		IMPLEMENTS_INTERFACE(IConnectionPoint)
		IMPLEMENTS_INTERFACE(IEnumConnections)
	END_INTERFACE_TABLE

	~ConnectionPoint();

	STDMETHODIMP GetConnectionInterface(IID * pIID);

	STDMETHODIMP GetConnectionPointContainer(IConnectionPointContainer ** ppCPC);

	STDMETHODIMP Advise(LPUNKNOWN pUnkSnk, DWORD * pdwCookie);

	STDMETHODIMP Unadvise(DWORD cookie);

	STDMETHODIMP EnumConnections(IEnumConnections ** ppEnum);

	HRESULT STDMETHODCALLTYPE Next(ULONG cConnections, LPCONNECTDATA rgcd, ULONG *pcFetched);

	HRESULT STDMETHODCALLTYPE Skip(ULONG cConnections);

	HRESULT STDMETHODCALLTYPE Reset();

	HRESULT STDMETHODCALLTYPE Clone(IEnumConnections **ppEnum);

};

struct _LoadedPlugin {
	std::wstring	path;
	HMODULE			hModule = NULL;
	IUnknown *		pUnk = nullptr;
	DWORD			cookie = 0;

	~_LoadedPlugin() {
		if( pUnk )		pUnk->Release();
		if( hModule )	FreeLibrary(hModule);	//	Verify this is OK.
												//	Global references in library "should" be 0 at this point.
	}
};

class ConnectableSource : public IConnectionPointContainer, public IEnumConnectionPoints {

	std::vector<IConnectionPoint *> m_connectionpoints;

	std::vector<_LoadedPlugin *> m_plugins;

	ULONG m_enumindex = 0;

public:

	ConnectableSource();

	~ConnectableSource();

	IMPLEMENT_UNKNOWN(ConnectableSource)

	BEGIN_INTERFACE_TABLE(ConnectableSource)
		IMPLEMENTS_INTERFACE(IConnectionPointContainer)
		IMPLEMENTS_INTERFACE(IEnumConnectionPoints)
	END_INTERFACE_TABLE

	STDMETHODIMP EnumConnectionPoints(IEnumConnectionPoints **);

	STDMETHODIMP FindConnectionPoint(REFIID riid, IConnectionPoint **);

	STDMETHODIMP Next(ULONG cConnections, LPCONNECTIONPOINT * ppCP, ULONG * pcFetched);

	STDMETHODIMP Skip(ULONG cConnections);

	STDMETHODIMP Reset(void);

	STDMETHODIMP Clone(IEnumConnectionPoints ** ppEnum);

	void TriggerEvent(REFIID riid, int event_code, void * pv);

	bool LoadPlugin(const std::wstring& path, IPlugin ** pdisp);

	bool UnloadPlugin(const std::wstring& path);

	void UpdatePluginList(HWND hwndList);

};

#endif //__cplusplus