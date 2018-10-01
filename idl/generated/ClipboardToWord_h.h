

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for src\ClipboardToWord.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ClipboardToWord_h_h__
#define __ClipboardToWord_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPlugin_FWD_DEFINED__
#define __IPlugin_FWD_DEFINED__
typedef interface IPlugin IPlugin;

#endif 	/* __IPlugin_FWD_DEFINED__ */


#ifndef __IApplication_FWD_DEFINED__
#define __IApplication_FWD_DEFINED__
typedef interface IApplication IApplication;

#endif 	/* __IApplication_FWD_DEFINED__ */


#ifndef __IClipboardEvents_FWD_DEFINED__
#define __IClipboardEvents_FWD_DEFINED__
typedef interface IClipboardEvents IClipboardEvents;

#endif 	/* __IClipboardEvents_FWD_DEFINED__ */


#ifndef __IApplicationEvents_FWD_DEFINED__
#define __IApplicationEvents_FWD_DEFINED__
typedef interface IApplicationEvents IApplicationEvents;

#endif 	/* __IApplicationEvents_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif 	/* __Application_FWD_DEFINED__ */


#ifndef __ClipboardEvents_FWD_DEFINED__
#define __ClipboardEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ClipboardEvents ClipboardEvents;
#else
typedef struct ClipboardEvents ClipboardEvents;
#endif /* __cplusplus */

#endif 	/* __ClipboardEvents_FWD_DEFINED__ */


#ifndef __ClipboardEventsPlugin_FWD_DEFINED__
#define __ClipboardEventsPlugin_FWD_DEFINED__

#ifdef __cplusplus
typedef class ClipboardEventsPlugin ClipboardEventsPlugin;
#else
typedef struct ClipboardEventsPlugin ClipboardEventsPlugin;
#endif /* __cplusplus */

#endif 	/* __ClipboardEventsPlugin_FWD_DEFINED__ */


#ifndef __ApplicationEvents_FWD_DEFINED__
#define __ApplicationEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ApplicationEvents ApplicationEvents;
#else
typedef struct ApplicationEvents ApplicationEvents;
#endif /* __cplusplus */

#endif 	/* __ApplicationEvents_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __ClipboardToWord_LIBRARY_DEFINED__
#define __ClipboardToWord_LIBRARY_DEFINED__

/* library ClipboardToWord */
/* [version][uuid] */ 



EXTERN_C const IID LIBID_ClipboardToWord;

#ifndef __IPlugin_INTERFACE_DEFINED__
#define __IPlugin_INTERFACE_DEFINED__

/* interface IPlugin */
/* [object][oleautomation][nonextensible][dual][uuid] */ 


EXTERN_C const IID IID_IPlugin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ff80ab35-93ad-4441-a337-8cd2748ad522")
    IPlugin : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR propertyname,
            /* [retval][out] */ BSTR *propertyvalue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR propertyname,
            /* [in] */ BSTR propertyvalue,
            /* [retval][out] */ VARIANT_BOOL *pres) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPluginVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlugin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlugin * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlugin * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPlugin * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPlugin * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPlugin * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPlugin * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IPlugin * This,
            /* [in] */ BSTR propertyname,
            /* [retval][out] */ BSTR *propertyvalue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IPlugin * This,
            /* [in] */ BSTR propertyname,
            /* [in] */ BSTR propertyvalue,
            /* [retval][out] */ VARIANT_BOOL *pres);
        
        END_INTERFACE
    } IPluginVtbl;

    interface IPlugin
    {
        CONST_VTBL struct IPluginVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlugin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlugin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlugin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlugin_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPlugin_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPlugin_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPlugin_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPlugin_GetProperty(This,propertyname,propertyvalue)	\
    ( (This)->lpVtbl -> GetProperty(This,propertyname,propertyvalue) ) 

#define IPlugin_SetProperty(This,propertyname,propertyvalue,pres)	\
    ( (This)->lpVtbl -> SetProperty(This,propertyname,propertyvalue,pres) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlugin_INTERFACE_DEFINED__ */


#ifndef __IApplication_INTERFACE_DEFINED__
#define __IApplication_INTERFACE_DEFINED__

/* interface IApplication */
/* [object][oleautomation][nonextensible][dual][uuid] */ 


EXTERN_C const IID IID_IApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f31714c5-e3bf-42e7-ae74-e44c9796d735")
    IApplication : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pvis) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL vis) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Monitor( 
            /* [retval][out] */ VARIANT_BOOL *pvis) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Monitor( 
            /* [in] */ VARIANT_BOOL vis) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadPlugin( 
            /* [in] */ BSTR path,
            /* [retval][out] */ IPlugin **ppdispPlugin) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnloadPlugin( 
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *pres) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplication * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            IApplication * This,
            /* [retval][out] */ VARIANT_BOOL *pvis);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            IApplication * This,
            /* [in] */ VARIANT_BOOL vis);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Monitor )( 
            IApplication * This,
            /* [retval][out] */ VARIANT_BOOL *pvis);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Monitor )( 
            IApplication * This,
            /* [in] */ VARIANT_BOOL vis);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Quit )( 
            IApplication * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadPlugin )( 
            IApplication * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ IPlugin **ppdispPlugin);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnloadPlugin )( 
            IApplication * This,
            /* [in] */ BSTR path,
            /* [retval][out] */ VARIANT_BOOL *pres);
        
        END_INTERFACE
    } IApplicationVtbl;

    interface IApplication
    {
        CONST_VTBL struct IApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApplication_get_Visible(This,pvis)	\
    ( (This)->lpVtbl -> get_Visible(This,pvis) ) 

#define IApplication_put_Visible(This,vis)	\
    ( (This)->lpVtbl -> put_Visible(This,vis) ) 

#define IApplication_get_Monitor(This,pvis)	\
    ( (This)->lpVtbl -> get_Monitor(This,pvis) ) 

#define IApplication_put_Monitor(This,vis)	\
    ( (This)->lpVtbl -> put_Monitor(This,vis) ) 

#define IApplication_Quit(This)	\
    ( (This)->lpVtbl -> Quit(This) ) 

#define IApplication_LoadPlugin(This,path,ppdispPlugin)	\
    ( (This)->lpVtbl -> LoadPlugin(This,path,ppdispPlugin) ) 

#define IApplication_UnloadPlugin(This,path,pres)	\
    ( (This)->lpVtbl -> UnloadPlugin(This,path,pres) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplication_INTERFACE_DEFINED__ */


#ifndef __IClipboardEvents_INTERFACE_DEFINED__
#define __IClipboardEvents_INTERFACE_DEFINED__

/* interface IClipboardEvents */
/* [object][oleautomation][nonextensible][dual][uuid] */ 


EXTERN_C const IID IID_IClipboardEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5ded517-3d32-41e8-b13a-f247209c4a9d")
    IClipboardEvents : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClipboardUpdate( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE NewBitmapOnClipboard( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE BitmapSavedToTempFile( 
            /* [in] */ BSTR filepath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Quit( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IClipboardEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IClipboardEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IClipboardEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IClipboardEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IClipboardEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IClipboardEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IClipboardEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IClipboardEvents * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClipboardUpdate )( 
            IClipboardEvents * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *NewBitmapOnClipboard )( 
            IClipboardEvents * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *BitmapSavedToTempFile )( 
            IClipboardEvents * This,
            /* [in] */ BSTR filepath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Quit )( 
            IClipboardEvents * This);
        
        END_INTERFACE
    } IClipboardEventsVtbl;

    interface IClipboardEvents
    {
        CONST_VTBL struct IClipboardEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClipboardEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IClipboardEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IClipboardEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IClipboardEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IClipboardEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IClipboardEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IClipboardEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IClipboardEvents_ClipboardUpdate(This)	\
    ( (This)->lpVtbl -> ClipboardUpdate(This) ) 

#define IClipboardEvents_NewBitmapOnClipboard(This)	\
    ( (This)->lpVtbl -> NewBitmapOnClipboard(This) ) 

#define IClipboardEvents_BitmapSavedToTempFile(This,filepath)	\
    ( (This)->lpVtbl -> BitmapSavedToTempFile(This,filepath) ) 

#define IClipboardEvents_Quit(This)	\
    ( (This)->lpVtbl -> Quit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IClipboardEvents_INTERFACE_DEFINED__ */


#ifndef __IApplicationEvents_INTERFACE_DEFINED__
#define __IApplicationEvents_INTERFACE_DEFINED__

/* interface IApplicationEvents */
/* [object][oleautomation][nonextensible][dual][uuid] */ 


EXTERN_C const IID IID_IApplicationEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7f2a0ab1-33f0-4429-a996-b5578395defd")
    IApplicationEvents : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OnQuit( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IApplicationEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IApplicationEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IApplicationEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IApplicationEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IApplicationEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IApplicationEvents * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OnQuit )( 
            IApplicationEvents * This);
        
        END_INTERFACE
    } IApplicationEventsVtbl;

    interface IApplicationEvents
    {
        CONST_VTBL struct IApplicationEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IApplicationEvents_OnQuit(This)	\
    ( (This)->lpVtbl -> OnQuit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationEvents_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Application;

#ifdef __cplusplus

class DECLSPEC_UUID("2867c8f1-7a59-445c-b2d2-77ef58a3ac8d")
Application;
#endif

EXTERN_C const CLSID CLSID_ClipboardEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("bb60afb3-15b7-4afd-9f8c-89d0ba7a6d88")
ClipboardEvents;
#endif

EXTERN_C const CLSID CLSID_ClipboardEventsPlugin;

#ifdef __cplusplus

class DECLSPEC_UUID("537c3d54-07b1-426d-8c65-ca2b054a41a7")
ClipboardEventsPlugin;
#endif

EXTERN_C const CLSID CLSID_ApplicationEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("c4af1965-ba78-4bac-a5a0-69f8b5347d31")
ApplicationEvents;
#endif
#endif /* __ClipboardToWord_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


