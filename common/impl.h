#pragma once

#include <atlcomcli.h>

namespace Implementation {

	template<class T, REFIID U = __uuidof(T)>
	class DispInterfaceImpl : public T {

		public :

		HRESULT CALLBACK QueryInterface(REFIID riid, void ** ppv) {

			if( riid == IID_IUnknown ||
				riid == IID_IDispatch ||
				riid == U ) {

				*ppv = reinterpret_cast<T *>(this);
				reinterpret_cast<T *>(this)->AddRef();
				return S_OK;
			}

			*ppv = nullptr;
			return E_NOINTERFACE;
		}

		virtual ULONG STDMETHODCALLTYPE AddRef() = 0;

		virtual ULONG STDMETHODCALLTYPE Release() = 0 ;

		HRESULT STDMETHODCALLTYPE GetTypeInfoCount(UINT *pctinfo) {
			*pctinfo = 0;
			return E_NOTIMPL;
		}

		HRESULT STDMETHODCALLTYPE GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo) {
			*ppTInfo = nullptr;
			return E_NOTIMPL;
		}

		HRESULT STDMETHODCALLTYPE GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId) {
			return E_NOTIMPL;
		}

		virtual HRESULT STDMETHODCALLTYPE Invoke(DISPID dispIdMember, REFIID riid, LCID lcid,
			WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult,
			EXCEPINFO *pExcepInfo, UINT *puArgErr) = 0;
	};

	template<class T, REFIID U = __uuidof(T)>
	class EventListener : 
		public DispInterfaceImpl<T, U> {

		IConnectionPoint	* m_pCP;
		DWORD				m_cookie;

		public:

		EventListener() : m_pCP{ nullptr }, m_cookie{ 0 } {

		}

		virtual ~EventListener() {
			Detach();
		}

		HRESULT Attach(CComQIPtr<IConnectionPointContainer> pCPC) {

			HRESULT hr;

			if( !pCPC )
				return E_INVALIDARG;

			hr = pCPC->FindConnectionPoint(U, &m_pCP);
			if( S_OK == hr && m_pCP ) {
				hr = m_pCP->Advise(reinterpret_cast<IUnknown *>(this), &m_cookie);
			}			
			
			auto pRaw = pCPC.Detach();
			if( pRaw )
				pRaw->Release();

			return hr;
		}

		HRESULT Detach() {

			if( !m_cookie )
				return S_FALSE;

			HRESULT hr;
			if( m_pCP ) {	
				hr = m_pCP->Unadvise(m_cookie);
				auto ret = m_pCP->Release();
				if( 0 == ret )
					m_pCP = nullptr;
				m_cookie = 0;
				
			}

			return hr;
		}

	};

	// Usefull for object NOT allocated on the free store
	template<class T>
	class ComObjNoRef : public T {

		public:

		ULONG STDMETHODCALLTYPE AddRef() {
			return 2;
		}

		ULONG CALLBACK Release() {
			return 1;
		}
	};

	template<class T>
	class ComObjRef : public T {

		ULONG m_ref;

		public:

		ComObjRef() : m_ref{ 1 } {

		}

		ULONG STDMETHODCALLTYPE AddRef() {
			return InterlockedIncrement(&m_ref);
		}

		ULONG CALLBACK Release() {
			
			ULONG ref = InterlockedDecrement(&m_ref);

			if( ref == 0 ) {
				delete this;
			}

			return ref;
		}
	};

	template<class T>
	class ClassFactoryImpl : public IClassFactory {

		public:

		HRESULT CALLBACK QueryInterface(REFIID riid, void ** ppv) {

			if( riid == IID_IUnknown ||
				riid == IID_IClassFactory || ) {

				*ppv = reinterpret_cast<T *>(this);
				reinterpret_cast<T *>(this)->AddRef();
				return S_OK;
			}

			*ppv = nullptr;
			return E_NOINTERFACE;
		}

		virtual ULONG STDMETHODCALLTYPE AddRef() = 0;

		virtual ULONG STDMETHODCALLTYPE Release() = 0;

		HRESULT CALLBACK CreateInstance(IUnknown * pUnkOuter, REFIID riid, void ** ppv) {

			*ppv = nullptr;

			if( !pUnkOuter )
				return CLASS_E_NOAGGREGATION;

			T * pt = new T;
			HRESULT hr = pt->QueryInterface(riid, ppv);
			if( S_OK == hr ) {
				InterlockedIncrement(m_pRef);
			}

			return hr;
		}

		HRESULT CALLBACK LockServer(BOOL fLock) {

			if( fLock ) {
				InterlockedIncrement(m_pRef);
			} else {
				InterlockedDecrement(m_pRef);
			}

			return S_OK;
		}

		
	};
}