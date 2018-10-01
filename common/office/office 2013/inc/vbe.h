

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Sep 15 22:30:01 2013
 */
/* Compiler settings for vbe.idl:
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


#ifndef __vbe_h__
#define __vbe_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __VBEApplication_FWD_DEFINED__
#define __VBEApplication_FWD_DEFINED__
typedef interface VBEApplication VBEApplication;

#endif 	/* __VBEApplication_FWD_DEFINED__ */


#ifndef __VBE_FWD_DEFINED__
#define __VBE_FWD_DEFINED__
typedef interface VBE VBE;

#endif 	/* __VBE_FWD_DEFINED__ */


#ifndef __Window_FWD_DEFINED__
#define __Window_FWD_DEFINED__
typedef interface Window Window;

#endif 	/* __Window_FWD_DEFINED__ */


#ifndef ___VBEWindows_old_FWD_DEFINED__
#define ___VBEWindows_old_FWD_DEFINED__
typedef interface _VBEWindows_old _VBEWindows_old;

#endif 	/* ___VBEWindows_old_FWD_DEFINED__ */


#ifndef ___VBEWindows_FWD_DEFINED__
#define ___VBEWindows_FWD_DEFINED__
typedef interface _VBEWindows _VBEWindows;

#endif 	/* ___VBEWindows_FWD_DEFINED__ */


#ifndef ___LinkedVBEWindows_FWD_DEFINED__
#define ___LinkedVBEWindows_FWD_DEFINED__
typedef interface _LinkedVBEWindows _LinkedVBEWindows;

#endif 	/* ___LinkedVBEWindows_FWD_DEFINED__ */


#ifndef __Events_FWD_DEFINED__
#define __Events_FWD_DEFINED__
typedef interface Events Events;

#endif 	/* __Events_FWD_DEFINED__ */


#ifndef ___VBProjectsEvents_FWD_DEFINED__
#define ___VBProjectsEvents_FWD_DEFINED__
typedef interface _VBProjectsEvents _VBProjectsEvents;

#endif 	/* ___VBProjectsEvents_FWD_DEFINED__ */


#ifndef ___dispVBProjectsEvents_FWD_DEFINED__
#define ___dispVBProjectsEvents_FWD_DEFINED__
typedef interface _dispVBProjectsEvents _dispVBProjectsEvents;

#endif 	/* ___dispVBProjectsEvents_FWD_DEFINED__ */


#ifndef ___VBComponentsEvents_FWD_DEFINED__
#define ___VBComponentsEvents_FWD_DEFINED__
typedef interface _VBComponentsEvents _VBComponentsEvents;

#endif 	/* ___VBComponentsEvents_FWD_DEFINED__ */


#ifndef ___dispVBComponentsEvents_FWD_DEFINED__
#define ___dispVBComponentsEvents_FWD_DEFINED__
typedef interface _dispVBComponentsEvents _dispVBComponentsEvents;

#endif 	/* ___dispVBComponentsEvents_FWD_DEFINED__ */


#ifndef ___ReferencesEvents_FWD_DEFINED__
#define ___ReferencesEvents_FWD_DEFINED__
typedef interface _ReferencesEvents _ReferencesEvents;

#endif 	/* ___ReferencesEvents_FWD_DEFINED__ */


#ifndef ___dispReferencesEvents_FWD_DEFINED__
#define ___dispReferencesEvents_FWD_DEFINED__
typedef interface _dispReferencesEvents _dispReferencesEvents;

#endif 	/* ___dispReferencesEvents_FWD_DEFINED__ */


#ifndef ___CommandBarControlEvents_FWD_DEFINED__
#define ___CommandBarControlEvents_FWD_DEFINED__
typedef interface _CommandBarControlEvents _CommandBarControlEvents;

#endif 	/* ___CommandBarControlEvents_FWD_DEFINED__ */


#ifndef ___dispCommandBarControlEvents_FWD_DEFINED__
#define ___dispCommandBarControlEvents_FWD_DEFINED__
typedef interface _dispCommandBarControlEvents _dispCommandBarControlEvents;

#endif 	/* ___dispCommandBarControlEvents_FWD_DEFINED__ */


#ifndef ___ProjectTemplate_FWD_DEFINED__
#define ___ProjectTemplate_FWD_DEFINED__
typedef interface _ProjectTemplate _ProjectTemplate;

#endif 	/* ___ProjectTemplate_FWD_DEFINED__ */


#ifndef ___VBProject_Old_FWD_DEFINED__
#define ___VBProject_Old_FWD_DEFINED__
typedef interface _VBProject_Old _VBProject_Old;

#endif 	/* ___VBProject_Old_FWD_DEFINED__ */


#ifndef ___VBProject_FWD_DEFINED__
#define ___VBProject_FWD_DEFINED__
typedef interface _VBProject _VBProject;

#endif 	/* ___VBProject_FWD_DEFINED__ */


#ifndef ___VBProjects_Old_FWD_DEFINED__
#define ___VBProjects_Old_FWD_DEFINED__
typedef interface _VBProjects_Old _VBProjects_Old;

#endif 	/* ___VBProjects_Old_FWD_DEFINED__ */


#ifndef ___VBProjects_FWD_DEFINED__
#define ___VBProjects_FWD_DEFINED__
typedef interface _VBProjects _VBProjects;

#endif 	/* ___VBProjects_FWD_DEFINED__ */


#ifndef __SelectedComponents_FWD_DEFINED__
#define __SelectedComponents_FWD_DEFINED__
typedef interface SelectedComponents SelectedComponents;

#endif 	/* __SelectedComponents_FWD_DEFINED__ */


#ifndef ___Components_FWD_DEFINED__
#define ___Components_FWD_DEFINED__
typedef interface _Components _Components;

#endif 	/* ___Components_FWD_DEFINED__ */


#ifndef ___VBComponents_Old_FWD_DEFINED__
#define ___VBComponents_Old_FWD_DEFINED__
typedef interface _VBComponents_Old _VBComponents_Old;

#endif 	/* ___VBComponents_Old_FWD_DEFINED__ */


#ifndef ___VBComponents_FWD_DEFINED__
#define ___VBComponents_FWD_DEFINED__
typedef interface _VBComponents _VBComponents;

#endif 	/* ___VBComponents_FWD_DEFINED__ */


#ifndef ___Component_FWD_DEFINED__
#define ___Component_FWD_DEFINED__
typedef interface _Component _Component;

#endif 	/* ___Component_FWD_DEFINED__ */


#ifndef ___VBComponent_Old_FWD_DEFINED__
#define ___VBComponent_Old_FWD_DEFINED__
typedef interface _VBComponent_Old _VBComponent_Old;

#endif 	/* ___VBComponent_Old_FWD_DEFINED__ */


#ifndef ___VBComponent_FWD_DEFINED__
#define ___VBComponent_FWD_DEFINED__
typedef interface _VBComponent _VBComponent;

#endif 	/* ___VBComponent_FWD_DEFINED__ */


#ifndef __Property_FWD_DEFINED__
#define __Property_FWD_DEFINED__
typedef interface Property Property;

#endif 	/* __Property_FWD_DEFINED__ */


#ifndef ___Properties_FWD_DEFINED__
#define ___Properties_FWD_DEFINED__
typedef interface _Properties _Properties;

#endif 	/* ___Properties_FWD_DEFINED__ */


#ifndef ___AddIns_FWD_DEFINED__
#define ___AddIns_FWD_DEFINED__
typedef interface _AddIns _AddIns;

#endif 	/* ___AddIns_FWD_DEFINED__ */


#ifndef __AddIn_FWD_DEFINED__
#define __AddIn_FWD_DEFINED__
typedef interface AddIn AddIn;

#endif 	/* __AddIn_FWD_DEFINED__ */


#ifndef ___CodeModule_FWD_DEFINED__
#define ___CodeModule_FWD_DEFINED__
typedef interface _CodeModule _CodeModule;

#endif 	/* ___CodeModule_FWD_DEFINED__ */


#ifndef ___CodePanes_FWD_DEFINED__
#define ___CodePanes_FWD_DEFINED__
typedef interface _CodePanes _CodePanes;

#endif 	/* ___CodePanes_FWD_DEFINED__ */


#ifndef ___CodePane_FWD_DEFINED__
#define ___CodePane_FWD_DEFINED__
typedef interface _CodePane _CodePane;

#endif 	/* ___CodePane_FWD_DEFINED__ */


#ifndef ___References_FWD_DEFINED__
#define ___References_FWD_DEFINED__
typedef interface _References _References;

#endif 	/* ___References_FWD_DEFINED__ */


#ifndef __Reference_FWD_DEFINED__
#define __Reference_FWD_DEFINED__
typedef interface Reference Reference;

#endif 	/* __Reference_FWD_DEFINED__ */


#ifndef ___dispReferences_Events_FWD_DEFINED__
#define ___dispReferences_Events_FWD_DEFINED__
typedef interface _dispReferences_Events _dispReferences_Events;

#endif 	/* ___dispReferences_Events_FWD_DEFINED__ */


#ifndef __VBEWindows_FWD_DEFINED__
#define __VBEWindows_FWD_DEFINED__

#ifdef __cplusplus
typedef class VBEWindows VBEWindows;
#else
typedef struct VBEWindows VBEWindows;
#endif /* __cplusplus */

#endif 	/* __VBEWindows_FWD_DEFINED__ */


#ifndef __LinkedVBEWindows_FWD_DEFINED__
#define __LinkedVBEWindows_FWD_DEFINED__

#ifdef __cplusplus
typedef class LinkedVBEWindows LinkedVBEWindows;
#else
typedef struct LinkedVBEWindows LinkedVBEWindows;
#endif /* __cplusplus */

#endif 	/* __LinkedVBEWindows_FWD_DEFINED__ */


#ifndef __ReferencesEvents_FWD_DEFINED__
#define __ReferencesEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class ReferencesEvents ReferencesEvents;
#else
typedef struct ReferencesEvents ReferencesEvents;
#endif /* __cplusplus */

#endif 	/* __ReferencesEvents_FWD_DEFINED__ */


#ifndef __CommandBarEvents_FWD_DEFINED__
#define __CommandBarEvents_FWD_DEFINED__

#ifdef __cplusplus
typedef class CommandBarEvents CommandBarEvents;
#else
typedef struct CommandBarEvents CommandBarEvents;
#endif /* __cplusplus */

#endif 	/* __CommandBarEvents_FWD_DEFINED__ */


#ifndef __ProjectTemplate_FWD_DEFINED__
#define __ProjectTemplate_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProjectTemplate ProjectTemplate;
#else
typedef struct ProjectTemplate ProjectTemplate;
#endif /* __cplusplus */

#endif 	/* __ProjectTemplate_FWD_DEFINED__ */


#ifndef __VBProject_FWD_DEFINED__
#define __VBProject_FWD_DEFINED__

#ifdef __cplusplus
typedef class VBProject VBProject;
#else
typedef struct VBProject VBProject;
#endif /* __cplusplus */

#endif 	/* __VBProject_FWD_DEFINED__ */


#ifndef __VBProjects_FWD_DEFINED__
#define __VBProjects_FWD_DEFINED__

#ifdef __cplusplus
typedef class VBProjects VBProjects;
#else
typedef struct VBProjects VBProjects;
#endif /* __cplusplus */

#endif 	/* __VBProjects_FWD_DEFINED__ */


#ifndef __Components_FWD_DEFINED__
#define __Components_FWD_DEFINED__

#ifdef __cplusplus
typedef class Components Components;
#else
typedef struct Components Components;
#endif /* __cplusplus */

#endif 	/* __Components_FWD_DEFINED__ */


#ifndef __VBComponents_FWD_DEFINED__
#define __VBComponents_FWD_DEFINED__

#ifdef __cplusplus
typedef class VBComponents VBComponents;
#else
typedef struct VBComponents VBComponents;
#endif /* __cplusplus */

#endif 	/* __VBComponents_FWD_DEFINED__ */


#ifndef __Component_FWD_DEFINED__
#define __Component_FWD_DEFINED__

#ifdef __cplusplus
typedef class Component Component;
#else
typedef struct Component Component;
#endif /* __cplusplus */

#endif 	/* __Component_FWD_DEFINED__ */


#ifndef __VBComponent_FWD_DEFINED__
#define __VBComponent_FWD_DEFINED__

#ifdef __cplusplus
typedef class VBComponent VBComponent;
#else
typedef struct VBComponent VBComponent;
#endif /* __cplusplus */

#endif 	/* __VBComponent_FWD_DEFINED__ */


#ifndef __Properties_FWD_DEFINED__
#define __Properties_FWD_DEFINED__

#ifdef __cplusplus
typedef class Properties Properties;
#else
typedef struct Properties Properties;
#endif /* __cplusplus */

#endif 	/* __Properties_FWD_DEFINED__ */


#ifndef __Addins_FWD_DEFINED__
#define __Addins_FWD_DEFINED__

#ifdef __cplusplus
typedef class Addins Addins;
#else
typedef struct Addins Addins;
#endif /* __cplusplus */

#endif 	/* __Addins_FWD_DEFINED__ */


#ifndef __CodeModule_FWD_DEFINED__
#define __CodeModule_FWD_DEFINED__

#ifdef __cplusplus
typedef class CodeModule CodeModule;
#else
typedef struct CodeModule CodeModule;
#endif /* __cplusplus */

#endif 	/* __CodeModule_FWD_DEFINED__ */


#ifndef __CodePanes_FWD_DEFINED__
#define __CodePanes_FWD_DEFINED__

#ifdef __cplusplus
typedef class CodePanes CodePanes;
#else
typedef struct CodePanes CodePanes;
#endif /* __cplusplus */

#endif 	/* __CodePanes_FWD_DEFINED__ */


#ifndef __CodePane_FWD_DEFINED__
#define __CodePane_FWD_DEFINED__

#ifdef __cplusplus
typedef class CodePane CodePane;
#else
typedef struct CodePane CodePane;
#endif /* __cplusplus */

#endif 	/* __CodePane_FWD_DEFINED__ */


#ifndef __References_FWD_DEFINED__
#define __References_FWD_DEFINED__

#ifdef __cplusplus
typedef class References References;
#else
typedef struct References References;
#endif /* __cplusplus */

#endif 	/* __References_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __VBIDE_LIBRARY_DEFINED__
#define __VBIDE_LIBRARY_DEFINED__

/* library VBIDE */
/* [helpcontext][helpfile][helpstring][version][uuid] */ 






































typedef /* [public][uuid] */  DECLSPEC_UUID("06A03650-2369-11CE-BFDC-08002B2B8CDA") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0001
    {
        vbextFileTypeForm	= 0,
        vbextFileTypeModule	= 1,
        vbextFileTypeClass	= 2,
        vbextFileTypeProject	= 3,
        vbextFileTypeExe	= 4,
        vbextFileTypeFrx	= 5,
        vbextFileTypeRes	= 6,
        vbextFileTypeUserControl	= 7,
        vbextFileTypePropertyPage	= 8,
        vbextFileTypeDocObject	= 9,
        vbextFileTypeBinary	= 10,
        vbextFileTypeGroupProject	= 11,
        vbextFileTypeDesigners	= 12
    } 	vbextFileTypes;

typedef /* [public][public][public][helpcontext][uuid] */  DECLSPEC_UUID("BE39F3DB-1B13-11D0-887F-00A0C90F2744") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0002
    {
        vbext_wt_CodeWindow	= 0,
        vbext_wt_Designer	= 1,
        vbext_wt_Browser	= 2,
        vbext_wt_Watch	= 3,
        vbext_wt_Locals	= 4,
        vbext_wt_Immediate	= 5,
        vbext_wt_ProjectWindow	= 6,
        vbext_wt_PropertyWindow	= 7,
        vbext_wt_Find	= 8,
        vbext_wt_FindReplace	= 9,
        vbext_wt_Toolbox	= 10,
        vbext_wt_LinkedWindowFrame	= 11,
        vbext_wt_MainWindow	= 12,
        vbext_wt_ToolWindow	= 15
    } 	vbext_WindowType;

typedef /* [public][public][public][helpcontext][uuid] */  DECLSPEC_UUID("BE39F3DC-1B13-11D0-887F-00A0C90F2744") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0003
    {
        vbext_ws_Normal	= 0,
        vbext_ws_Minimize	= 1,
        vbext_ws_Maximize	= 2
    } 	vbext_VBEWindowstate;

typedef /* [public][public][public][helpcontext][uuid] */  DECLSPEC_UUID("FFCF3247-DEBF-11D1-BAFF-00C04FB6C4A6") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0004
    {
        vbext_pt_HostProject	= 100,
        vbext_pt_StandAlone	= 101
    } 	vbext_ProjectType;

typedef /* [public][public][helpcontext][uuid] */  DECLSPEC_UUID("0002E129-0000-0000-C000-000000000046") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0005
    {
        vbext_pp_none	= 0,
        vbext_pp_locked	= 1
    } 	vbext_ProjectProtection;

typedef /* [public][public][helpcontext][uuid] */  DECLSPEC_UUID("BE39F3D2-1B13-11D0-887F-00A0C90F2744") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0006
    {
        vbext_vm_Run	= 0,
        vbext_vm_Break	= 1,
        vbext_vm_Design	= 2
    } 	vbext_VBAMode;

typedef /* [public][public][public][public][helpcontext][uuid] */  DECLSPEC_UUID("BE39F3D5-1B13-11D0-887F-00A0C90F2744") 
enum __MIDL___MIDL_itf_vbe_0000_0000_0007
    {
        vbext_ct_StdModule	= 1,
        vbext_ct_ClassModule	= 2,
        vbext_ct_MSForm	= 3,
        vbext_ct_ActiveXDesigner	= 11,
        vbext_ct_Document	= 100
    } 	vbext_ComponentType;

typedef /* [public][public][public][public][public][helpcontext] */ 
enum __MIDL___MIDL_itf_vbe_0000_0000_0008
    {
        vbext_pk_Proc	= 0,
        vbext_pk_Let	= 1,
        vbext_pk_Set	= 2,
        vbext_pk_Get	= 3
    } 	vbext_ProcKind;

typedef /* [public][public][helpcontext] */ 
enum __MIDL___MIDL_itf_vbe_0000_0000_0009
    {
        vbext_cv_ProcedureView	= 0,
        vbext_cv_FullModuleView	= 1
    } 	vbext_CodePaneview;

typedef /* [public][public][helpcontext] */ 
enum __MIDL___MIDL_itf_vbe_0000_0000_0010
    {
        vbext_rk_TypeLib	= 0,
        vbext_rk_Project	= 1
    } 	vbext_RefKind;


EXTERN_C const IID LIBID_VBIDE;

#ifndef __VBEApplication_INTERFACE_DEFINED__
#define __VBEApplication_INTERFACE_DEFINED__

/* interface VBEApplication */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID_VBEApplication;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E158-0000-0000-C000-000000000046")
    VBEApplication : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *lpbstrReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct VBEApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            VBEApplication * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            VBEApplication * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            VBEApplication * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            VBEApplication * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            VBEApplication * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            VBEApplication * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            VBEApplication * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            VBEApplication * This,
            /* [retval][out] */ BSTR *lpbstrReturn);
        
        END_INTERFACE
    } VBEApplicationVtbl;

    interface VBEApplication
    {
        CONST_VTBL struct VBEApplicationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define VBEApplication_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define VBEApplication_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define VBEApplication_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define VBEApplication_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define VBEApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define VBEApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define VBEApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define VBEApplication_get_Version(This,lpbstrReturn)	\
    ( (This)->lpVtbl -> get_Version(This,lpbstrReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __VBEApplication_INTERFACE_DEFINED__ */


#ifndef __VBE_INTERFACE_DEFINED__
#define __VBE_INTERFACE_DEFINED__

/* interface VBE */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_VBE;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E166-0000-0000-C000-000000000046")
    VBE : public VBEApplication
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBProjects( 
            /* [retval][out] */ _VBProjects **lppptReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CommandBars( 
            /* [retval][out] */ /* external definition not present */ CommandBars **ppcbs) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodePanes( 
            /* [retval][out] */ _CodePanes **ppCodePanes) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEWindows( 
            /* [retval][out] */ _VBEWindows **ppwnsVBVBEWindows) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Events( 
            /* [retval][out] */ Events **ppevtEvents) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveVBProject( 
            /* [retval][out] */ _VBProject **lppptReturn) = 0;
        
        virtual /* [helpcontext][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveVBProject( 
            /* [in] */ _VBProject *lppptReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedVBComponent( 
            /* [retval][out] */ _VBComponent **lppscReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_MainWindow( 
            /* [retval][out] */ Window **ppwin) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveWindow( 
            /* [retval][out] */ Window **ppwinActive) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActiveCodePane( 
            /* [retval][out] */ _CodePane **ppCodePane) = 0;
        
        virtual /* [helpcontext][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_ActiveCodePane( 
            /* [in] */ _CodePane *ppCodePane) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Addins( 
            /* [retval][out] */ _AddIns **lpppAddIns) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct VBEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            VBE * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            VBE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            VBE * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            VBE * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            VBE * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            VBE * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            VBE * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            VBE * This,
            /* [retval][out] */ BSTR *lpbstrReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBProjects )( 
            VBE * This,
            /* [retval][out] */ _VBProjects **lppptReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CommandBars )( 
            VBE * This,
            /* [retval][out] */ /* external definition not present */ CommandBars **ppcbs);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodePanes )( 
            VBE * This,
            /* [retval][out] */ _CodePanes **ppCodePanes);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEWindows )( 
            VBE * This,
            /* [retval][out] */ _VBEWindows **ppwnsVBVBEWindows);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Events )( 
            VBE * This,
            /* [retval][out] */ Events **ppevtEvents);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveVBProject )( 
            VBE * This,
            /* [retval][out] */ _VBProject **lppptReturn);
        
        /* [helpcontext][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveVBProject )( 
            VBE * This,
            /* [in] */ _VBProject *lppptReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedVBComponent )( 
            VBE * This,
            /* [retval][out] */ _VBComponent **lppscReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MainWindow )( 
            VBE * This,
            /* [retval][out] */ Window **ppwin);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveWindow )( 
            VBE * This,
            /* [retval][out] */ Window **ppwinActive);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActiveCodePane )( 
            VBE * This,
            /* [retval][out] */ _CodePane **ppCodePane);
        
        /* [helpcontext][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_ActiveCodePane )( 
            VBE * This,
            /* [in] */ _CodePane *ppCodePane);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Addins )( 
            VBE * This,
            /* [retval][out] */ _AddIns **lpppAddIns);
        
        END_INTERFACE
    } VBEVtbl;

    interface VBE
    {
        CONST_VTBL struct VBEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define VBE_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define VBE_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define VBE_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define VBE_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define VBE_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define VBE_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define VBE_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define VBE_get_Version(This,lpbstrReturn)	\
    ( (This)->lpVtbl -> get_Version(This,lpbstrReturn) ) 


#define VBE_get_VBProjects(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_VBProjects(This,lppptReturn) ) 

#define VBE_get_CommandBars(This,ppcbs)	\
    ( (This)->lpVtbl -> get_CommandBars(This,ppcbs) ) 

#define VBE_get_CodePanes(This,ppCodePanes)	\
    ( (This)->lpVtbl -> get_CodePanes(This,ppCodePanes) ) 

#define VBE_get_VBEWindows(This,ppwnsVBVBEWindows)	\
    ( (This)->lpVtbl -> get_VBEWindows(This,ppwnsVBVBEWindows) ) 

#define VBE_get_Events(This,ppevtEvents)	\
    ( (This)->lpVtbl -> get_Events(This,ppevtEvents) ) 

#define VBE_get_ActiveVBProject(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_ActiveVBProject(This,lppptReturn) ) 

#define VBE_putref_ActiveVBProject(This,lppptReturn)	\
    ( (This)->lpVtbl -> putref_ActiveVBProject(This,lppptReturn) ) 

#define VBE_get_SelectedVBComponent(This,lppscReturn)	\
    ( (This)->lpVtbl -> get_SelectedVBComponent(This,lppscReturn) ) 

#define VBE_get_MainWindow(This,ppwin)	\
    ( (This)->lpVtbl -> get_MainWindow(This,ppwin) ) 

#define VBE_get_ActiveWindow(This,ppwinActive)	\
    ( (This)->lpVtbl -> get_ActiveWindow(This,ppwinActive) ) 

#define VBE_get_ActiveCodePane(This,ppCodePane)	\
    ( (This)->lpVtbl -> get_ActiveCodePane(This,ppCodePane) ) 

#define VBE_putref_ActiveCodePane(This,ppCodePane)	\
    ( (This)->lpVtbl -> putref_ActiveCodePane(This,ppCodePane) ) 

#define VBE_get_Addins(This,lpppAddIns)	\
    ( (This)->lpVtbl -> get_Addins(This,lpppAddIns) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __VBE_INTERFACE_DEFINED__ */


#ifndef __Window_INTERFACE_DEFINED__
#define __Window_INTERFACE_DEFINED__

/* interface Window */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_Window;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E16B-0000-0000-C000-000000000046")
    Window : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _VBEWindows **lppaReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Caption( 
            /* [retval][out] */ BSTR *pbstrTitle) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Visible( 
            /* [retval][out] */ VARIANT_BOOL *pfVisible) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Visible( 
            /* [in] */ VARIANT_BOOL pfVisible) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *plLeft) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Left( 
            /* [in] */ long plLeft) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *plTop) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Top( 
            /* [in] */ long plTop) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Width( 
            /* [retval][out] */ long *plWidth) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Width( 
            /* [in] */ long plWidth) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Height( 
            /* [retval][out] */ long *plHeight) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Height( 
            /* [in] */ long plHeight) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEWindowstate( 
            /* [retval][out] */ vbext_VBEWindowstate *plVBEWindowstate) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_VBEWindowstate( 
            /* [in] */ vbext_VBEWindowstate plVBEWindowstate) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ vbext_WindowType *pKind) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT STDMETHODCALLTYPE SetKind( 
            /* [in] */ vbext_WindowType eKind) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_LinkedVBEWindows( 
            /* [retval][out] */ _LinkedVBEWindows **ppwnsCollection) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_LinkedWindowFrame( 
            /* [retval][out] */ Window **ppwinFrame) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT STDMETHODCALLTYPE Detach( void) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT STDMETHODCALLTYPE Attach( 
            /* [in] */ long lWindowHandle) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_HWnd( 
            /* [retval][out] */ long *plWindowHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct WindowVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Window * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Window * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Window * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Window * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Window * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Window * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Window * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            Window * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            Window * This,
            /* [retval][out] */ _VBEWindows **lppaReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            Window * This);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Caption )( 
            Window * This,
            /* [retval][out] */ BSTR *pbstrTitle);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Visible )( 
            Window * This,
            /* [retval][out] */ VARIANT_BOOL *pfVisible);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Visible )( 
            Window * This,
            /* [in] */ VARIANT_BOOL pfVisible);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            Window * This,
            /* [retval][out] */ long *plLeft);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Left )( 
            Window * This,
            /* [in] */ long plLeft);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            Window * This,
            /* [retval][out] */ long *plTop);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Top )( 
            Window * This,
            /* [in] */ long plTop);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Width )( 
            Window * This,
            /* [retval][out] */ long *plWidth);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Width )( 
            Window * This,
            /* [in] */ long plWidth);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Height )( 
            Window * This,
            /* [retval][out] */ long *plHeight);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Height )( 
            Window * This,
            /* [in] */ long plHeight);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEWindowstate )( 
            Window * This,
            /* [retval][out] */ vbext_VBEWindowstate *plVBEWindowstate);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_VBEWindowstate )( 
            Window * This,
            /* [in] */ vbext_VBEWindowstate plVBEWindowstate);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            Window * This);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            Window * This,
            /* [retval][out] */ vbext_WindowType *pKind);
        
        /* [hidden][restricted][id] */ HRESULT ( STDMETHODCALLTYPE *SetKind )( 
            Window * This,
            /* [in] */ vbext_WindowType eKind);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LinkedVBEWindows )( 
            Window * This,
            /* [retval][out] */ _LinkedVBEWindows **ppwnsCollection);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LinkedWindowFrame )( 
            Window * This,
            /* [retval][out] */ Window **ppwinFrame);
        
        /* [hidden][restricted][id] */ HRESULT ( STDMETHODCALLTYPE *Detach )( 
            Window * This);
        
        /* [hidden][restricted][id] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            Window * This,
            /* [in] */ long lWindowHandle);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HWnd )( 
            Window * This,
            /* [retval][out] */ long *plWindowHandle);
        
        END_INTERFACE
    } WindowVtbl;

    interface Window
    {
        CONST_VTBL struct WindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Window_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Window_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Window_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Window_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Window_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Window_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Window_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Window_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define Window_get_Collection(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lppaReturn) ) 

#define Window_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define Window_get_Caption(This,pbstrTitle)	\
    ( (This)->lpVtbl -> get_Caption(This,pbstrTitle) ) 

#define Window_get_Visible(This,pfVisible)	\
    ( (This)->lpVtbl -> get_Visible(This,pfVisible) ) 

#define Window_put_Visible(This,pfVisible)	\
    ( (This)->lpVtbl -> put_Visible(This,pfVisible) ) 

#define Window_get_Left(This,plLeft)	\
    ( (This)->lpVtbl -> get_Left(This,plLeft) ) 

#define Window_put_Left(This,plLeft)	\
    ( (This)->lpVtbl -> put_Left(This,plLeft) ) 

#define Window_get_Top(This,plTop)	\
    ( (This)->lpVtbl -> get_Top(This,plTop) ) 

#define Window_put_Top(This,plTop)	\
    ( (This)->lpVtbl -> put_Top(This,plTop) ) 

#define Window_get_Width(This,plWidth)	\
    ( (This)->lpVtbl -> get_Width(This,plWidth) ) 

#define Window_put_Width(This,plWidth)	\
    ( (This)->lpVtbl -> put_Width(This,plWidth) ) 

#define Window_get_Height(This,plHeight)	\
    ( (This)->lpVtbl -> get_Height(This,plHeight) ) 

#define Window_put_Height(This,plHeight)	\
    ( (This)->lpVtbl -> put_Height(This,plHeight) ) 

#define Window_get_VBEWindowstate(This,plVBEWindowstate)	\
    ( (This)->lpVtbl -> get_VBEWindowstate(This,plVBEWindowstate) ) 

#define Window_put_VBEWindowstate(This,plVBEWindowstate)	\
    ( (This)->lpVtbl -> put_VBEWindowstate(This,plVBEWindowstate) ) 

#define Window_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define Window_get_Type(This,pKind)	\
    ( (This)->lpVtbl -> get_Type(This,pKind) ) 

#define Window_SetKind(This,eKind)	\
    ( (This)->lpVtbl -> SetKind(This,eKind) ) 

#define Window_get_LinkedVBEWindows(This,ppwnsCollection)	\
    ( (This)->lpVtbl -> get_LinkedVBEWindows(This,ppwnsCollection) ) 

#define Window_get_LinkedWindowFrame(This,ppwinFrame)	\
    ( (This)->lpVtbl -> get_LinkedWindowFrame(This,ppwinFrame) ) 

#define Window_Detach(This)	\
    ( (This)->lpVtbl -> Detach(This) ) 

#define Window_Attach(This,lWindowHandle)	\
    ( (This)->lpVtbl -> Attach(This,lWindowHandle) ) 

#define Window_get_HWnd(This,plWindowHandle)	\
    ( (This)->lpVtbl -> get_HWnd(This,plWindowHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Window_INTERFACE_DEFINED__ */


#ifndef ___VBEWindows_old_INTERFACE_DEFINED__
#define ___VBEWindows_old_INTERFACE_DEFINED__

/* interface _VBEWindows_old */
/* [object][oleautomation][dual][hidden][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBEWindows_old;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E16A-0000-0000-C000-000000000046")
    _VBEWindows_old : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ VBEApplication **lppptReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ Window **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBEWindows_oldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBEWindows_old * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBEWindows_old * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBEWindows_old * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBEWindows_old * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBEWindows_old * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBEWindows_old * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBEWindows_old * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBEWindows_old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBEWindows_old * This,
            /* [retval][out] */ VBEApplication **lppptReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBEWindows_old * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ Window **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBEWindows_old * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBEWindows_old * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        END_INTERFACE
    } _VBEWindows_oldVtbl;

    interface _VBEWindows_old
    {
        CONST_VTBL struct _VBEWindows_oldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBEWindows_old_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBEWindows_old_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBEWindows_old_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBEWindows_old_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBEWindows_old_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBEWindows_old_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBEWindows_old_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBEWindows_old_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBEWindows_old_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define _VBEWindows_old_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBEWindows_old_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBEWindows_old__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBEWindows_old_INTERFACE_DEFINED__ */


#ifndef ___VBEWindows_INTERFACE_DEFINED__
#define ___VBEWindows_INTERFACE_DEFINED__

/* interface _VBEWindows */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBEWindows;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F57B7ED0-D8AB-11D1-85DF-00C04F98F42C")
    _VBEWindows : public _VBEWindows_old
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE CreateToolWindow( 
            /* [in] */ AddIn *AddInInst,
            /* [in] */ BSTR ProgId,
            /* [in] */ BSTR Caption,
            /* [in] */ BSTR GuidPosition,
            /* [out][in] */ IDispatch **DocObj,
            /* [retval][out] */ Window **lppcReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBEWindowsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBEWindows * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBEWindows * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBEWindows * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBEWindows * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBEWindows * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBEWindows * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBEWindows * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBEWindows * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBEWindows * This,
            /* [retval][out] */ VBEApplication **lppptReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBEWindows * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ Window **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBEWindows * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBEWindows * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *CreateToolWindow )( 
            _VBEWindows * This,
            /* [in] */ AddIn *AddInInst,
            /* [in] */ BSTR ProgId,
            /* [in] */ BSTR Caption,
            /* [in] */ BSTR GuidPosition,
            /* [out][in] */ IDispatch **DocObj,
            /* [retval][out] */ Window **lppcReturn);
        
        END_INTERFACE
    } _VBEWindowsVtbl;

    interface _VBEWindows
    {
        CONST_VTBL struct _VBEWindowsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBEWindows_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBEWindows_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBEWindows_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBEWindows_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBEWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBEWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBEWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBEWindows_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBEWindows_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define _VBEWindows_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBEWindows_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBEWindows__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 


#define _VBEWindows_CreateToolWindow(This,AddInInst,ProgId,Caption,GuidPosition,DocObj,lppcReturn)	\
    ( (This)->lpVtbl -> CreateToolWindow(This,AddInInst,ProgId,Caption,GuidPosition,DocObj,lppcReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBEWindows_INTERFACE_DEFINED__ */


#ifndef ___LinkedVBEWindows_INTERFACE_DEFINED__
#define ___LinkedVBEWindows_INTERFACE_DEFINED__

/* interface _LinkedVBEWindows */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__LinkedVBEWindows;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E16C-0000-0000-C000-000000000046")
    _LinkedVBEWindows : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ Window **ppptReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ Window **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [helpcontext][restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ Window *Window) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ Window *Window) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _LinkedVBEWindowsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _LinkedVBEWindows * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _LinkedVBEWindows * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _LinkedVBEWindows * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _LinkedVBEWindows * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _LinkedVBEWindows * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _LinkedVBEWindows * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _LinkedVBEWindows * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _LinkedVBEWindows * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _LinkedVBEWindows * This,
            /* [retval][out] */ Window **ppptReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _LinkedVBEWindows * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ Window **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _LinkedVBEWindows * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [helpcontext][restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _LinkedVBEWindows * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _LinkedVBEWindows * This,
            /* [in] */ Window *Window);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            _LinkedVBEWindows * This,
            /* [in] */ Window *Window);
        
        END_INTERFACE
    } _LinkedVBEWindowsVtbl;

    interface _LinkedVBEWindows
    {
        CONST_VTBL struct _LinkedVBEWindowsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _LinkedVBEWindows_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _LinkedVBEWindows_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _LinkedVBEWindows_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _LinkedVBEWindows_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _LinkedVBEWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _LinkedVBEWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _LinkedVBEWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _LinkedVBEWindows_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _LinkedVBEWindows_get_Parent(This,ppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,ppptReturn) ) 

#define _LinkedVBEWindows_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _LinkedVBEWindows_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _LinkedVBEWindows__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _LinkedVBEWindows_Remove(This,Window)	\
    ( (This)->lpVtbl -> Remove(This,Window) ) 

#define _LinkedVBEWindows_Add(This,Window)	\
    ( (This)->lpVtbl -> Add(This,Window) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___LinkedVBEWindows_INTERFACE_DEFINED__ */


#ifndef __Events_INTERFACE_DEFINED__
#define __Events_INTERFACE_DEFINED__

/* interface Events */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_Events;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E167-0000-0000-C000-000000000046")
    Events : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReferencesEvents( 
            /* [in] */ _VBProject *VBProject,
            /* [retval][out] */ _ReferencesEvents **prceNew) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CommandBarEvents( 
            /* [in] */ IDispatch *CommandBarControl,
            /* [retval][out] */ void **prceNew) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Events * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReferencesEvents )( 
            Events * This,
            /* [in] */ _VBProject *VBProject,
            /* [retval][out] */ _ReferencesEvents **prceNew);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CommandBarEvents )( 
            Events * This,
            /* [in] */ IDispatch *CommandBarControl,
            /* [retval][out] */ void **prceNew);
        
        END_INTERFACE
    } EventsVtbl;

    interface Events
    {
        CONST_VTBL struct EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Events_get_ReferencesEvents(This,VBProject,prceNew)	\
    ( (This)->lpVtbl -> get_ReferencesEvents(This,VBProject,prceNew) ) 

#define Events_get_CommandBarEvents(This,CommandBarControl,prceNew)	\
    ( (This)->lpVtbl -> get_CommandBarEvents(This,CommandBarControl,prceNew) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Events_INTERFACE_DEFINED__ */


#ifndef ___VBProjectsEvents_INTERFACE_DEFINED__
#define ___VBProjectsEvents_INTERFACE_DEFINED__

/* interface _VBProjectsEvents */
/* [object][oleautomation][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBProjectsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E113-0000-0000-C000-000000000046")
    _VBProjectsEvents : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _VBProjectsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBProjectsEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBProjectsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBProjectsEvents * This);
        
        END_INTERFACE
    } _VBProjectsEventsVtbl;

    interface _VBProjectsEvents
    {
        CONST_VTBL struct _VBProjectsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBProjectsEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBProjectsEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBProjectsEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBProjectsEvents_INTERFACE_DEFINED__ */


#ifndef ___dispVBProjectsEvents_DISPINTERFACE_DEFINED__
#define ___dispVBProjectsEvents_DISPINTERFACE_DEFINED__

/* dispinterface _dispVBProjectsEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__dispVBProjectsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0002E103-0000-0000-C000-000000000046")
    _dispVBProjectsEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _dispVBProjectsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _dispVBProjectsEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _dispVBProjectsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _dispVBProjectsEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _dispVBProjectsEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _dispVBProjectsEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _dispVBProjectsEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _dispVBProjectsEvents * This,
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
    } _dispVBProjectsEventsVtbl;

    interface _dispVBProjectsEvents
    {
        CONST_VTBL struct _dispVBProjectsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _dispVBProjectsEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _dispVBProjectsEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _dispVBProjectsEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _dispVBProjectsEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _dispVBProjectsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _dispVBProjectsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _dispVBProjectsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___dispVBProjectsEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___VBComponentsEvents_INTERFACE_DEFINED__
#define ___VBComponentsEvents_INTERFACE_DEFINED__

/* interface _VBComponentsEvents */
/* [object][oleautomation][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBComponentsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E115-0000-0000-C000-000000000046")
    _VBComponentsEvents : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _VBComponentsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBComponentsEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBComponentsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBComponentsEvents * This);
        
        END_INTERFACE
    } _VBComponentsEventsVtbl;

    interface _VBComponentsEvents
    {
        CONST_VTBL struct _VBComponentsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBComponentsEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBComponentsEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBComponentsEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBComponentsEvents_INTERFACE_DEFINED__ */


#ifndef ___dispVBComponentsEvents_DISPINTERFACE_DEFINED__
#define ___dispVBComponentsEvents_DISPINTERFACE_DEFINED__

/* dispinterface _dispVBComponentsEvents */
/* [helpcontext][uuid] */ 


EXTERN_C const IID DIID__dispVBComponentsEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0002E116-0000-0000-C000-000000000046")
    _dispVBComponentsEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _dispVBComponentsEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _dispVBComponentsEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _dispVBComponentsEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _dispVBComponentsEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _dispVBComponentsEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _dispVBComponentsEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _dispVBComponentsEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _dispVBComponentsEvents * This,
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
    } _dispVBComponentsEventsVtbl;

    interface _dispVBComponentsEvents
    {
        CONST_VTBL struct _dispVBComponentsEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _dispVBComponentsEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _dispVBComponentsEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _dispVBComponentsEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _dispVBComponentsEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _dispVBComponentsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _dispVBComponentsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _dispVBComponentsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___dispVBComponentsEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___ReferencesEvents_INTERFACE_DEFINED__
#define ___ReferencesEvents_INTERFACE_DEFINED__

/* interface _ReferencesEvents */
/* [object][oleautomation][helpcontext][uuid] */ 


EXTERN_C const IID IID__ReferencesEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E11A-0000-0000-C000-000000000046")
    _ReferencesEvents : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _ReferencesEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ReferencesEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ReferencesEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ReferencesEvents * This);
        
        END_INTERFACE
    } _ReferencesEventsVtbl;

    interface _ReferencesEvents
    {
        CONST_VTBL struct _ReferencesEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ReferencesEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ReferencesEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ReferencesEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___ReferencesEvents_INTERFACE_DEFINED__ */


#ifndef ___dispReferencesEvents_DISPINTERFACE_DEFINED__
#define ___dispReferencesEvents_DISPINTERFACE_DEFINED__

/* dispinterface _dispReferencesEvents */
/* [helpcontext][uuid] */ 


EXTERN_C const IID DIID__dispReferencesEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0002E118-0000-0000-C000-000000000046")
    _dispReferencesEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _dispReferencesEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _dispReferencesEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _dispReferencesEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _dispReferencesEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _dispReferencesEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _dispReferencesEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _dispReferencesEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _dispReferencesEvents * This,
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
    } _dispReferencesEventsVtbl;

    interface _dispReferencesEvents
    {
        CONST_VTBL struct _dispReferencesEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _dispReferencesEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _dispReferencesEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _dispReferencesEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _dispReferencesEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _dispReferencesEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _dispReferencesEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _dispReferencesEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___dispReferencesEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___CommandBarControlEvents_INTERFACE_DEFINED__
#define ___CommandBarControlEvents_INTERFACE_DEFINED__

/* interface _CommandBarControlEvents */
/* [object][oleautomation][helpcontext][uuid] */ 


EXTERN_C const IID IID__CommandBarControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E130-0000-0000-C000-000000000046")
    _CommandBarControlEvents : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct _CommandBarControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _CommandBarControlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _CommandBarControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _CommandBarControlEvents * This);
        
        END_INTERFACE
    } _CommandBarControlEventsVtbl;

    interface _CommandBarControlEvents
    {
        CONST_VTBL struct _CommandBarControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _CommandBarControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _CommandBarControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _CommandBarControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___CommandBarControlEvents_INTERFACE_DEFINED__ */


#ifndef ___dispCommandBarControlEvents_DISPINTERFACE_DEFINED__
#define ___dispCommandBarControlEvents_DISPINTERFACE_DEFINED__

/* dispinterface _dispCommandBarControlEvents */
/* [helpcontext][uuid] */ 


EXTERN_C const IID DIID__dispCommandBarControlEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0002E131-0000-0000-C000-000000000046")
    _dispCommandBarControlEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _dispCommandBarControlEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _dispCommandBarControlEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _dispCommandBarControlEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _dispCommandBarControlEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _dispCommandBarControlEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _dispCommandBarControlEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _dispCommandBarControlEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _dispCommandBarControlEvents * This,
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
    } _dispCommandBarControlEventsVtbl;

    interface _dispCommandBarControlEvents
    {
        CONST_VTBL struct _dispCommandBarControlEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _dispCommandBarControlEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _dispCommandBarControlEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _dispCommandBarControlEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _dispCommandBarControlEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _dispCommandBarControlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _dispCommandBarControlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _dispCommandBarControlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___dispCommandBarControlEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___ProjectTemplate_INTERFACE_DEFINED__
#define ___ProjectTemplate_INTERFACE_DEFINED__

/* interface _ProjectTemplate */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__ProjectTemplate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E159-0000-0000-C000-000000000046")
    _ProjectTemplate : public IDispatch
    {
    public:
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _ProjectTemplateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ProjectTemplate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ProjectTemplate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ProjectTemplate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ProjectTemplate * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ProjectTemplate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ProjectTemplate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ProjectTemplate * This,
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
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _ProjectTemplate * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _ProjectTemplate * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        END_INTERFACE
    } _ProjectTemplateVtbl;

    interface _ProjectTemplate
    {
        CONST_VTBL struct _ProjectTemplateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ProjectTemplate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ProjectTemplate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ProjectTemplate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ProjectTemplate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ProjectTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ProjectTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ProjectTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _ProjectTemplate_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _ProjectTemplate_get_Parent(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppaReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___ProjectTemplate_INTERFACE_DEFINED__ */


#ifndef ___VBProject_Old_INTERFACE_DEFINED__
#define ___VBProject_Old_INTERFACE_DEFINED__

/* interface _VBProject_Old */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__VBProject_Old;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E160-0000-0000-C000-000000000046")
    _VBProject_Old : public _ProjectTemplate
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpFile( 
            /* [retval][out] */ BSTR *lpbstrHelpFile) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpFile( 
            /* [in] */ BSTR lpbstrHelpFile) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_HelpContextID( 
            /* [retval][out] */ long *lpdwContextID) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_HelpContextID( 
            /* [in] */ long lpdwContextID) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *lpbstrDescription) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR lpbstrDescription) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Mode( 
            /* [retval][out] */ vbext_VBAMode *lpVbaMode) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_References( 
            /* [retval][out] */ _References **lppReferences) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *lpbstrName) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR lpbstrName) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _VBProjects **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Protection( 
            /* [retval][out] */ vbext_ProjectProtection *lpProtection) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Saved( 
            /* [retval][out] */ VARIANT_BOOL *lpfReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBComponents( 
            /* [retval][out] */ _VBComponents **lppcReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBProject_OldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBProject_Old * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBProject_Old * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBProject_Old * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBProject_Old * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBProject_Old * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBProject_Old * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBProject_Old * This,
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
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _VBProject_Old * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBProject_Old * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            _VBProject_Old * This,
            /* [retval][out] */ BSTR *lpbstrHelpFile);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            _VBProject_Old * This,
            /* [in] */ BSTR lpbstrHelpFile);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContextID )( 
            _VBProject_Old * This,
            /* [retval][out] */ long *lpdwContextID);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpContextID )( 
            _VBProject_Old * This,
            /* [in] */ long lpdwContextID);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            _VBProject_Old * This,
            /* [retval][out] */ BSTR *lpbstrDescription);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            _VBProject_Old * This,
            /* [in] */ BSTR lpbstrDescription);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            _VBProject_Old * This,
            /* [retval][out] */ vbext_VBAMode *lpVbaMode);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            _VBProject_Old * This,
            /* [retval][out] */ _References **lppReferences);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _VBProject_Old * This,
            /* [retval][out] */ BSTR *lpbstrName);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _VBProject_Old * This,
            /* [in] */ BSTR lpbstrName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBProject_Old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            _VBProject_Old * This,
            /* [retval][out] */ _VBProjects **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Protection )( 
            _VBProject_Old * This,
            /* [retval][out] */ vbext_ProjectProtection *lpProtection);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            _VBProject_Old * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBComponents )( 
            _VBProject_Old * This,
            /* [retval][out] */ _VBComponents **lppcReturn);
        
        END_INTERFACE
    } _VBProject_OldVtbl;

    interface _VBProject_Old
    {
        CONST_VTBL struct _VBProject_OldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBProject_Old_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBProject_Old_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBProject_Old_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBProject_Old_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBProject_Old_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBProject_Old_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBProject_Old_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBProject_Old_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _VBProject_Old_get_Parent(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppaReturn) ) 


#define _VBProject_Old_get_HelpFile(This,lpbstrHelpFile)	\
    ( (This)->lpVtbl -> get_HelpFile(This,lpbstrHelpFile) ) 

#define _VBProject_Old_put_HelpFile(This,lpbstrHelpFile)	\
    ( (This)->lpVtbl -> put_HelpFile(This,lpbstrHelpFile) ) 

#define _VBProject_Old_get_HelpContextID(This,lpdwContextID)	\
    ( (This)->lpVtbl -> get_HelpContextID(This,lpdwContextID) ) 

#define _VBProject_Old_put_HelpContextID(This,lpdwContextID)	\
    ( (This)->lpVtbl -> put_HelpContextID(This,lpdwContextID) ) 

#define _VBProject_Old_get_Description(This,lpbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,lpbstrDescription) ) 

#define _VBProject_Old_put_Description(This,lpbstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,lpbstrDescription) ) 

#define _VBProject_Old_get_Mode(This,lpVbaMode)	\
    ( (This)->lpVtbl -> get_Mode(This,lpVbaMode) ) 

#define _VBProject_Old_get_References(This,lppReferences)	\
    ( (This)->lpVtbl -> get_References(This,lppReferences) ) 

#define _VBProject_Old_get_Name(This,lpbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,lpbstrName) ) 

#define _VBProject_Old_put_Name(This,lpbstrName)	\
    ( (This)->lpVtbl -> put_Name(This,lpbstrName) ) 

#define _VBProject_Old_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBProject_Old_get_Collection(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lppaReturn) ) 

#define _VBProject_Old_get_Protection(This,lpProtection)	\
    ( (This)->lpVtbl -> get_Protection(This,lpProtection) ) 

#define _VBProject_Old_get_Saved(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_Saved(This,lpfReturn) ) 

#define _VBProject_Old_get_VBComponents(This,lppcReturn)	\
    ( (This)->lpVtbl -> get_VBComponents(This,lppcReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBProject_Old_INTERFACE_DEFINED__ */


#ifndef ___VBProject_INTERFACE_DEFINED__
#define ___VBProject_INTERFACE_DEFINED__

/* interface _VBProject */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__VBProject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEE00915-E393-11D1-BB03-00C04FB6C4A6")
    _VBProject : public _VBProject_Old
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE MakeCompiledFile( void) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ vbext_ProjectType *lpkind) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *lpbstrReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_BuildFileName( 
            /* [retval][out] */ BSTR *lpbstrBldFName) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_BuildFileName( 
            /* [in] */ BSTR lpbstrBldFName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBProjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBProject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBProject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBProject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBProject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBProject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBProject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBProject * This,
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
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _VBProject * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBProject * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpFile )( 
            _VBProject * This,
            /* [retval][out] */ BSTR *lpbstrHelpFile);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpFile )( 
            _VBProject * This,
            /* [in] */ BSTR lpbstrHelpFile);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HelpContextID )( 
            _VBProject * This,
            /* [retval][out] */ long *lpdwContextID);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_HelpContextID )( 
            _VBProject * This,
            /* [in] */ long lpdwContextID);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            _VBProject * This,
            /* [retval][out] */ BSTR *lpbstrDescription);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            _VBProject * This,
            /* [in] */ BSTR lpbstrDescription);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Mode )( 
            _VBProject * This,
            /* [retval][out] */ vbext_VBAMode *lpVbaMode);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_References )( 
            _VBProject * This,
            /* [retval][out] */ _References **lppReferences);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _VBProject * This,
            /* [retval][out] */ BSTR *lpbstrName);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _VBProject * This,
            /* [in] */ BSTR lpbstrName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBProject * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            _VBProject * This,
            /* [retval][out] */ _VBProjects **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Protection )( 
            _VBProject * This,
            /* [retval][out] */ vbext_ProjectProtection *lpProtection);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            _VBProject * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBComponents )( 
            _VBProject * This,
            /* [retval][out] */ _VBComponents **lppcReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            _VBProject * This,
            /* [in] */ BSTR FileName);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *MakeCompiledFile )( 
            _VBProject * This);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            _VBProject * This,
            /* [retval][out] */ vbext_ProjectType *lpkind);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            _VBProject * This,
            /* [retval][out] */ BSTR *lpbstrReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BuildFileName )( 
            _VBProject * This,
            /* [retval][out] */ BSTR *lpbstrBldFName);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_BuildFileName )( 
            _VBProject * This,
            /* [in] */ BSTR lpbstrBldFName);
        
        END_INTERFACE
    } _VBProjectVtbl;

    interface _VBProject
    {
        CONST_VTBL struct _VBProjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBProject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBProject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBProject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBProject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBProject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBProject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBProject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBProject_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _VBProject_get_Parent(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppaReturn) ) 


#define _VBProject_get_HelpFile(This,lpbstrHelpFile)	\
    ( (This)->lpVtbl -> get_HelpFile(This,lpbstrHelpFile) ) 

#define _VBProject_put_HelpFile(This,lpbstrHelpFile)	\
    ( (This)->lpVtbl -> put_HelpFile(This,lpbstrHelpFile) ) 

#define _VBProject_get_HelpContextID(This,lpdwContextID)	\
    ( (This)->lpVtbl -> get_HelpContextID(This,lpdwContextID) ) 

#define _VBProject_put_HelpContextID(This,lpdwContextID)	\
    ( (This)->lpVtbl -> put_HelpContextID(This,lpdwContextID) ) 

#define _VBProject_get_Description(This,lpbstrDescription)	\
    ( (This)->lpVtbl -> get_Description(This,lpbstrDescription) ) 

#define _VBProject_put_Description(This,lpbstrDescription)	\
    ( (This)->lpVtbl -> put_Description(This,lpbstrDescription) ) 

#define _VBProject_get_Mode(This,lpVbaMode)	\
    ( (This)->lpVtbl -> get_Mode(This,lpVbaMode) ) 

#define _VBProject_get_References(This,lppReferences)	\
    ( (This)->lpVtbl -> get_References(This,lppReferences) ) 

#define _VBProject_get_Name(This,lpbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,lpbstrName) ) 

#define _VBProject_put_Name(This,lpbstrName)	\
    ( (This)->lpVtbl -> put_Name(This,lpbstrName) ) 

#define _VBProject_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBProject_get_Collection(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lppaReturn) ) 

#define _VBProject_get_Protection(This,lpProtection)	\
    ( (This)->lpVtbl -> get_Protection(This,lpProtection) ) 

#define _VBProject_get_Saved(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_Saved(This,lpfReturn) ) 

#define _VBProject_get_VBComponents(This,lppcReturn)	\
    ( (This)->lpVtbl -> get_VBComponents(This,lppcReturn) ) 


#define _VBProject_SaveAs(This,FileName)	\
    ( (This)->lpVtbl -> SaveAs(This,FileName) ) 

#define _VBProject_MakeCompiledFile(This)	\
    ( (This)->lpVtbl -> MakeCompiledFile(This) ) 

#define _VBProject_get_Type(This,lpkind)	\
    ( (This)->lpVtbl -> get_Type(This,lpkind) ) 

#define _VBProject_get_FileName(This,lpbstrReturn)	\
    ( (This)->lpVtbl -> get_FileName(This,lpbstrReturn) ) 

#define _VBProject_get_BuildFileName(This,lpbstrBldFName)	\
    ( (This)->lpVtbl -> get_BuildFileName(This,lpbstrBldFName) ) 

#define _VBProject_put_BuildFileName(This,lpbstrBldFName)	\
    ( (This)->lpVtbl -> put_BuildFileName(This,lpbstrBldFName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBProject_INTERFACE_DEFINED__ */


#ifndef ___VBProjects_Old_INTERFACE_DEFINED__
#define ___VBProjects_Old_INTERFACE_DEFINED__

/* interface _VBProjects_Old */
/* [object][oleautomation][dual][hidden][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBProjects_Old;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E165-0000-0000-C000-000000000046")
    _VBProjects_Old : public IDispatch
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBProject **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBProjects_OldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBProjects_Old * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBProjects_Old * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBProjects_Old * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBProjects_Old * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBProjects_Old * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBProjects_Old * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBProjects_Old * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBProjects_Old * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBProject **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBProjects_Old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBProjects_Old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBProjects_Old * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBProjects_Old * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        END_INTERFACE
    } _VBProjects_OldVtbl;

    interface _VBProjects_Old
    {
        CONST_VTBL struct _VBProjects_OldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBProjects_Old_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBProjects_Old_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBProjects_Old_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBProjects_Old_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBProjects_Old_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBProjects_Old_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBProjects_Old_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBProjects_Old_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBProjects_Old_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBProjects_Old_get_Parent(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppaReturn) ) 

#define _VBProjects_Old_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBProjects_Old__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBProjects_Old_INTERFACE_DEFINED__ */


#ifndef ___VBProjects_INTERFACE_DEFINED__
#define ___VBProjects_INTERFACE_DEFINED__

/* interface _VBProjects */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBProjects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEE00919-E393-11D1-BB03-00C04FB6C4A6")
    _VBProjects : public _VBProjects_Old
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ vbext_ProjectType Type,
            /* [retval][out] */ _VBProject **lppcReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ _VBProject *lpc) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ _VBProject **lpc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBProjectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBProjects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBProjects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBProjects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBProjects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBProjects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBProjects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBProjects * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBProjects * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBProject **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBProjects * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBProjects * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBProjects * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBProjects * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            _VBProjects * This,
            /* [in] */ vbext_ProjectType Type,
            /* [retval][out] */ _VBProject **lppcReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _VBProjects * This,
            /* [in] */ _VBProject *lpc);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            _VBProjects * This,
            /* [in] */ BSTR bstrPath,
            /* [retval][out] */ _VBProject **lpc);
        
        END_INTERFACE
    } _VBProjectsVtbl;

    interface _VBProjects
    {
        CONST_VTBL struct _VBProjectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBProjects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBProjects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBProjects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBProjects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBProjects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBProjects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBProjects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBProjects_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBProjects_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBProjects_get_Parent(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppaReturn) ) 

#define _VBProjects_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBProjects__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 


#define _VBProjects_Add(This,Type,lppcReturn)	\
    ( (This)->lpVtbl -> Add(This,Type,lppcReturn) ) 

#define _VBProjects_Remove(This,lpc)	\
    ( (This)->lpVtbl -> Remove(This,lpc) ) 

#define _VBProjects_Open(This,bstrPath,lpc)	\
    ( (This)->lpVtbl -> Open(This,bstrPath,lpc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBProjects_INTERFACE_DEFINED__ */


#ifndef __SelectedComponents_INTERFACE_DEFINED__
#define __SelectedComponents_INTERFACE_DEFINED__

/* interface SelectedComponents */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID_SelectedComponents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BE39F3D4-1B13-11D0-887F-00A0C90F2744")
    SelectedComponents : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ int index,
            /* [retval][out] */ _Component **lppcReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _VBProject **lppptReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct SelectedComponentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            SelectedComponents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            SelectedComponents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            SelectedComponents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            SelectedComponents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            SelectedComponents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            SelectedComponents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            SelectedComponents * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            SelectedComponents * This,
            /* [in] */ int index,
            /* [retval][out] */ _Component **lppcReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            SelectedComponents * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            SelectedComponents * This,
            /* [retval][out] */ _VBProject **lppptReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            SelectedComponents * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            SelectedComponents * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        END_INTERFACE
    } SelectedComponentsVtbl;

    interface SelectedComponents
    {
        CONST_VTBL struct SelectedComponentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define SelectedComponents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define SelectedComponents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define SelectedComponents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define SelectedComponents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define SelectedComponents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define SelectedComponents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define SelectedComponents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define SelectedComponents_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define SelectedComponents_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define SelectedComponents_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define SelectedComponents_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define SelectedComponents__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __SelectedComponents_INTERFACE_DEFINED__ */


#ifndef ___Components_INTERFACE_DEFINED__
#define ___Components_INTERFACE_DEFINED__

/* interface _Components */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__Components;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E161-0000-0000-C000-000000000046")
    _Components : public IDispatch
    {
    public:
        virtual /* [hidden][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ _Component **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _VBProject **lppptReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ _Component *Component) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ vbext_ComponentType ComponentType,
            /* [retval][out] */ _Component **lppComponent) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR FileName,
            /* [retval][out] */ _Component **lppComponent) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _ComponentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Components * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Components * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Components * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Components * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Components * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Components * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Components * This,
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
        
        /* [hidden][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _Components * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _Component **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _Components * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _Components * This,
            /* [retval][out] */ _VBProject **lppptReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _Components * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _Components * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _Components * This,
            /* [in] */ _Component *Component);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            _Components * This,
            /* [in] */ vbext_ComponentType ComponentType,
            /* [retval][out] */ _Component **lppComponent);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            _Components * This,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ _Component **lppComponent);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _Components * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        END_INTERFACE
    } _ComponentsVtbl;

    interface _Components
    {
        CONST_VTBL struct _ComponentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Components_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Components_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Components_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Components_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Components_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Components_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Components_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _Components_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _Components_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _Components_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define _Components_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _Components__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _Components_Remove(This,Component)	\
    ( (This)->lpVtbl -> Remove(This,Component) ) 

#define _Components_Add(This,ComponentType,lppComponent)	\
    ( (This)->lpVtbl -> Add(This,ComponentType,lppComponent) ) 

#define _Components_Import(This,FileName,lppComponent)	\
    ( (This)->lpVtbl -> Import(This,FileName,lppComponent) ) 

#define _Components_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___Components_INTERFACE_DEFINED__ */


#ifndef ___VBComponents_Old_INTERFACE_DEFINED__
#define ___VBComponents_Old_INTERFACE_DEFINED__

/* interface _VBComponents_Old */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__VBComponents_Old;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E162-0000-0000-C000-000000000046")
    _VBComponents_Old : public IDispatch
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBComponent **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _VBProject **lppptReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ _VBComponent *VBComponent) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ vbext_ComponentType ComponentType,
            /* [retval][out] */ _VBComponent **lppComponent) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Import( 
            /* [in] */ BSTR FileName,
            /* [retval][out] */ _VBComponent **lppComponent) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBComponents_OldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBComponents_Old * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBComponents_Old * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBComponents_Old * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBComponents_Old * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBComponents_Old * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBComponents_Old * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBComponents_Old * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBComponents_Old * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBComponent **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBComponents_Old * This,
            /* [retval][out] */ _VBProject **lppptReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBComponents_Old * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBComponents_Old * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _VBComponents_Old * This,
            /* [in] */ _VBComponent *VBComponent);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            _VBComponents_Old * This,
            /* [in] */ vbext_ComponentType ComponentType,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            _VBComponents_Old * This,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBComponents_Old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        END_INTERFACE
    } _VBComponents_OldVtbl;

    interface _VBComponents_Old
    {
        CONST_VTBL struct _VBComponents_OldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBComponents_Old_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBComponents_Old_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBComponents_Old_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBComponents_Old_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBComponents_Old_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBComponents_Old_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBComponents_Old_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBComponents_Old_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBComponents_Old_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define _VBComponents_Old_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBComponents_Old__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _VBComponents_Old_Remove(This,VBComponent)	\
    ( (This)->lpVtbl -> Remove(This,VBComponent) ) 

#define _VBComponents_Old_Add(This,ComponentType,lppComponent)	\
    ( (This)->lpVtbl -> Add(This,ComponentType,lppComponent) ) 

#define _VBComponents_Old_Import(This,FileName,lppComponent)	\
    ( (This)->lpVtbl -> Import(This,FileName,lppComponent) ) 

#define _VBComponents_Old_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBComponents_Old_INTERFACE_DEFINED__ */


#ifndef ___VBComponents_INTERFACE_DEFINED__
#define ___VBComponents_INTERFACE_DEFINED__

/* interface _VBComponents */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID__VBComponents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEE0091C-E393-11D1-BB03-00C04FB6C4A6")
    _VBComponents : public _VBComponents_Old
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddCustom( 
            /* [in] */ BSTR ProgId,
            /* [retval][out] */ _VBComponent **lppComponent) = 0;
        
        virtual /* [hidden][id] */ HRESULT STDMETHODCALLTYPE AddMTDesigner( 
            /* [defaultvalue][optional][in] */ long index,
            /* [retval][out] */ _VBComponent **lppComponent) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBComponentsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBComponents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBComponents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBComponents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBComponents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBComponents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBComponents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBComponents * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _VBComponents * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _VBComponent **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _VBComponents * This,
            /* [retval][out] */ _VBProject **lppptReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _VBComponents * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _VBComponents * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _VBComponents * This,
            /* [in] */ _VBComponent *VBComponent);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            _VBComponents * This,
            /* [in] */ vbext_ComponentType ComponentType,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Import )( 
            _VBComponents * This,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBComponents * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddCustom )( 
            _VBComponents * This,
            /* [in] */ BSTR ProgId,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        /* [hidden][id] */ HRESULT ( STDMETHODCALLTYPE *AddMTDesigner )( 
            _VBComponents * This,
            /* [defaultvalue][optional][in] */ long index,
            /* [retval][out] */ _VBComponent **lppComponent);
        
        END_INTERFACE
    } _VBComponentsVtbl;

    interface _VBComponents
    {
        CONST_VTBL struct _VBComponentsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBComponents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBComponents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBComponents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBComponents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBComponents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBComponents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBComponents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBComponents_Item(This,index,lppcReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lppcReturn) ) 

#define _VBComponents_get_Parent(This,lppptReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppptReturn) ) 

#define _VBComponents_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _VBComponents__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _VBComponents_Remove(This,VBComponent)	\
    ( (This)->lpVtbl -> Remove(This,VBComponent) ) 

#define _VBComponents_Add(This,ComponentType,lppComponent)	\
    ( (This)->lpVtbl -> Add(This,ComponentType,lppComponent) ) 

#define _VBComponents_Import(This,FileName,lppComponent)	\
    ( (This)->lpVtbl -> Import(This,FileName,lppComponent) ) 

#define _VBComponents_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 


#define _VBComponents_AddCustom(This,ProgId,lppComponent)	\
    ( (This)->lpVtbl -> AddCustom(This,ProgId,lppComponent) ) 

#define _VBComponents_AddMTDesigner(This,index,lppComponent)	\
    ( (This)->lpVtbl -> AddMTDesigner(This,index,lppComponent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBComponents_INTERFACE_DEFINED__ */


#ifndef ___Component_INTERFACE_DEFINED__
#define ___Component_INTERFACE_DEFINED__

/* interface _Component */
/* [object][oleautomation][dual][hidden][uuid] */ 


EXTERN_C const IID IID__Component;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E163-0000-0000-C000-000000000046")
    _Component : public IDispatch
    {
    public:
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ Components	**lppcReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsDirty( 
            /* [retval][out] */ VARIANT_BOOL *lpfReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_IsDirty( 
            /* [in] */ VARIANT_BOOL lpfReturn) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrReturn) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pbstrReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _ComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Component * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Component * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Component * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Component * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Component * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Component * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Component * This,
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
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _Component * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _Component * This,
            /* [retval][out] */ Components	**lppcReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirty )( 
            _Component * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IsDirty )( 
            _Component * This,
            /* [in] */ VARIANT_BOOL lpfReturn);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _Component * This,
            /* [retval][out] */ BSTR *pbstrReturn);
        
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _Component * This,
            /* [in] */ BSTR pbstrReturn);
        
        END_INTERFACE
    } _ComponentVtbl;

    interface _Component
    {
        CONST_VTBL struct _ComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Component_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Component_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Component_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Component_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Component_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Component_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Component_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _Component_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _Component_get_Parent(This,lppcReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppcReturn) ) 

#define _Component_get_IsDirty(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_IsDirty(This,lpfReturn) ) 

#define _Component_put_IsDirty(This,lpfReturn)	\
    ( (This)->lpVtbl -> put_IsDirty(This,lpfReturn) ) 

#define _Component_get_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrReturn) ) 

#define _Component_put_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> put_Name(This,pbstrReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___Component_INTERFACE_DEFINED__ */


#ifndef ___VBComponent_Old_INTERFACE_DEFINED__
#define ___VBComponent_Old_INTERFACE_DEFINED__

/* interface _VBComponent_Old */
/* [object][oleautomation][dual][hidden][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBComponent_Old;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E164-0000-0000-C000-000000000046")
    _VBComponent_Old : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Saved( 
            /* [retval][out] */ VARIANT_BOOL *lpfReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrReturn) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pbstrReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Designer( 
            /* [retval][out] */ IDispatch **ppDispatch) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodeModule( 
            /* [retval][out] */ _CodeModule **ppVbaModule) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ vbext_ComponentType *pKind) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Export( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _VBComponents **lppcReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_HasOpenDesigner( 
            /* [retval][out] */ VARIANT_BOOL *lpfReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Properties( 
            /* [retval][out] */ _Properties **lpppReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE DesignerWindow( 
            /* [retval][out] */ Window **lppcReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Activate( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBComponent_OldVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBComponent_Old * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBComponent_Old * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBComponent_Old * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBComponent_Old * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBComponent_Old * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBComponent_Old * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBComponent_Old * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            _VBComponent_Old * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _VBComponent_Old * This,
            /* [retval][out] */ BSTR *pbstrReturn);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _VBComponent_Old * This,
            /* [in] */ BSTR pbstrReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Designer )( 
            _VBComponent_Old * This,
            /* [retval][out] */ IDispatch **ppDispatch);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeModule )( 
            _VBComponent_Old * This,
            /* [retval][out] */ _CodeModule **ppVbaModule);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            _VBComponent_Old * This,
            /* [retval][out] */ vbext_ComponentType *pKind);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            _VBComponent_Old * This,
            /* [in] */ BSTR FileName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBComponent_Old * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            _VBComponent_Old * This,
            /* [retval][out] */ _VBComponents **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasOpenDesigner )( 
            _VBComponent_Old * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            _VBComponent_Old * This,
            /* [retval][out] */ _Properties **lpppReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *DesignerWindow )( 
            _VBComponent_Old * This,
            /* [retval][out] */ Window **lppcReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            _VBComponent_Old * This);
        
        END_INTERFACE
    } _VBComponent_OldVtbl;

    interface _VBComponent_Old
    {
        CONST_VTBL struct _VBComponent_OldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBComponent_Old_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBComponent_Old_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBComponent_Old_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBComponent_Old_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBComponent_Old_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBComponent_Old_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBComponent_Old_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBComponent_Old_get_Saved(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_Saved(This,lpfReturn) ) 

#define _VBComponent_Old_get_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrReturn) ) 

#define _VBComponent_Old_put_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> put_Name(This,pbstrReturn) ) 

#define _VBComponent_Old_get_Designer(This,ppDispatch)	\
    ( (This)->lpVtbl -> get_Designer(This,ppDispatch) ) 

#define _VBComponent_Old_get_CodeModule(This,ppVbaModule)	\
    ( (This)->lpVtbl -> get_CodeModule(This,ppVbaModule) ) 

#define _VBComponent_Old_get_Type(This,pKind)	\
    ( (This)->lpVtbl -> get_Type(This,pKind) ) 

#define _VBComponent_Old_Export(This,FileName)	\
    ( (This)->lpVtbl -> Export(This,FileName) ) 

#define _VBComponent_Old_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBComponent_Old_get_Collection(This,lppcReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lppcReturn) ) 

#define _VBComponent_Old_get_HasOpenDesigner(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_HasOpenDesigner(This,lpfReturn) ) 

#define _VBComponent_Old_get_Properties(This,lpppReturn)	\
    ( (This)->lpVtbl -> get_Properties(This,lpppReturn) ) 

#define _VBComponent_Old_DesignerWindow(This,lppcReturn)	\
    ( (This)->lpVtbl -> DesignerWindow(This,lppcReturn) ) 

#define _VBComponent_Old_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBComponent_Old_INTERFACE_DEFINED__ */


#ifndef ___VBComponent_INTERFACE_DEFINED__
#define ___VBComponent_INTERFACE_DEFINED__

/* interface _VBComponent */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__VBComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEE00921-E393-11D1-BB03-00C04FB6C4A6")
    _VBComponent : public _VBComponent_Old
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_DesignerID( 
            /* [retval][out] */ BSTR *pbstrReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _VBComponentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _VBComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _VBComponent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _VBComponent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _VBComponent * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _VBComponent * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _VBComponent * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _VBComponent * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Saved )( 
            _VBComponent * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _VBComponent * This,
            /* [retval][out] */ BSTR *pbstrReturn);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _VBComponent * This,
            /* [in] */ BSTR pbstrReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Designer )( 
            _VBComponent * This,
            /* [retval][out] */ IDispatch **ppDispatch);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeModule )( 
            _VBComponent * This,
            /* [retval][out] */ _CodeModule **ppVbaModule);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            _VBComponent * This,
            /* [retval][out] */ vbext_ComponentType *pKind);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Export )( 
            _VBComponent * This,
            /* [in] */ BSTR FileName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _VBComponent * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            _VBComponent * This,
            /* [retval][out] */ _VBComponents **lppcReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HasOpenDesigner )( 
            _VBComponent * This,
            /* [retval][out] */ VARIANT_BOOL *lpfReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Properties )( 
            _VBComponent * This,
            /* [retval][out] */ _Properties **lpppReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *DesignerWindow )( 
            _VBComponent * This,
            /* [retval][out] */ Window **lppcReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Activate )( 
            _VBComponent * This);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DesignerID )( 
            _VBComponent * This,
            /* [retval][out] */ BSTR *pbstrReturn);
        
        END_INTERFACE
    } _VBComponentVtbl;

    interface _VBComponent
    {
        CONST_VTBL struct _VBComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _VBComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _VBComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _VBComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _VBComponent_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _VBComponent_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _VBComponent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _VBComponent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _VBComponent_get_Saved(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_Saved(This,lpfReturn) ) 

#define _VBComponent_get_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrReturn) ) 

#define _VBComponent_put_Name(This,pbstrReturn)	\
    ( (This)->lpVtbl -> put_Name(This,pbstrReturn) ) 

#define _VBComponent_get_Designer(This,ppDispatch)	\
    ( (This)->lpVtbl -> get_Designer(This,ppDispatch) ) 

#define _VBComponent_get_CodeModule(This,ppVbaModule)	\
    ( (This)->lpVtbl -> get_CodeModule(This,ppVbaModule) ) 

#define _VBComponent_get_Type(This,pKind)	\
    ( (This)->lpVtbl -> get_Type(This,pKind) ) 

#define _VBComponent_Export(This,FileName)	\
    ( (This)->lpVtbl -> Export(This,FileName) ) 

#define _VBComponent_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define _VBComponent_get_Collection(This,lppcReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lppcReturn) ) 

#define _VBComponent_get_HasOpenDesigner(This,lpfReturn)	\
    ( (This)->lpVtbl -> get_HasOpenDesigner(This,lpfReturn) ) 

#define _VBComponent_get_Properties(This,lpppReturn)	\
    ( (This)->lpVtbl -> get_Properties(This,lpppReturn) ) 

#define _VBComponent_DesignerWindow(This,lppcReturn)	\
    ( (This)->lpVtbl -> DesignerWindow(This,lppcReturn) ) 

#define _VBComponent_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 


#define _VBComponent_get_DesignerID(This,pbstrReturn)	\
    ( (This)->lpVtbl -> get_DesignerID(This,pbstrReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___VBComponent_INTERFACE_DEFINED__ */


#ifndef __Property_INTERFACE_DEFINED__
#define __Property_INTERFACE_DEFINED__

/* interface Property */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_Property;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E18C-0000-0000-C000-000000000046")
    Property : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ VARIANT *lppvReturn) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ VARIANT lppvReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_IndexedValue( 
            /* [in] */ VARIANT Index1,
            /* [optional][in] */ VARIANT Index2,
            /* [optional][in] */ VARIANT Index3,
            /* [optional][in] */ VARIANT Index4,
            /* [retval][out] */ VARIANT *lppvReturn) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_IndexedValue( 
            /* [in] */ VARIANT Index1,
            /* [optional][in] */ VARIANT Index2,
            /* [optional][in] */ VARIANT Index3,
            /* [optional][in] */ VARIANT Index4,
            /* [in] */ VARIANT lppvReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumIndices( 
            /* [retval][out] */ short *lpiRetVal) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lpaReturn) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _Properties **lpppReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *lpbstrReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lpaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _Properties **lpppReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [retval][out] */ IUnknown **lppunk) = 0;
        
        virtual /* [helpcontext][propputref][id] */ HRESULT STDMETHODCALLTYPE putref_Object( 
            /* [in] */ IUnknown *lppunk) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct PropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Property * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Property * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Property * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Property * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Property * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Property * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Property * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            Property * This,
            /* [retval][out] */ VARIANT *lppvReturn);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            Property * This,
            /* [in] */ VARIANT lppvReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IndexedValue )( 
            Property * This,
            /* [in] */ VARIANT Index1,
            /* [optional][in] */ VARIANT Index2,
            /* [optional][in] */ VARIANT Index3,
            /* [optional][in] */ VARIANT Index4,
            /* [retval][out] */ VARIANT *lppvReturn);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_IndexedValue )( 
            Property * This,
            /* [in] */ VARIANT Index1,
            /* [optional][in] */ VARIANT Index2,
            /* [optional][in] */ VARIANT Index3,
            /* [optional][in] */ VARIANT Index4,
            /* [in] */ VARIANT lppvReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumIndices )( 
            Property * This,
            /* [retval][out] */ short *lpiRetVal);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            Property * This,
            /* [retval][out] */ VBEApplication **lpaReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            Property * This,
            /* [retval][out] */ _Properties **lpppReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            Property * This,
            /* [retval][out] */ BSTR *lpbstrReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            Property * This,
            /* [retval][out] */ VBE **lpaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            Property * This,
            /* [retval][out] */ _Properties **lpppReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            Property * This,
            /* [retval][out] */ IUnknown **lppunk);
        
        /* [helpcontext][propputref][id] */ HRESULT ( STDMETHODCALLTYPE *putref_Object )( 
            Property * This,
            /* [in] */ IUnknown *lppunk);
        
        END_INTERFACE
    } PropertyVtbl;

    interface Property
    {
        CONST_VTBL struct PropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Property_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Property_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Property_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Property_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Property_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Property_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Property_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Property_get_Value(This,lppvReturn)	\
    ( (This)->lpVtbl -> get_Value(This,lppvReturn) ) 

#define Property_put_Value(This,lppvReturn)	\
    ( (This)->lpVtbl -> put_Value(This,lppvReturn) ) 

#define Property_get_IndexedValue(This,Index1,Index2,Index3,Index4,lppvReturn)	\
    ( (This)->lpVtbl -> get_IndexedValue(This,Index1,Index2,Index3,Index4,lppvReturn) ) 

#define Property_put_IndexedValue(This,Index1,Index2,Index3,Index4,lppvReturn)	\
    ( (This)->lpVtbl -> put_IndexedValue(This,Index1,Index2,Index3,Index4,lppvReturn) ) 

#define Property_get_NumIndices(This,lpiRetVal)	\
    ( (This)->lpVtbl -> get_NumIndices(This,lpiRetVal) ) 

#define Property_get_VBEApplication(This,lpaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lpaReturn) ) 

#define Property_get_Parent(This,lpppReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lpppReturn) ) 

#define Property_get_Name(This,lpbstrReturn)	\
    ( (This)->lpVtbl -> get_Name(This,lpbstrReturn) ) 

#define Property_get_VBE(This,lpaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lpaReturn) ) 

#define Property_get_Collection(This,lpppReturn)	\
    ( (This)->lpVtbl -> get_Collection(This,lpppReturn) ) 

#define Property_get_Object(This,lppunk)	\
    ( (This)->lpVtbl -> get_Object(This,lppunk) ) 

#define Property_putref_Object(This,lppunk)	\
    ( (This)->lpVtbl -> putref_Object(This,lppunk) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Property_INTERFACE_DEFINED__ */


#ifndef ___Properties_INTERFACE_DEFINED__
#define ___Properties_INTERFACE_DEFINED__

/* interface _Properties */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__Properties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E188-0000-0000-C000-000000000046")
    _Properties : public IDispatch
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ Property **lplppReturn) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBEApplication( 
            /* [retval][out] */ VBEApplication **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **lppidReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _PropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _Properties * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _Properties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _Properties * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _Properties * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _Properties * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _Properties * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _Properties * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _Properties * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ Property **lplppReturn);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBEApplication )( 
            _Properties * This,
            /* [retval][out] */ VBEApplication **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _Properties * This,
            /* [retval][out] */ IDispatch **lppidReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _Properties * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _Properties * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _Properties * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        END_INTERFACE
    } _PropertiesVtbl;

    interface _Properties
    {
        CONST_VTBL struct _PropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _Properties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _Properties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _Properties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _Properties_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _Properties_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _Properties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _Properties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _Properties_Item(This,index,lplppReturn)	\
    ( (This)->lpVtbl -> Item(This,index,lplppReturn) ) 

#define _Properties_get_VBEApplication(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBEApplication(This,lppaReturn) ) 

#define _Properties_get_Parent(This,lppidReturn)	\
    ( (This)->lpVtbl -> get_Parent(This,lppidReturn) ) 

#define _Properties_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _Properties__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _Properties_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___Properties_INTERFACE_DEFINED__ */


#ifndef ___AddIns_INTERFACE_DEFINED__
#define ___AddIns_INTERFACE_DEFINED__

/* interface _AddIns */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__AddIns;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA936B62-AC8B-11D1-B6E5-00A0C90F2744")
    _AddIns : public IDispatch
    {
    public:
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ AddIn **lppaddin) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppVBA) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ IDispatch **lppVBA) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *lplReturn) = 0;
        
        virtual /* [restricted][id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **lppiuReturn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Update( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _AddInsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _AddIns * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _AddIns * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _AddIns * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _AddIns * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _AddIns * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _AddIns * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _AddIns * This,
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
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _AddIns * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ AddIn **lppaddin);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _AddIns * This,
            /* [retval][out] */ VBE **lppVBA);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _AddIns * This,
            /* [retval][out] */ IDispatch **lppVBA);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _AddIns * This,
            /* [retval][out] */ long *lplReturn);
        
        /* [restricted][id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _AddIns * This,
            /* [retval][out] */ IUnknown **lppiuReturn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            _AddIns * This);
        
        END_INTERFACE
    } _AddInsVtbl;

    interface _AddIns
    {
        CONST_VTBL struct _AddInsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _AddIns_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _AddIns_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _AddIns_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _AddIns_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _AddIns_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _AddIns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _AddIns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _AddIns_Item(This,index,lppaddin)	\
    ( (This)->lpVtbl -> Item(This,index,lppaddin) ) 

#define _AddIns_get_VBE(This,lppVBA)	\
    ( (This)->lpVtbl -> get_VBE(This,lppVBA) ) 

#define _AddIns_get_Parent(This,lppVBA)	\
    ( (This)->lpVtbl -> get_Parent(This,lppVBA) ) 

#define _AddIns_get_Count(This,lplReturn)	\
    ( (This)->lpVtbl -> get_Count(This,lplReturn) ) 

#define _AddIns__NewEnum(This,lppiuReturn)	\
    ( (This)->lpVtbl -> _NewEnum(This,lppiuReturn) ) 

#define _AddIns_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___AddIns_INTERFACE_DEFINED__ */


#ifndef __AddIn_INTERFACE_DEFINED__
#define __AddIn_INTERFACE_DEFINED__

/* interface AddIn */
/* [object][oleautomation][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_AddIn;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA936B64-AC8B-11D1-B6E5-00A0C90F2744")
    AddIn : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *lpbstr) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR lpbstr) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppVBE) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _AddIns **lppaddins) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgId( 
            /* [retval][out] */ BSTR *lpbstr) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Guid( 
            /* [retval][out] */ BSTR *lpbstr) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Connect( 
            /* [retval][out] */ VARIANT_BOOL *lpfConnect) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Connect( 
            /* [in] */ VARIANT_BOOL lpfConnect) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Object( 
            /* [retval][out] */ IDispatch **lppdisp) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_Object( 
            /* [in] */ IDispatch *lppdisp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct AddInVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            AddIn * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            AddIn * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            AddIn * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            AddIn * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            AddIn * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            AddIn * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            AddIn * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            AddIn * This,
            /* [retval][out] */ BSTR *lpbstr);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            AddIn * This,
            /* [in] */ BSTR lpbstr);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            AddIn * This,
            /* [retval][out] */ VBE **lppVBE);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            AddIn * This,
            /* [retval][out] */ _AddIns **lppaddins);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgId )( 
            AddIn * This,
            /* [retval][out] */ BSTR *lpbstr);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Guid )( 
            AddIn * This,
            /* [retval][out] */ BSTR *lpbstr);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Connect )( 
            AddIn * This,
            /* [retval][out] */ VARIANT_BOOL *lpfConnect);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Connect )( 
            AddIn * This,
            /* [in] */ VARIANT_BOOL lpfConnect);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Object )( 
            AddIn * This,
            /* [retval][out] */ IDispatch **lppdisp);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Object )( 
            AddIn * This,
            /* [in] */ IDispatch *lppdisp);
        
        END_INTERFACE
    } AddInVtbl;

    interface AddIn
    {
        CONST_VTBL struct AddInVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define AddIn_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define AddIn_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define AddIn_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define AddIn_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define AddIn_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define AddIn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define AddIn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define AddIn_get_Description(This,lpbstr)	\
    ( (This)->lpVtbl -> get_Description(This,lpbstr) ) 

#define AddIn_put_Description(This,lpbstr)	\
    ( (This)->lpVtbl -> put_Description(This,lpbstr) ) 

#define AddIn_get_VBE(This,lppVBE)	\
    ( (This)->lpVtbl -> get_VBE(This,lppVBE) ) 

#define AddIn_get_Collection(This,lppaddins)	\
    ( (This)->lpVtbl -> get_Collection(This,lppaddins) ) 

#define AddIn_get_ProgId(This,lpbstr)	\
    ( (This)->lpVtbl -> get_ProgId(This,lpbstr) ) 

#define AddIn_get_Guid(This,lpbstr)	\
    ( (This)->lpVtbl -> get_Guid(This,lpbstr) ) 

#define AddIn_get_Connect(This,lpfConnect)	\
    ( (This)->lpVtbl -> get_Connect(This,lpfConnect) ) 

#define AddIn_put_Connect(This,lpfConnect)	\
    ( (This)->lpVtbl -> put_Connect(This,lpfConnect) ) 

#define AddIn_get_Object(This,lppdisp)	\
    ( (This)->lpVtbl -> get_Object(This,lppdisp) ) 

#define AddIn_put_Object(This,lppdisp)	\
    ( (This)->lpVtbl -> put_Object(This,lppdisp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __AddIn_INTERFACE_DEFINED__ */


#ifndef ___CodeModule_INTERFACE_DEFINED__
#define ___CodeModule_INTERFACE_DEFINED__

/* interface _CodeModule */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][uuid] */ 


EXTERN_C const IID IID__CodeModule;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E16E-0000-0000-C000-000000000046")
    _CodeModule : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _VBComponent **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **retval) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [hidden][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pbstrName) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddFromString( 
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddFromFile( 
            /* [in] */ BSTR FileName) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Lines( 
            /* [in] */ long StartLine,
            /* [in] */ long Count,
            /* [retval][out] */ BSTR *String) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CountOfLines( 
            /* [retval][out] */ long *CountOfLines) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE InsertLines( 
            /* [in] */ long Line,
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE DeleteLines( 
            /* [in] */ long StartLine,
            /* [defaultvalue][optional][in] */ long Count = 1) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE ReplaceLine( 
            /* [in] */ long Line,
            /* [in] */ BSTR String) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcStartLine( 
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcStartLine) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcCountLines( 
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcCountLines) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcBodyLine( 
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcBodyLine) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProcOfLine( 
            /* [in] */ long Line,
            /* [out] */ vbext_ProcKind *ProcKind,
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CountOfDeclarationLines( 
            /* [retval][out] */ long *pDeclCountOfLines) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE CreateEventProc( 
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR ObjectName,
            /* [retval][out] */ long *Line) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Find( 
            /* [in] */ BSTR Target,
            /* [out][in] */ long *StartLine,
            /* [out][in] */ long *StartColumn,
            /* [out][in] */ long *EndLine,
            /* [out][in] */ long *EndColumn,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL WholeWord,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchCase,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL PatternSearch,
            /* [retval][out] */ VARIANT_BOOL *pfFound) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodePane( 
            /* [retval][out] */ _CodePane **CodePane) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _CodeModuleVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _CodeModule * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _CodeModule * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _CodeModule * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _CodeModule * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _CodeModule * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _CodeModule * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _CodeModule * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _CodeModule * This,
            /* [retval][out] */ _VBComponent **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _CodeModule * This,
            /* [retval][out] */ VBE **retval);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            _CodeModule * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [hidden][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            _CodeModule * This,
            /* [in] */ BSTR pbstrName);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddFromString )( 
            _CodeModule * This,
            /* [in] */ BSTR String);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddFromFile )( 
            _CodeModule * This,
            /* [in] */ BSTR FileName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Lines )( 
            _CodeModule * This,
            /* [in] */ long StartLine,
            /* [in] */ long Count,
            /* [retval][out] */ BSTR *String);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CountOfLines )( 
            _CodeModule * This,
            /* [retval][out] */ long *CountOfLines);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *InsertLines )( 
            _CodeModule * This,
            /* [in] */ long Line,
            /* [in] */ BSTR String);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteLines )( 
            _CodeModule * This,
            /* [in] */ long StartLine,
            /* [defaultvalue][optional][in] */ long Count);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *ReplaceLine )( 
            _CodeModule * This,
            /* [in] */ long Line,
            /* [in] */ BSTR String);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcStartLine )( 
            _CodeModule * This,
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcStartLine);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcCountLines )( 
            _CodeModule * This,
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcCountLines);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcBodyLine )( 
            _CodeModule * This,
            /* [in] */ BSTR ProcName,
            /* [in] */ vbext_ProcKind ProcKind,
            /* [retval][out] */ long *ProcBodyLine);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProcOfLine )( 
            _CodeModule * This,
            /* [in] */ long Line,
            /* [out] */ vbext_ProcKind *ProcKind,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CountOfDeclarationLines )( 
            _CodeModule * This,
            /* [retval][out] */ long *pDeclCountOfLines);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEventProc )( 
            _CodeModule * This,
            /* [in] */ BSTR EventName,
            /* [in] */ BSTR ObjectName,
            /* [retval][out] */ long *Line);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Find )( 
            _CodeModule * This,
            /* [in] */ BSTR Target,
            /* [out][in] */ long *StartLine,
            /* [out][in] */ long *StartColumn,
            /* [out][in] */ long *EndLine,
            /* [out][in] */ long *EndColumn,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL WholeWord,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchCase,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL PatternSearch,
            /* [retval][out] */ VARIANT_BOOL *pfFound);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodePane )( 
            _CodeModule * This,
            /* [retval][out] */ _CodePane **CodePane);
        
        END_INTERFACE
    } _CodeModuleVtbl;

    interface _CodeModule
    {
        CONST_VTBL struct _CodeModuleVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _CodeModule_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _CodeModule_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _CodeModule_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _CodeModule_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _CodeModule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _CodeModule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _CodeModule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _CodeModule_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define _CodeModule_get_VBE(This,retval)	\
    ( (This)->lpVtbl -> get_VBE(This,retval) ) 

#define _CodeModule_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define _CodeModule_put_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> put_Name(This,pbstrName) ) 

#define _CodeModule_AddFromString(This,String)	\
    ( (This)->lpVtbl -> AddFromString(This,String) ) 

#define _CodeModule_AddFromFile(This,FileName)	\
    ( (This)->lpVtbl -> AddFromFile(This,FileName) ) 

#define _CodeModule_get_Lines(This,StartLine,Count,String)	\
    ( (This)->lpVtbl -> get_Lines(This,StartLine,Count,String) ) 

#define _CodeModule_get_CountOfLines(This,CountOfLines)	\
    ( (This)->lpVtbl -> get_CountOfLines(This,CountOfLines) ) 

#define _CodeModule_InsertLines(This,Line,String)	\
    ( (This)->lpVtbl -> InsertLines(This,Line,String) ) 

#define _CodeModule_DeleteLines(This,StartLine,Count)	\
    ( (This)->lpVtbl -> DeleteLines(This,StartLine,Count) ) 

#define _CodeModule_ReplaceLine(This,Line,String)	\
    ( (This)->lpVtbl -> ReplaceLine(This,Line,String) ) 

#define _CodeModule_get_ProcStartLine(This,ProcName,ProcKind,ProcStartLine)	\
    ( (This)->lpVtbl -> get_ProcStartLine(This,ProcName,ProcKind,ProcStartLine) ) 

#define _CodeModule_get_ProcCountLines(This,ProcName,ProcKind,ProcCountLines)	\
    ( (This)->lpVtbl -> get_ProcCountLines(This,ProcName,ProcKind,ProcCountLines) ) 

#define _CodeModule_get_ProcBodyLine(This,ProcName,ProcKind,ProcBodyLine)	\
    ( (This)->lpVtbl -> get_ProcBodyLine(This,ProcName,ProcKind,ProcBodyLine) ) 

#define _CodeModule_get_ProcOfLine(This,Line,ProcKind,pbstrName)	\
    ( (This)->lpVtbl -> get_ProcOfLine(This,Line,ProcKind,pbstrName) ) 

#define _CodeModule_get_CountOfDeclarationLines(This,pDeclCountOfLines)	\
    ( (This)->lpVtbl -> get_CountOfDeclarationLines(This,pDeclCountOfLines) ) 

#define _CodeModule_CreateEventProc(This,EventName,ObjectName,Line)	\
    ( (This)->lpVtbl -> CreateEventProc(This,EventName,ObjectName,Line) ) 

#define _CodeModule_Find(This,Target,StartLine,StartColumn,EndLine,EndColumn,WholeWord,MatchCase,PatternSearch,pfFound)	\
    ( (This)->lpVtbl -> Find(This,Target,StartLine,StartColumn,EndLine,EndColumn,WholeWord,MatchCase,PatternSearch,pfFound) ) 

#define _CodeModule_get_CodePane(This,CodePane)	\
    ( (This)->lpVtbl -> get_CodePane(This,CodePane) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___CodeModule_INTERFACE_DEFINED__ */


#ifndef ___CodePanes_INTERFACE_DEFINED__
#define ___CodePanes_INTERFACE_DEFINED__

/* interface _CodePanes */
/* [object][oleautomation][nonextensible][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__CodePanes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E172-0000-0000-C000-000000000046")
    _CodePanes : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ VBE **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **retval) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ _CodePane **CodePane) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **ppenum) = 0;
        
        virtual /* [hidden][propget][id] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ _CodePane **CodePane) = 0;
        
        virtual /* [hidden][propput][id] */ HRESULT STDMETHODCALLTYPE put_Current( 
            /* [in] */ _CodePane *CodePane) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _CodePanesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _CodePanes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _CodePanes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _CodePanes * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _CodePanes * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _CodePanes * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _CodePanes * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _CodePanes * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _CodePanes * This,
            /* [retval][out] */ VBE **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _CodePanes * This,
            /* [retval][out] */ VBE **retval);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _CodePanes * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ _CodePane **CodePane);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _CodePanes * This,
            /* [retval][out] */ long *Count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _CodePanes * This,
            /* [retval][out] */ IUnknown **ppenum);
        
        /* [hidden][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            _CodePanes * This,
            /* [retval][out] */ _CodePane **CodePane);
        
        /* [hidden][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Current )( 
            _CodePanes * This,
            /* [in] */ _CodePane *CodePane);
        
        END_INTERFACE
    } _CodePanesVtbl;

    interface _CodePanes
    {
        CONST_VTBL struct _CodePanesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _CodePanes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _CodePanes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _CodePanes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _CodePanes_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _CodePanes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _CodePanes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _CodePanes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _CodePanes_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define _CodePanes_get_VBE(This,retval)	\
    ( (This)->lpVtbl -> get_VBE(This,retval) ) 

#define _CodePanes_Item(This,index,CodePane)	\
    ( (This)->lpVtbl -> Item(This,index,CodePane) ) 

#define _CodePanes_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define _CodePanes__NewEnum(This,ppenum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppenum) ) 

#define _CodePanes_get_Current(This,CodePane)	\
    ( (This)->lpVtbl -> get_Current(This,CodePane) ) 

#define _CodePanes_put_Current(This,CodePane)	\
    ( (This)->lpVtbl -> put_Current(This,CodePane) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___CodePanes_INTERFACE_DEFINED__ */


#ifndef ___CodePane_INTERFACE_DEFINED__
#define ___CodePane_INTERFACE_DEFINED__

/* interface _CodePane */
/* [object][oleautomation][nonextensible][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID__CodePane;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E176-0000-0000-C000-000000000046")
    _CodePane : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _CodePanes **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ Window **retval) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE GetSelection( 
            /* [out] */ long *StartLine,
            /* [out] */ long *StartColumn,
            /* [out] */ long *EndLine,
            /* [out] */ long *EndColumn) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE SetSelection( 
            /* [in] */ long StartLine,
            /* [in] */ long StartColumn,
            /* [in] */ long EndLine,
            /* [in] */ long EndColumn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_TopLine( 
            /* [retval][out] */ long *TopLine) = 0;
        
        virtual /* [helpcontext][propput][id] */ HRESULT STDMETHODCALLTYPE put_TopLine( 
            /* [in] */ long TopLine) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CountOfVisibleLines( 
            /* [retval][out] */ long *CountOfVisibleLines) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodeModule( 
            /* [retval][out] */ _CodeModule **CodeModule) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_CodePaneView( 
            /* [retval][out] */ vbext_CodePaneview *pCodePaneview) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _CodePaneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _CodePane * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _CodePane * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _CodePane * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _CodePane * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _CodePane * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _CodePane * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _CodePane * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            _CodePane * This,
            /* [retval][out] */ _CodePanes **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _CodePane * This,
            /* [retval][out] */ VBE **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            _CodePane * This,
            /* [retval][out] */ Window **retval);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *GetSelection )( 
            _CodePane * This,
            /* [out] */ long *StartLine,
            /* [out] */ long *StartColumn,
            /* [out] */ long *EndLine,
            /* [out] */ long *EndColumn);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *SetSelection )( 
            _CodePane * This,
            /* [in] */ long StartLine,
            /* [in] */ long StartColumn,
            /* [in] */ long EndLine,
            /* [in] */ long EndColumn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TopLine )( 
            _CodePane * This,
            /* [retval][out] */ long *TopLine);
        
        /* [helpcontext][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TopLine )( 
            _CodePane * This,
            /* [in] */ long TopLine);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CountOfVisibleLines )( 
            _CodePane * This,
            /* [retval][out] */ long *CountOfVisibleLines);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodeModule )( 
            _CodePane * This,
            /* [retval][out] */ _CodeModule **CodeModule);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            _CodePane * This);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CodePaneView )( 
            _CodePane * This,
            /* [retval][out] */ vbext_CodePaneview *pCodePaneview);
        
        END_INTERFACE
    } _CodePaneVtbl;

    interface _CodePane
    {
        CONST_VTBL struct _CodePaneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _CodePane_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _CodePane_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _CodePane_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _CodePane_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _CodePane_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _CodePane_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _CodePane_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _CodePane_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 

#define _CodePane_get_VBE(This,retval)	\
    ( (This)->lpVtbl -> get_VBE(This,retval) ) 

#define _CodePane_get_Window(This,retval)	\
    ( (This)->lpVtbl -> get_Window(This,retval) ) 

#define _CodePane_GetSelection(This,StartLine,StartColumn,EndLine,EndColumn)	\
    ( (This)->lpVtbl -> GetSelection(This,StartLine,StartColumn,EndLine,EndColumn) ) 

#define _CodePane_SetSelection(This,StartLine,StartColumn,EndLine,EndColumn)	\
    ( (This)->lpVtbl -> SetSelection(This,StartLine,StartColumn,EndLine,EndColumn) ) 

#define _CodePane_get_TopLine(This,TopLine)	\
    ( (This)->lpVtbl -> get_TopLine(This,TopLine) ) 

#define _CodePane_put_TopLine(This,TopLine)	\
    ( (This)->lpVtbl -> put_TopLine(This,TopLine) ) 

#define _CodePane_get_CountOfVisibleLines(This,CountOfVisibleLines)	\
    ( (This)->lpVtbl -> get_CountOfVisibleLines(This,CountOfVisibleLines) ) 

#define _CodePane_get_CodeModule(This,CodeModule)	\
    ( (This)->lpVtbl -> get_CodeModule(This,CodeModule) ) 

#define _CodePane_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define _CodePane_get_CodePaneView(This,pCodePaneview)	\
    ( (This)->lpVtbl -> get_CodePaneView(This,pCodePaneview) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___CodePane_INTERFACE_DEFINED__ */


#ifndef ___References_INTERFACE_DEFINED__
#define ___References_INTERFACE_DEFINED__

/* interface _References */
/* [object][oleautomation][nonextensible][dual][hidden][helpcontext][uuid] */ 


EXTERN_C const IID IID__References;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E17A-0000-0000-C000-000000000046")
    _References : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Parent( 
            /* [retval][out] */ _VBProject **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **retval) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Item( 
            /* [in] */ VARIANT index,
            /* [retval][out] */ Reference **Reference) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE _NewEnum( 
            /* [retval][out] */ IUnknown **ppenum) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddFromGuid( 
            /* [in] */ BSTR Guid,
            /* [in] */ long Major,
            /* [in] */ long Minor,
            /* [retval][out] */ Reference **Reference) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE AddFromFile( 
            /* [in] */ BSTR FileName,
            /* [retval][out] */ Reference **Reference) = 0;
        
        virtual /* [helpcontext][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ Reference *Reference) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct _ReferencesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _References * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _References * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _References * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _References * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _References * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _References * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _References * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Parent )( 
            _References * This,
            /* [retval][out] */ _VBProject **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            _References * This,
            /* [retval][out] */ VBE **retval);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Item )( 
            _References * This,
            /* [in] */ VARIANT index,
            /* [retval][out] */ Reference **Reference);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            _References * This,
            /* [retval][out] */ long *Count);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *_NewEnum )( 
            _References * This,
            /* [retval][out] */ IUnknown **ppenum);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddFromGuid )( 
            _References * This,
            /* [in] */ BSTR Guid,
            /* [in] */ long Major,
            /* [in] */ long Minor,
            /* [retval][out] */ Reference **Reference);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *AddFromFile )( 
            _References * This,
            /* [in] */ BSTR FileName,
            /* [retval][out] */ Reference **Reference);
        
        /* [helpcontext][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            _References * This,
            /* [in] */ Reference *Reference);
        
        END_INTERFACE
    } _ReferencesVtbl;

    interface _References
    {
        CONST_VTBL struct _ReferencesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _References_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _References_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _References_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _References_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _References_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _References_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _References_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define _References_get_Parent(This,retval)	\
    ( (This)->lpVtbl -> get_Parent(This,retval) ) 

#define _References_get_VBE(This,retval)	\
    ( (This)->lpVtbl -> get_VBE(This,retval) ) 

#define _References_Item(This,index,Reference)	\
    ( (This)->lpVtbl -> Item(This,index,Reference) ) 

#define _References_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define _References__NewEnum(This,ppenum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppenum) ) 

#define _References_AddFromGuid(This,Guid,Major,Minor,Reference)	\
    ( (This)->lpVtbl -> AddFromGuid(This,Guid,Major,Minor,Reference) ) 

#define _References_AddFromFile(This,FileName,Reference)	\
    ( (This)->lpVtbl -> AddFromFile(This,FileName,Reference) ) 

#define _References_Remove(This,Reference)	\
    ( (This)->lpVtbl -> Remove(This,Reference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ___References_INTERFACE_DEFINED__ */


#ifndef __Reference_INTERFACE_DEFINED__
#define __Reference_INTERFACE_DEFINED__

/* interface Reference */
/* [object][oleautomation][nonextensible][dual][helpcontext][uuid] */ 


EXTERN_C const IID IID_Reference;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0002E17E-0000-0000-C000-000000000046")
    Reference : public IDispatch
    {
    public:
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Collection( 
            /* [retval][out] */ _References **retval) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_VBE( 
            /* [retval][out] */ VBE **lppaReturn) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Guid( 
            /* [retval][out] */ BSTR *pbstrGuid) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Major( 
            /* [retval][out] */ long *pMajor) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Minor( 
            /* [retval][out] */ long *pMinor) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullPath( 
            /* [retval][out] */ BSTR *pbstrLocation) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_BuiltIn( 
            /* [retval][out] */ VARIANT_BOOL *pfIsDefault) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsBroken( 
            /* [retval][out] */ VARIANT_BOOL *pfIsBroken) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ vbext_RefKind *pKind) = 0;
        
        virtual /* [helpcontext][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ReferenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Reference * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Reference * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Reference * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Reference * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Reference * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Reference * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Reference * This,
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
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Collection )( 
            Reference * This,
            /* [retval][out] */ _References **retval);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_VBE )( 
            Reference * This,
            /* [retval][out] */ VBE **lppaReturn);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            Reference * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Guid )( 
            Reference * This,
            /* [retval][out] */ BSTR *pbstrGuid);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Major )( 
            Reference * This,
            /* [retval][out] */ long *pMajor);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Minor )( 
            Reference * This,
            /* [retval][out] */ long *pMinor);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullPath )( 
            Reference * This,
            /* [retval][out] */ BSTR *pbstrLocation);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltIn )( 
            Reference * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsDefault);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsBroken )( 
            Reference * This,
            /* [retval][out] */ VARIANT_BOOL *pfIsBroken);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            Reference * This,
            /* [retval][out] */ vbext_RefKind *pKind);
        
        /* [helpcontext][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            Reference * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        END_INTERFACE
    } ReferenceVtbl;

    interface Reference
    {
        CONST_VTBL struct ReferenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Reference_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Reference_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Reference_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Reference_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Reference_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Reference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Reference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Reference_get_Collection(This,retval)	\
    ( (This)->lpVtbl -> get_Collection(This,retval) ) 

#define Reference_get_VBE(This,lppaReturn)	\
    ( (This)->lpVtbl -> get_VBE(This,lppaReturn) ) 

#define Reference_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define Reference_get_Guid(This,pbstrGuid)	\
    ( (This)->lpVtbl -> get_Guid(This,pbstrGuid) ) 

#define Reference_get_Major(This,pMajor)	\
    ( (This)->lpVtbl -> get_Major(This,pMajor) ) 

#define Reference_get_Minor(This,pMinor)	\
    ( (This)->lpVtbl -> get_Minor(This,pMinor) ) 

#define Reference_get_FullPath(This,pbstrLocation)	\
    ( (This)->lpVtbl -> get_FullPath(This,pbstrLocation) ) 

#define Reference_get_BuiltIn(This,pfIsDefault)	\
    ( (This)->lpVtbl -> get_BuiltIn(This,pfIsDefault) ) 

#define Reference_get_IsBroken(This,pfIsBroken)	\
    ( (This)->lpVtbl -> get_IsBroken(This,pfIsBroken) ) 

#define Reference_get_Type(This,pKind)	\
    ( (This)->lpVtbl -> get_Type(This,pKind) ) 

#define Reference_get_Description(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Description(This,pbstrName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Reference_INTERFACE_DEFINED__ */


#ifndef ___dispReferences_Events_DISPINTERFACE_DEFINED__
#define ___dispReferences_Events_DISPINTERFACE_DEFINED__

/* dispinterface _dispReferences_Events */
/* [nonextensible][hidden][helpcontext][uuid] */ 


EXTERN_C const IID DIID__dispReferences_Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CDDE3804-2064-11CF-867F-00AA005FF34A")
    _dispReferences_Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _dispReferences_EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _dispReferences_Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _dispReferences_Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _dispReferences_Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _dispReferences_Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _dispReferences_Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _dispReferences_Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _dispReferences_Events * This,
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
    } _dispReferences_EventsVtbl;

    interface _dispReferences_Events
    {
        CONST_VTBL struct _dispReferences_EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _dispReferences_Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _dispReferences_Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _dispReferences_Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _dispReferences_Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _dispReferences_Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _dispReferences_Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _dispReferences_Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___dispReferences_Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VBEWindows;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E185-0000-0000-C000-000000000046")
VBEWindows;
#endif

EXTERN_C const CLSID CLSID_LinkedVBEWindows;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E187-0000-0000-C000-000000000046")
LinkedVBEWindows;
#endif

EXTERN_C const CLSID CLSID_ReferencesEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E119-0000-0000-C000-000000000046")
ReferencesEvents;
#endif

EXTERN_C const CLSID CLSID_CommandBarEvents;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E132-0000-0000-C000-000000000046")
CommandBarEvents;
#endif

EXTERN_C const CLSID CLSID_ProjectTemplate;

#ifdef __cplusplus

class DECLSPEC_UUID("32CDF9E0-1602-11CE-BFDC-08002B2B8CDA")
ProjectTemplate;
#endif

EXTERN_C const CLSID CLSID_VBProject;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E169-0000-0000-C000-000000000046")
VBProject;
#endif

EXTERN_C const CLSID CLSID_VBProjects;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E101-0000-0000-C000-000000000046")
VBProjects;
#endif

EXTERN_C const CLSID CLSID_Components;

#ifdef __cplusplus

class DECLSPEC_UUID("BE39F3D6-1B13-11D0-887F-00A0C90F2744")
Components;
#endif

EXTERN_C const CLSID CLSID_VBComponents;

#ifdef __cplusplus

class DECLSPEC_UUID("BE39F3D7-1B13-11D0-887F-00A0C90F2744")
VBComponents;
#endif

EXTERN_C const CLSID CLSID_Component;

#ifdef __cplusplus

class DECLSPEC_UUID("BE39F3D8-1B13-11D0-887F-00A0C90F2744")
Component;
#endif

EXTERN_C const CLSID CLSID_VBComponent;

#ifdef __cplusplus

class DECLSPEC_UUID("BE39F3DA-1B13-11D0-887F-00A0C90F2744")
VBComponent;
#endif

EXTERN_C const CLSID CLSID_Properties;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E18B-0000-0000-C000-000000000046")
Properties;
#endif

EXTERN_C const CLSID CLSID_Addins;

#ifdef __cplusplus

class DECLSPEC_UUID("DA936B63-AC8B-11D1-B6E5-00A0C90F2744")
Addins;
#endif

EXTERN_C const CLSID CLSID_CodeModule;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E170-0000-0000-C000-000000000046")
CodeModule;
#endif

EXTERN_C const CLSID CLSID_CodePanes;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E174-0000-0000-C000-000000000046")
CodePanes;
#endif

EXTERN_C const CLSID CLSID_CodePane;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E178-0000-0000-C000-000000000046")
CodePane;
#endif

EXTERN_C const CLSID CLSID_References;

#ifdef __cplusplus

class DECLSPEC_UUID("0002E17C-0000-0000-C000-000000000046")
References;
#endif
#endif /* __VBIDE_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


