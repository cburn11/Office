

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Fri Feb 08 21:29:38 2013
 */
/* Compiler settings for MsAddnDr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __MsAddnDr_h__
#define __MsAddnDr_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAddinDesigner_FWD_DEFINED__
#define __IAddinDesigner_FWD_DEFINED__
typedef interface IAddinDesigner IAddinDesigner;

#endif 	/* __IAddinDesigner_FWD_DEFINED__ */


#ifndef __IAddinInstance_FWD_DEFINED__
#define __IAddinInstance_FWD_DEFINED__
typedef interface IAddinInstance IAddinInstance;

#endif 	/* __IAddinInstance_FWD_DEFINED__ */


#ifndef ___IDTExtensibility2_FWD_DEFINED__
#define ___IDTExtensibility2_FWD_DEFINED__
typedef interface _IDTExtensibility2 _IDTExtensibility2;

#endif 	/* ___IDTExtensibility2_FWD_DEFINED__ */


#ifndef __AddinDesigner_FWD_DEFINED__
#define __AddinDesigner_FWD_DEFINED__

#ifdef __cplusplus
typedef class AddinDesigner AddinDesigner;
#else
typedef struct AddinDesigner AddinDesigner;
#endif /* __cplusplus */

#endif 	/* __AddinDesigner_FWD_DEFINED__ */


#ifndef __AddinInstance_FWD_DEFINED__
#define __AddinInstance_FWD_DEFINED__

#ifdef __cplusplus
typedef class AddinInstance AddinInstance;
#else
typedef struct AddinInstance AddinInstance;
#endif /* __cplusplus */

#endif 	/* __AddinInstance_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __AddInDesignerObjects_LIBRARY_DEFINED__
#define __AddInDesignerObjects_LIBRARY_DEFINED__

/* library AddInDesignerObjects */
/* [helpstring][version][uuid] */ 




typedef /* [public][public][uuid] */  DECLSPEC_UUID("289E9AF1-4973-11D1-AE81-00A0C90F26F4") 
enum __MIDL___MIDL_itf_MsAddnDr_0000_0000_0001
    {
        ext_cm_AfterStartup	= 0,
        ext_cm_Startup	= 1,
        ext_cm_External	= 2,
        ext_cm_CommandLine	= 3
    } 	ext_ConnectMode;

typedef /* [public][public][uuid] */  DECLSPEC_UUID("289E9AF2-4973-11D1-AE81-00A0C90F26F4") 
enum __MIDL___MIDL_itf_MsAddnDr_0000_0000_0002
    {
        ext_dm_HostShutdown	= 0,
        ext_dm_UserClosed	= 1
    } 	ext_DisconnectMode;

typedef /* [public] */ _IDTExtensibility2 IDTExtensibility2;


EXTERN_C const IID LIBID_AddInDesignerObjects;

#ifndef __IAddinDesigner_INTERFACE_DEFINED__
#define __IAddinDesigner_INTERFACE_DEFINED__

/* interface IAddinDesigner */
/* [object][oleautomation][dual][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IAddinDesigner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC0714F3-3D04-11D1-AE7D-00A0C90F26F4")
    IAddinDesigner : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAddinDesignerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAddinDesigner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAddinDesigner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAddinDesigner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAddinDesigner * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAddinDesigner * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAddinDesigner * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAddinDesigner * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IAddinDesignerVtbl;

    interface IAddinDesigner
    {
        CONST_VTBL struct IAddinDesignerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAddinDesigner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAddinDesigner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAddinDesigner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAddinDesigner_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAddinDesigner_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAddinDesigner_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAddinDesigner_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAddinDesigner_INTERFACE_DEFINED__ */


#ifndef __IAddinInstance_INTERFACE_DEFINED__
#define __IAddinInstance_INTERFACE_DEFINED__

/* interface IAddinInstance */
/* [object][oleautomation][dual][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IAddinInstance;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC0714F4-3D04-11D1-AE7D-00A0C90F26F4")
    IAddinInstance : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IAddinInstanceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAddinInstance * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAddinInstance * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAddinInstance * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IAddinInstance * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IAddinInstance * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IAddinInstance * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IAddinInstance * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IAddinInstanceVtbl;

    interface IAddinInstance
    {
        CONST_VTBL struct IAddinInstanceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAddinInstance_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAddinInstance_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAddinInstance_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAddinInstance_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IAddinInstance_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IAddinInstance_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IAddinInstance_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAddinInstance_INTERFACE_DEFINED__ */


#ifndef ___IDTExtensibility2_INTERFACE_DEFINED__
#define ___IDTExtensibility2_INTERFACE_DEFINED__

/* interface _IDTExtensibility2 */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__IDTExtensibility2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B65AD801-ABAF-11D0-BB8B-00A0C90F2744")
    _IDTExtensibility2 : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnConnection( 
            /* [in] */ IDispatch *Application,
            /* [in] */ ext_ConnectMode ConnectMode,
            /* [in] */ IDispatch *AddInInst,
            /* [in] */ SAFEARRAY * *custom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnDisconnection( 
            /* [in] */ ext_DisconnectMode RemoveMode,
            /* [in] */ SAFEARRAY * *custom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnAddInsUpdate( 
            /* [in] */ SAFEARRAY * *custom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnStartupComplete( 
            /* [in] */ SAFEARRAY * *custom) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnBeginShutdown( 
            /* [in] */ SAFEARRAY * *custom) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _IDTExtensibility2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDTExtensibility2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDTExtensibility2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDTExtensibility2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDTExtensibility2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDTExtensibility2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDTExtensibility2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDTExtensibility2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnConnection )( 
            _IDTExtensibility2 * This,
            /* [in] */ IDispatch *Application,
            /* [in] */ ext_ConnectMode ConnectMode,
            /* [in] */ IDispatch *AddInInst,
            /* [in] */ SAFEARRAY * *custom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnDisconnection )( 
            _IDTExtensibility2 * This,
            /* [in] */ ext_DisconnectMode RemoveMode,
            /* [in] */ SAFEARRAY * *custom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnAddInsUpdate )( 
            _IDTExtensibility2 * This,
            /* [in] */ SAFEARRAY * *custom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnStartupComplete )( 
            _IDTExtensibility2 * This,
            /* [in] */ SAFEARRAY * *custom);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnBeginShutdown )( 
            _IDTExtensibility2 * This,
            /* [in] */ SAFEARRAY * *custom);
        
        END_INTERFACE
    } _IDTExtensibility2Vtbl;

    interface _IDTExtensibility2
    {
        CONST_VTBL struct _IDTExtensibility2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDTExtensibility2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IDTExtensibility2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IDTExtensibility2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IDTExtensibility2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IDTExtensibility2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IDTExtensibility2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IDTExtensibility2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _IDTExtensibility2_OnConnection(This,Application,ConnectMode,AddInInst,custom)	\
    ( (This)->lpVtbl -> OnConnection(This,Application,ConnectMode,AddInInst,custom) ) 

#define _IDTExtensibility2_OnDisconnection(This,RemoveMode,custom)	\
    ( (This)->lpVtbl -> OnDisconnection(This,RemoveMode,custom) ) 

#define _IDTExtensibility2_OnAddInsUpdate(This,custom)	\
    ( (This)->lpVtbl -> OnAddInsUpdate(This,custom) ) 

#define _IDTExtensibility2_OnStartupComplete(This,custom)	\
    ( (This)->lpVtbl -> OnStartupComplete(This,custom) ) 

#define _IDTExtensibility2_OnBeginShutdown(This,custom)	\
    ( (This)->lpVtbl -> OnBeginShutdown(This,custom) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___IDTExtensibility2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_AddinDesigner;

#ifdef __cplusplus

class DECLSPEC_UUID("AC0714F6-3D04-11D1-AE7D-00A0C90F26F4")
AddinDesigner;
#endif

EXTERN_C const CLSID CLSID_AddinInstance;

#ifdef __cplusplus

class DECLSPEC_UUID("AC0714F7-3D04-11D1-AE7D-00A0C90F26F4")
AddinInstance;
#endif
#endif /* __AddInDesignerObjects_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


