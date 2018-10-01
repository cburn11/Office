#include <Windows.h>
#include <windowsx.h>

#include <stdlib.h>

#include <vector>
#include <algorithm>
#include <utility>

#include "ConnectableSource.h"

ConnectableSource::ConnectableSource() {

	m_connectionpoints.push_back( (IConnectionPoint *) new ConnectionPoint<IClipboardEvents>{ *this } );
	m_connectionpoints.push_back( (IConnectionPoint *) new ConnectionPoint<IApplicationEvents>{ *this } );

}

ConnectableSource::~ConnectableSource() {
	
	for( auto pCP : m_connectionpoints ) {
		pCP->Release();
		delete ( ConnectionPoint<IUnknown> *) pCP;
	}

	m_connectionpoints.clear();

	for( auto& pplugin : m_plugins ) {
		UnloadPlugin(pplugin->path);
	}
	
}

STDMETHODIMP ConnectableSource::EnumConnectionPoints(IEnumConnectionPoints ** ppEnum) {

	return this->QueryInterface(IID_PPV_ARGS(ppEnum));
}

STDMETHODIMP ConnectableSource::FindConnectionPoint(REFIID riid, IConnectionPoint ** ppCP) {
	HRESULT hr = E_NOINTERFACE;

	for( auto pCP : m_connectionpoints ) {
		IID iid;
		hr = pCP->GetConnectionInterface(&iid);
		if( InlineIsEqualGUID(riid, iid) ) {
			hr = pCP->QueryInterface(IID_IUnknown, (void **) ppCP);
			break;
		}
		hr = E_NOINTERFACE;
	}

	return hr;
}

STDMETHODIMP ConnectableSource::Next(ULONG cConnections, LPCONNECTIONPOINT * ppCP, ULONG * pcFetched) {

	if( cConnections < 1 ) return E_INVALIDARG;

	if( cConnections > 1 && !pcFetched ) return E_POINTER;

	if( m_enumindex + cConnections >= m_connectionpoints.size() )
		return E_INVALIDARG;

	for( UINT i = 0; i < cConnections; ++i ) {

		*ppCP = m_connectionpoints.at(i + m_enumindex);
		++ppCP;
	}

	m_enumindex += cConnections;

	return S_OK;
}

STDMETHODIMP ConnectableSource::Skip(ULONG cConnections) {
	
	if( m_enumindex + cConnections < m_connectionpoints.size() ) {
		m_enumindex += cConnections;
		return S_OK;
	}

	return S_FALSE;
}

STDMETHODIMP ConnectableSource::Reset(void) {

	m_enumindex = 0;

	return S_OK;
}

STDMETHODIMP ConnectableSource::Clone(IEnumConnectionPoints ** ppEnum) {

	return this->QueryInterface(IID_PPV_ARGS(ppEnum));;
}

HRESULT AutoInvoke(REFGUID _LIB, REFIID _IID, int type, VARIANT * pvResult, IDispatch * pDispIn,
	OLECHAR * szName, int cArgs, ...) {

	HRESULT			hr;

	DISPPARAMS		dispparamsAuto;
	EXCEPINFO		excepinfoAuto;
	UINT			uArgErrAuto;

	VARIANT			* pvAuto = NULL;

	DISPID			dispidSave = DISPID_PROPERTYPUT;
	DISPID			dispidAuto;

	va_list			marker = nullptr;

	LPTYPELIB		pTypeLib = nullptr;
	hr = LoadRegTypeLib(_LIB, 1, 0, 0, &pTypeLib);

	ITypeInfo * pTypeInfo = nullptr;
	hr = pTypeLib->GetTypeInfoOfGuid(_IID, &pTypeInfo);

	VARIANT		* pvar = NULL;
	int			i;

	if( cArgs > 0 ) {

		va_start(marker, cArgs);

		pvAuto = (VARIANT *) malloc(sizeof(VARIANT) * cArgs);

		if( !pvAuto ) {

			hr = E_OUTOFMEMORY;

			goto CLEANUP;

		}

	}

	for( i = 0; i < cArgs; ++i ) {

		pvar = va_arg(marker, VARIANT *);

		memcpy(( pvAuto + i ), pvar, sizeof(VARIANT));

	}

	hr = DispGetIDsOfNames(pTypeInfo, &szName, 1, &dispidAuto);

	if( FAILED(hr) ) {

		pvResult = NULL;

		goto CLEANUP;

	}

	dispparamsAuto.cArgs = cArgs;
	dispparamsAuto.cNamedArgs = 0;
	dispparamsAuto.rgvarg = pvAuto;
	dispparamsAuto.rgdispidNamedArgs = NULL;

	if( type & DISPATCH_PROPERTYPUT ) {

		dispparamsAuto.cNamedArgs = 1;
		dispparamsAuto.rgdispidNamedArgs = &dispidSave;

	}

	hr = pDispIn->Invoke(dispidAuto, IID_NULL, LOCALE_SYSTEM_DEFAULT, type,
		&dispparamsAuto, pvResult, &excepinfoAuto, &uArgErrAuto);

	va_end(marker);

CLEANUP:

	if( pvAuto )	free(pvAuto);
	if( pTypeInfo )	pTypeInfo->Release();
	if( pTypeLib )	pTypeLib->Release();	

	return hr;
}

void ConnectableSource::TriggerEvent(REFIID riid, int code, void * pv) {

	IConnectionPoint * pCP = nullptr;
	HRESULT hr = this->FindConnectionPoint(riid, &pCP);
	if( S_OK != hr )	return;


	CONNECTDATA cd{ 0 };
	IEnumConnections * pEC = nullptr;
	hr = pCP->QueryInterface(IID_PPV_ARGS(&pEC));
	pCP->Release();

	if( S_OK != hr ) return;

	while( S_OK == pEC->Next(1, &cd, nullptr) ) {

 		IClipboardEvents * pCE = nullptr;
		hr = cd.pUnk->QueryInterface(IID_PPV_ARGS(&pCE));

		if( S_OK == hr && pCE ) {

			switch( code ) {

			case EVENT_CODE_CLIPBOARDUPDATE:
				hr = pCE->ClipboardUpdate();
				break;

			case EVENT_CODE_NEWBITMAP:
				hr = pCE->NewBitmapOnClipboard();
				break;

			case EVENT_CODE_BITMAPSAVED:

				if( pv ) {
					auto bstrPath = SysAllocString((OLECHAR *) pv);
					if( bstrPath ) {
						hr = pCE->BitmapSavedToTempFile(bstrPath);
						SysFreeString(bstrPath);
					}
				}

				break;

			case EVENT_CODE_QUIT:
				hr = pCE->Quit();
				break;

			}

			pCE->Release();
		
		} else if( hr == E_NOINTERFACE ) {

			IDispatch * pdisp = nullptr;
			hr = cd.pUnk->QueryInterface(IID_PPV_ARGS(&pdisp));			

			if( pdisp && hr == S_OK ) {
				
				VARIANT varResult;

				switch( code ) {

				case EVENT_CODE_CLIPBOARDUPDATE: 

					hr = AutoInvoke(LIBID_ClipboardToWord, riid,
						DISPATCH_METHOD, &varResult, pdisp, L"ClipboardUpdate", 0);

					break; 

				case EVENT_CODE_NEWBITMAP:
					
					hr = AutoInvoke(LIBID_ClipboardToWord, riid,
						DISPATCH_METHOD, &varResult, pdisp, L"NewBitmapOnClipboard", 0);

					break;

				case EVENT_CODE_BITMAPSAVED:

					if( pv ) {

						auto bstrPath = SysAllocString((OLECHAR *) pv);

						if( bstrPath ) {
							VARIANT varPath; VariantInit(&varPath);	varPath.bstrVal = bstrPath; varPath.vt = VT_BSTR;
							hr = AutoInvoke(LIBID_ClipboardToWord, riid,
								DISPATCH_METHOD, &varResult, pdisp, L"BitmapSavedToTempFile", 1, &varPath);

							SysFreeString(bstrPath);
						}
					}

					break;

				case EVENT_CODE_QUIT:

					hr = AutoInvoke(LIBID_ClipboardToWord, riid,
						DISPATCH_METHOD, &varResult, pdisp, L"Quit", 0);

					break;
				}

				pdisp->Release();
			}

		}

		cd.pUnk->Release();
	}
	pEC->Reset();

}

bool ConnectableSource::LoadPlugin(const std::wstring& path, IPlugin ** ppdisp) {

	typedef HRESULT( __stdcall *DllGetClassObject )( REFCLSID rclsid, REFIID riid, void ** ppvoid );

	auto pLP = new _LoadedPlugin;
	if( !pLP ) return false;

	HMODULE hModule = LoadLibrary(path.c_str());
	if( !hModule ) { DWORD error = GetLastError(); return false; }

	auto get_class_obj = (DllGetClassObject) GetProcAddress(hModule, "DllGetClassObject");
	if( !get_class_obj ) return false;

	IClassFactory * pCF = nullptr;
	HRESULT hr = get_class_obj(CLSID_ClipboardEventsPlugin, IID_PPV_ARGS(&pCF));
	if( !pCF || S_OK != hr )	return false;

	IClipboardEvents * pCE = nullptr;
	IDispatch * pdisp = nullptr;
	IPlugin * pplugin = nullptr;
	hr = pCF->CreateInstance(NULL, IID_PPV_ARGS(&pCE));
	if( S_OK != hr )
		hr = pCF->CreateInstance(NULL, IID_PPV_ARGS(&pdisp));

	pCF->Release();
	if( (!pCE && !pdisp) || S_OK != hr ) return false;

	if( pCE ) {
		hr = pCE->QueryInterface(IID_PPV_ARGS(&pLP->pUnk));
		hr = pCE->QueryInterface(IID_PPV_ARGS(&pplugin));
		hr = pplugin->QueryInterface(IID_PPV_ARGS(ppdisp));
		pplugin->Release();
		pCE->Release();
	} else if( pdisp ) {
		hr = pdisp->QueryInterface(IID_PPV_ARGS(&pLP->pUnk));
		hr = pdisp->QueryInterface(IID_PPV_ARGS(&pplugin));
		hr = pplugin->QueryInterface(IID_PPV_ARGS(ppdisp));
		pplugin->Release();
		pdisp->Release();
	} else {
		//	This is an error condition. 
		//	Line 104: 'if( (!pCE && !pdisp) || S_OK != hr )'  
		//	should have caught this condition, and returned false.
	}

	IConnectionPoint * pCP = nullptr;
	hr = this->FindConnectionPoint(IID_IClipboardEvents, &pCP);
	hr = pCP->Advise(pLP->pUnk, &pLP->cookie);
	pCP->Release();
	if( S_OK != hr ) {
		pLP->pUnk->Release();
		return false;
	}

	pLP->path = path;
	pLP->hModule = hModule;

	m_plugins.push_back(pLP);

	return true;
}

bool ConnectableSource::UnloadPlugin(const std::wstring& path) {

	IConnectionPoint * pCP = nullptr;
	HRESULT hr = this->FindConnectionPoint(IID_IClipboardEvents, &pCP);
	//if( !pCP ) return false;

	auto pred = [&path, pCP](_LoadedPlugin * pPlugin)->bool {
		if( pPlugin->path == path ) {
			HRESULT hr;
			if( pCP)
				hr = pCP->Unadvise(pPlugin->cookie);
			//pPlugin->pUnk->Release();	//	_LoadedPlugin destructor should take care of this.	
			delete pPlugin;				//	Verify this is OK
			return true;
		} else {
			return false;
		}
	};
	m_plugins.erase(
		std::remove_if(std::begin(m_plugins), std::end(m_plugins), pred),
		std::end(m_plugins));
		
	return true;
}

void ConnectableSource::UpdatePluginList(HWND hwndList) {

	ListBox_ResetContent(hwndList);

	auto func = [hwndList](_LoadedPlugin * pLP) { ListBox_AddString(hwndList, pLP->path.c_str()); };
	std::for_each(std::begin(m_plugins), std::end(m_plugins), func);

}
template<typename T, REFIID U = __uuidof(T)>
ConnectionPoint<T, U>::~ConnectionPoint() {
	std::for_each(std::begin(m_connections), std::end(m_connections),
		[](ConnectedPair& p) { if( p.first )	p.first->Release();	}
	);
}

template<typename T, REFIID U = __uuidof( T )>
STDMETHODIMP ConnectionPoint<T, U>::GetConnectionInterface(IID * pIID) {

	if( pIID ) {
		*pIID = m_iid;
		return S_OK;
	}

	return E_POINTER;
}

template<typename T, REFIID U = __uuidof( T )>
STDMETHODIMP ConnectionPoint<T, U>::GetConnectionPointContainer(IConnectionPointContainer ** ppCPC) {

	return m_container.QueryInterface(IID_PPV_ARGS(ppCPC));
}

template<typename T, REFIID U = __uuidof( T )>
STDMETHODIMP ConnectionPoint<T, U>::Advise(LPUNKNOWN pUnkSnk, DWORD * pdwCookie) {

	*pdwCookie = 0;
	IUnknown * pSink = nullptr;

	if( FAILED(pUnkSnk->QueryInterface(m_iid, (void **) &pSink)) ) {
		
		if( FAILED(pUnkSnk->QueryInterface(IID_IDispatch, (void **) &pSink)) )
		
			return E_NOINTERFACE;
	}

	*pdwCookie = m_nextcookie++;

	m_connections.push_back(ConnectedPair{ pSink, *pdwCookie });

	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
STDMETHODIMP ConnectionPoint<T, U>::Unadvise(DWORD cookie) {

	if( cookie == 0 || cookie >= m_nextcookie )
		return E_INVALIDARG;

	auto pred = [cookie](ConnectedPair& p)->bool {
		if( p.second == cookie ) { 
			p.first->Release(); 
			return true; 
		}
		return false;
	};
	m_connections.erase(
		std::remove_if(std::begin(m_connections), std::end(m_connections), pred),
		std::end(m_connections)
	);

	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
STDMETHODIMP ConnectionPoint<T, U>::EnumConnections(IEnumConnections ** ppEnum) {
	if( !ppEnum )	return E_POINTER;

	*ppEnum = reinterpret_cast<IEnumConnections *>( this );

	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
HRESULT STDMETHODCALLTYPE ConnectionPoint<T, U>::Next(ULONG cConnections, LPCONNECTDATA rgcd, ULONG *pcFetched) {

	if( cConnections > 1 && !pcFetched )
		return E_POINTER;

	if( cConnections == 0 )
		return E_INVALIDARG;

	if( !rgcd )
		return E_POINTER;

	if( m_enumIndex + cConnections > m_connections.size() )
		return S_FALSE;

	for( unsigned int i = 0; i < cConnections; ++i ) {
		ConnectedPair& p = m_connections.at(i + m_enumIndex);
		rgcd->dwCookie = p.second;
		rgcd->pUnk = p.first;
		rgcd->pUnk->AddRef();
		++rgcd;
	}

	m_enumIndex += cConnections;

	if( pcFetched ) *pcFetched = cConnections;

	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
HRESULT STDMETHODCALLTYPE ConnectionPoint<T, U>::Skip(ULONG cConnections) {
	if( ( m_enumIndex + cConnections ) >= m_connections.size() )
		return E_INVALIDARG;

	m_enumIndex += cConnections;

	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
HRESULT STDMETHODCALLTYPE ConnectionPoint<T, U>::Reset() {
	m_enumIndex = 0;
	return S_OK;
}

template<typename T, REFIID U = __uuidof( T )>
HRESULT STDMETHODCALLTYPE ConnectionPoint<T, U>::Clone(
	IEnumConnections **ppEnum) {

	if( !ppEnum )
		return E_POINTER;

	*ppEnum = reinterpret_cast<IEnumConnections *>( this );

	return S_OK;
}

extern "C" void * CreateConnectableSource() {

	return new ConnectableSource{};
}

extern "C" void TriggerEvent(void * pCS, const GUID * riid, int code, void * pv) {

	if( !pCS )	return;

	auto l_pCS = (ConnectableSource *) pCS;

	l_pCS->TriggerEvent(*riid, code, pv);
}

extern "C" void DestroyConnectableSource(void * pCS) {
	
	if( !pCS )	return;

	auto l_pCS = (ConnectableSource *) pCS;
	
	delete l_pCS;

}

extern "C" BOOL LoadPlugin(void * pCS, const WCHAR * szPath, void ** ppvoid) {

	auto l_pCS = (ConnectableSource *) pCS;

	std::wstring path{ szPath };
	if( l_pCS->LoadPlugin(path, (IPlugin **) ppvoid) )
		return TRUE;

	return FALSE;
}

extern "C" BOOL UnloadPlugin(void * pCS, const WCHAR * szPath) {

	auto l_pCS = (ConnectableSource *) pCS;

	std::wstring path{ szPath };
	if( l_pCS->UnloadPlugin(path) )
		return TRUE;

	return FALSE;

	return TRUE;
}