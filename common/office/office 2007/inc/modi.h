

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Oct 06 11:05:17 2013
 */
/* Compiler settings for modi.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
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


#ifndef __modi_h__
#define __modi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMiFont_FWD_DEFINED__
#define __IMiFont_FWD_DEFINED__
typedef interface IMiFont IMiFont;

#endif 	/* __IMiFont_FWD_DEFINED__ */


#ifndef __IMiRect_FWD_DEFINED__
#define __IMiRect_FWD_DEFINED__
typedef interface IMiRect IMiRect;

#endif 	/* __IMiRect_FWD_DEFINED__ */


#ifndef __IMiRects_FWD_DEFINED__
#define __IMiRects_FWD_DEFINED__
typedef interface IMiRects IMiRects;

#endif 	/* __IMiRects_FWD_DEFINED__ */


#ifndef __IWord_FWD_DEFINED__
#define __IWord_FWD_DEFINED__
typedef interface IWord IWord;

#endif 	/* __IWord_FWD_DEFINED__ */


#ifndef __IWords_FWD_DEFINED__
#define __IWords_FWD_DEFINED__
typedef interface IWords IWords;

#endif 	/* __IWords_FWD_DEFINED__ */


#ifndef __ILayout_FWD_DEFINED__
#define __ILayout_FWD_DEFINED__
typedef interface ILayout ILayout;

#endif 	/* __ILayout_FWD_DEFINED__ */


#ifndef __IImage_FWD_DEFINED__
#define __IImage_FWD_DEFINED__
typedef interface IImage IImage;

#endif 	/* __IImage_FWD_DEFINED__ */


#ifndef __IImages_FWD_DEFINED__
#define __IImages_FWD_DEFINED__
typedef interface IImages IImages;

#endif 	/* __IImages_FWD_DEFINED__ */


#ifndef __IDocument_FWD_DEFINED__
#define __IDocument_FWD_DEFINED__
typedef interface IDocument IDocument;

#endif 	/* __IDocument_FWD_DEFINED__ */


#ifndef ___IDocumentEvents_FWD_DEFINED__
#define ___IDocumentEvents_FWD_DEFINED__
typedef interface _IDocumentEvents _IDocumentEvents;

#endif 	/* ___IDocumentEvents_FWD_DEFINED__ */


#ifndef ___IImageEvents_FWD_DEFINED__
#define ___IImageEvents_FWD_DEFINED__
typedef interface _IImageEvents _IImageEvents;

#endif 	/* ___IImageEvents_FWD_DEFINED__ */


#ifndef __IMiSelectRect_FWD_DEFINED__
#define __IMiSelectRect_FWD_DEFINED__
typedef interface IMiSelectRect IMiSelectRect;

#endif 	/* __IMiSelectRect_FWD_DEFINED__ */


#ifndef __IMiSelectRects_FWD_DEFINED__
#define __IMiSelectRects_FWD_DEFINED__
typedef interface IMiSelectRects IMiSelectRects;

#endif 	/* __IMiSelectRects_FWD_DEFINED__ */


#ifndef __IMiSelectableItem_FWD_DEFINED__
#define __IMiSelectableItem_FWD_DEFINED__
typedef interface IMiSelectableItem IMiSelectableItem;

#endif 	/* __IMiSelectableItem_FWD_DEFINED__ */


#ifndef __IMiSelectableImage_FWD_DEFINED__
#define __IMiSelectableImage_FWD_DEFINED__
typedef interface IMiSelectableImage IMiSelectableImage;

#endif 	/* __IMiSelectableImage_FWD_DEFINED__ */


#ifndef __IMiSearchCallback_FWD_DEFINED__
#define __IMiSearchCallback_FWD_DEFINED__
typedef interface IMiSearchCallback IMiSearchCallback;

#endif 	/* __IMiSearchCallback_FWD_DEFINED__ */


#ifndef __IMiDocView_FWD_DEFINED__
#define __IMiDocView_FWD_DEFINED__
typedef interface IMiDocView IMiDocView;

#endif 	/* __IMiDocView_FWD_DEFINED__ */


#ifndef ___IMiDocViewEvents_FWD_DEFINED__
#define ___IMiDocViewEvents_FWD_DEFINED__
typedef interface _IMiDocViewEvents _IMiDocViewEvents;

#endif 	/* ___IMiDocViewEvents_FWD_DEFINED__ */


#ifndef __IMiDocSearch_FWD_DEFINED__
#define __IMiDocSearch_FWD_DEFINED__
typedef interface IMiDocSearch IMiDocSearch;

#endif 	/* __IMiDocSearch_FWD_DEFINED__ */


#ifndef __Document_FWD_DEFINED__
#define __Document_FWD_DEFINED__

#ifdef __cplusplus
typedef class Document Document;
#else
typedef struct Document Document;
#endif /* __cplusplus */

#endif 	/* __Document_FWD_DEFINED__ */


#ifndef __Layout_FWD_DEFINED__
#define __Layout_FWD_DEFINED__

#ifdef __cplusplus
typedef class Layout Layout;
#else
typedef struct Layout Layout;
#endif /* __cplusplus */

#endif 	/* __Layout_FWD_DEFINED__ */


#ifndef __Image_FWD_DEFINED__
#define __Image_FWD_DEFINED__

#ifdef __cplusplus
typedef class Image Image;
#else
typedef struct Image Image;
#endif /* __cplusplus */

#endif 	/* __Image_FWD_DEFINED__ */


#ifndef __Word_FWD_DEFINED__
#define __Word_FWD_DEFINED__

#ifdef __cplusplus
typedef class Word Word;
#else
typedef struct Word Word;
#endif /* __cplusplus */

#endif 	/* __Word_FWD_DEFINED__ */


#ifndef __MiFont_FWD_DEFINED__
#define __MiFont_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiFont MiFont;
#else
typedef struct MiFont MiFont;
#endif /* __cplusplus */

#endif 	/* __MiFont_FWD_DEFINED__ */


#ifndef __Words_FWD_DEFINED__
#define __Words_FWD_DEFINED__

#ifdef __cplusplus
typedef class Words Words;
#else
typedef struct Words Words;
#endif /* __cplusplus */

#endif 	/* __Words_FWD_DEFINED__ */


#ifndef __Images_FWD_DEFINED__
#define __Images_FWD_DEFINED__

#ifdef __cplusplus
typedef class Images Images;
#else
typedef struct Images Images;
#endif /* __cplusplus */

#endif 	/* __Images_FWD_DEFINED__ */


#ifndef __MiRect_FWD_DEFINED__
#define __MiRect_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiRect MiRect;
#else
typedef struct MiRect MiRect;
#endif /* __cplusplus */

#endif 	/* __MiRect_FWD_DEFINED__ */


#ifndef __MiRects_FWD_DEFINED__
#define __MiRects_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiRects MiRects;
#else
typedef struct MiRects MiRects;
#endif /* __cplusplus */

#endif 	/* __MiRects_FWD_DEFINED__ */


#ifndef __MiDocView_FWD_DEFINED__
#define __MiDocView_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiDocView MiDocView;
#else
typedef struct MiDocView MiDocView;
#endif /* __cplusplus */

#endif 	/* __MiDocView_FWD_DEFINED__ */


#ifndef __MiDocSearch_FWD_DEFINED__
#define __MiDocSearch_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiDocSearch MiDocSearch;
#else
typedef struct MiDocSearch MiDocSearch;
#endif /* __cplusplus */

#endif 	/* __MiDocSearch_FWD_DEFINED__ */


#ifndef __MiSelectRect_FWD_DEFINED__
#define __MiSelectRect_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiSelectRect MiSelectRect;
#else
typedef struct MiSelectRect MiSelectRect;
#endif /* __cplusplus */

#endif 	/* __MiSelectRect_FWD_DEFINED__ */


#ifndef __MiSelectRects_FWD_DEFINED__
#define __MiSelectRects_FWD_DEFINED__

#ifdef __cplusplus
typedef class MiSelectRects MiSelectRects;
#else
typedef struct MiSelectRects MiSelectRects;
#endif /* __cplusplus */

#endif 	/* __MiSelectRects_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MODI_LIBRARY_DEFINED__
#define __MODI_LIBRARY_DEFINED__

/* library MODI */
/* [custom][custom][custom][helpstring][version][uuid] */ 




















typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0001
    {
        miFFamily_Helvetica	= 1,
        miFFamily_Times	= 2,
        miFFamily_Century	= 3,
        miFFamily_TimesCentury	= 4,
        miFFamily_HelveticaCentury	= 5,
        miFFamily_DEFAULT	= 6
    } 	MiFONT_FAMILY;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0002
    {
        miFFace_ROMAN	= 1,
        miFFace_ITALIC	= 2,
        miFFace_BOLD	= 3,
        miFFace_BOLD_ITALIC	= 4
    } 	MiFONT_FACE_STYLE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0003
    {
        miFSerifSANS	= 1,
        miFSerifTHIN	= 2,
        miFSerifSQ	= 3,
        miFSerifRND	= 4,
        miFSerifSTYLE_UNKNOWN	= 5
    } 	MiFONT_SERIF_STYLE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0004
    {
        miTHUMB_SIZE_TINY	= 0,
        miTHUMB_SIZE_SMALL	= 1,
        miTHUMB_SIZE_MEDIUM	= 2,
        miTHUMB_SIZE_LARGE	= 3,
        miTHUMB_SIZE_MAXIMUM	= 3
    } 	MiTHUMBNAIL_SIZE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0005
    {
        miCOMP_LEVEL_LOW	= 0,
        miCOMP_LEVEL_MEDIUM	= 1,
        miCOMP_LEVEL_HIGH	= 2
    } 	MiCOMP_LEVEL;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0006
    {
        miCOMP_UNKNOWN	= 0,
        miCOMP_TIFF_NONE	= 1,
        miCOMP_TIFF_CCITT1D	= 2,
        miCOMP_TIFF_CCITT3	= 3,
        miCOMP_TIFF_CCITT4	= 4,
        miCOMP_TIFF_LZW	= 5,
        miCOMP_TIFF_JPEG6	= 6,
        miCOMP_TIFF_JPEG	= 7,
        miCOMP_TIFF_PACK	= 32773,
        miCOMP_MODI_BLC	= 34718,
        miCOMP_MODI_VECTOR	= 34719,
        miCOMP_MODI_PTC	= 34720
    } 	MiCOMP_TYPE;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0007
    {
        miFILE_FORMAT_TIFF	= 1,
        miFILE_FORMAT_TIFF_LOSSLESS	= 2,
        miFILE_FORMAT_MDI	= 4,
        miFILE_FORMAT_DEFAULTVALUE	= 0xffffffff
    } 	MiFILE_FORMAT;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0008
    {
        miPRINT_ACTUALSIZE	= 0,
        miPRINT_PAGE	= 1
    } 	MiPRINT_FITMODES;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0009
    {
        miLANG_CHINESE_SIMPLIFIED	= 2052,
        miLANG_CHINESE_TRADITIONAL	= 1028,
        miLANG_CZECH	= 5,
        miLANG_DANISH	= 6,
        miLANG_DUTCH	= 19,
        miLANG_ENGLISH	= 9,
        miLANG_FINNISH	= 11,
        miLANG_FRENCH	= 12,
        miLANG_GERMAN	= 7,
        miLANG_GREEK	= 8,
        miLANG_HUNGARIAN	= 14,
        miLANG_ITALIAN	= 16,
        miLANG_JAPANESE	= 17,
        miLANG_KOREAN	= 18,
        miLANG_NORWEGIAN	= 20,
        miLANG_POLISH	= 21,
        miLANG_PORTUGUESE	= 22,
        miLANG_RUSSIAN	= 25,
        miLANG_SPANISH	= 10,
        miLANG_SWEDISH	= 29,
        miLANG_TURKISH	= 31,
        miLANG_SYSDEFAULT	= 2048
    } 	MiLANGUAGES;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0010
    {
        miASTATE_NONE	= 0,
        miASTATE_PAN	= 1,
        miASTATE_ZOOM	= 2,
        miASTATE_AnntSELECT	= 3,
        miASTATE_HIDDEN	= 4,
        miASTATE_SELECT	= 5
    } 	MiActionState;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0011
    {
        miDOCVIEWMODE_CONTINOUSPAGEVIEW	= 0,
        miDOCVIEWMODE_SINGLEPAGEVIEW	= 1,
        miDOCVIEWMODE_TWOCOLUMNS_CONTINOUSPAGEVIEW	= 4
    } 	MiDocviewMode;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0012
    {
        miVIEWLAYER_RICHINK	= 0
    } 	MiVIEWLAYER;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_modi_0000_0000_0013
    {
        miFree	= 0,
        miByWidth	= 1,
        miByHeight	= 2,
        miByWindow	= 3,
        miByTextWidth	= 4
    } 	MiFITMODE;


EXTERN_C const IID LIBID_MODI;

#ifndef __IMiFont_INTERFACE_DEFINED__
#define __IMiFont_INTERFACE_DEFINED__

/* interface IMiFont */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiFont;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1FFC9A7B-7606-4C97-8119-78673E9D4821")
    IMiFont : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Family( 
            /* [retval][out] */ MiFONT_FAMILY *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FaceStyle( 
            /* [retval][out] */ MiFONT_FACE_STYLE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SerifStyle( 
            /* [retval][out] */ MiFONT_SERIF_STYLE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FontSize( 
            /* [retval][out] */ short *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiFontVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiFont * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiFont * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiFont * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiFont * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiFont * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiFont * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiFont * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Family )( 
            IMiFont * This,
            /* [retval][out] */ MiFONT_FAMILY *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FaceStyle )( 
            IMiFont * This,
            /* [retval][out] */ MiFONT_FACE_STYLE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SerifStyle )( 
            IMiFont * This,
            /* [retval][out] */ MiFONT_SERIF_STYLE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontSize )( 
            IMiFont * This,
            /* [retval][out] */ short *pVal);
        
        END_INTERFACE
    } IMiFontVtbl;

    interface IMiFont
    {
        CONST_VTBL struct IMiFontVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiFont_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiFont_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiFont_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiFont_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiFont_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiFont_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiFont_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiFont_get_Family(This,pVal)	\
    ( (This)->lpVtbl -> get_Family(This,pVal) ) 

#define IMiFont_get_FaceStyle(This,pVal)	\
    ( (This)->lpVtbl -> get_FaceStyle(This,pVal) ) 

#define IMiFont_get_SerifStyle(This,pVal)	\
    ( (This)->lpVtbl -> get_SerifStyle(This,pVal) ) 

#define IMiFont_get_FontSize(This,pVal)	\
    ( (This)->lpVtbl -> get_FontSize(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiFont_INTERFACE_DEFINED__ */


#ifndef __IMiRect_INTERFACE_DEFINED__
#define __IMiRect_INTERFACE_DEFINED__

/* interface IMiRect */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("87D6FB47-7CFA-4DB3-82CD-E8DCC5BDA7AB")
    IMiRect : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Right( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Bottom( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiRect * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiRect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiRect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiRect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiRect * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            IMiRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            IMiRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Right )( 
            IMiRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Bottom )( 
            IMiRect * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } IMiRectVtbl;

    interface IMiRect
    {
        CONST_VTBL struct IMiRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiRect_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiRect_get_Top(This,pVal)	\
    ( (This)->lpVtbl -> get_Top(This,pVal) ) 

#define IMiRect_get_Left(This,pVal)	\
    ( (This)->lpVtbl -> get_Left(This,pVal) ) 

#define IMiRect_get_Right(This,pVal)	\
    ( (This)->lpVtbl -> get_Right(This,pVal) ) 

#define IMiRect_get_Bottom(This,pVal)	\
    ( (This)->lpVtbl -> get_Bottom(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiRect_INTERFACE_DEFINED__ */


#ifndef __IMiRects_INTERFACE_DEFINED__
#define __IMiRects_INTERFACE_DEFINED__

/* interface IMiRects */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiRects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("895C88A9-8598-44CC-91C4-8010AE2475EB")
    IMiRects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiRectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiRects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiRects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiRects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiRects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiRects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiRects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiRects * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMiRects * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMiRects * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMiRects * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } IMiRectsVtbl;

    interface IMiRects
    {
        CONST_VTBL struct IMiRectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiRects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiRects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiRects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiRects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiRects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiRects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiRects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiRects_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IMiRects_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IMiRects_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiRects_INTERFACE_DEFINED__ */


#ifndef __IWord_INTERFACE_DEFINED__
#define __IWord_INTERFACE_DEFINED__

/* interface IWord */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5612275B-B4F1-42AF-B696-360D40DF041D")
    IWord : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RecognitionConfidence( 
            /* [retval][out] */ short *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FontId( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LineId( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RegionId( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Font( 
            /* [retval][out] */ IMiFont **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Rects( 
            /* [retval][out] */ IMiRects **ppVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWord * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWord * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWord * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWord * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWord * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RecognitionConfidence )( 
            IWord * This,
            /* [retval][out] */ short *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FontId )( 
            IWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LineId )( 
            IWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RegionId )( 
            IWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IWord * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Font )( 
            IWord * This,
            /* [retval][out] */ IMiFont **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IWord * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Rects )( 
            IWord * This,
            /* [retval][out] */ IMiRects **ppVal);
        
        END_INTERFACE
    } IWordVtbl;

    interface IWord
    {
        CONST_VTBL struct IWordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWord_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWord_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWord_get_RecognitionConfidence(This,pVal)	\
    ( (This)->lpVtbl -> get_RecognitionConfidence(This,pVal) ) 

#define IWord_get_FontId(This,pVal)	\
    ( (This)->lpVtbl -> get_FontId(This,pVal) ) 

#define IWord_get_LineId(This,pVal)	\
    ( (This)->lpVtbl -> get_LineId(This,pVal) ) 

#define IWord_get_RegionId(This,pVal)	\
    ( (This)->lpVtbl -> get_RegionId(This,pVal) ) 

#define IWord_get_Text(This,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,pVal) ) 

#define IWord_get_Font(This,pVal)	\
    ( (This)->lpVtbl -> get_Font(This,pVal) ) 

#define IWord_get_Id(This,pVal)	\
    ( (This)->lpVtbl -> get_Id(This,pVal) ) 

#define IWord_get_Rects(This,ppVal)	\
    ( (This)->lpVtbl -> get_Rects(This,ppVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWord_INTERFACE_DEFINED__ */


#ifndef __IWords_INTERFACE_DEFINED__
#define __IWords_INTERFACE_DEFINED__

/* interface IWords */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IWords;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D8363824-4B07-423B-8803-49B470434F3D")
    IWords : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWordsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWords * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWords * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWords * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IWords * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IWords * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IWords * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWords * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IWords * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IWords * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IWords * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } IWordsVtbl;

    interface IWords
    {
        CONST_VTBL struct IWordsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWords_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWords_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWords_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWords_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWords_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWords_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWords_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWords_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IWords_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IWords_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWords_INTERFACE_DEFINED__ */


#ifndef __ILayout_INTERFACE_DEFINED__
#define __ILayout_INTERFACE_DEFINED__

/* interface ILayout */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ILayout;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C300C846-A3FD-4A5B-AD65-4A6AB46B7821")
    ILayout : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumChars( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumWords( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumFonts( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Words( 
            /* [retval][out] */ IWords **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILayoutVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILayout * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILayout * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILayout * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ILayout * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ILayout * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ILayout * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ILayout * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            ILayout * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumChars )( 
            ILayout * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumWords )( 
            ILayout * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumFonts )( 
            ILayout * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ILayout * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Words )( 
            ILayout * This,
            /* [retval][out] */ IWords **pVal);
        
        END_INTERFACE
    } ILayoutVtbl;

    interface ILayout
    {
        CONST_VTBL struct ILayoutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILayout_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILayout_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILayout_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILayout_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ILayout_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ILayout_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ILayout_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ILayout_get_Language(This,pVal)	\
    ( (This)->lpVtbl -> get_Language(This,pVal) ) 

#define ILayout_get_NumChars(This,pVal)	\
    ( (This)->lpVtbl -> get_NumChars(This,pVal) ) 

#define ILayout_get_NumWords(This,pVal)	\
    ( (This)->lpVtbl -> get_NumWords(This,pVal) ) 

#define ILayout_get_NumFonts(This,pVal)	\
    ( (This)->lpVtbl -> get_NumFonts(This,pVal) ) 

#define ILayout_get_Text(This,pVal)	\
    ( (This)->lpVtbl -> get_Text(This,pVal) ) 

#define ILayout_get_Words(This,pVal)	\
    ( (This)->lpVtbl -> get_Words(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILayout_INTERFACE_DEFINED__ */


#ifndef __IImage_INTERFACE_DEFINED__
#define __IImage_INTERFACE_DEFINED__

/* interface IImage */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AC0D48A6-886D-4EB5-A8A1-093D60B9A84A")
    IImage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Layout( 
            /* [retval][out] */ ILayout **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PixelWidth( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PixelHeight( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_XDPI( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_YDPI( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BitsPerPixel( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Thumbnail( 
            /* [defaultvalue][optional][in] */ MiTHUMBNAIL_SIZE ThumbSize,
            /* [retval][out] */ /* external definition not present */ IPictureDisp **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Picture( 
            /* [retval][out] */ /* external definition not present */ IPictureDisp **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Compression( 
            /* [retval][out] */ MiCOMP_TYPE *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OCR( 
            /* [defaultvalue][optional][in] */ MiLANGUAGES LangId = 2048,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCROrientImage = -1,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCRStraightenImage = -1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Rotate( 
            /* [in] */ long Angle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImage * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Layout )( 
            IImage * This,
            /* [retval][out] */ ILayout **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )( 
            IImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )( 
            IImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_XDPI )( 
            IImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_YDPI )( 
            IImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BitsPerPixel )( 
            IImage * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )( 
            IImage * This,
            /* [defaultvalue][optional][in] */ MiTHUMBNAIL_SIZE ThumbSize,
            /* [retval][out] */ /* external definition not present */ IPictureDisp **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Picture )( 
            IImage * This,
            /* [retval][out] */ /* external definition not present */ IPictureDisp **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Compression )( 
            IImage * This,
            /* [retval][out] */ MiCOMP_TYPE *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OCR )( 
            IImage * This,
            /* [defaultvalue][optional][in] */ MiLANGUAGES LangId,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCROrientImage,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCRStraightenImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Rotate )( 
            IImage * This,
            /* [in] */ long Angle);
        
        END_INTERFACE
    } IImageVtbl;

    interface IImage
    {
        CONST_VTBL struct IImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IImage_get_Layout(This,pVal)	\
    ( (This)->lpVtbl -> get_Layout(This,pVal) ) 

#define IImage_get_PixelWidth(This,pVal)	\
    ( (This)->lpVtbl -> get_PixelWidth(This,pVal) ) 

#define IImage_get_PixelHeight(This,pVal)	\
    ( (This)->lpVtbl -> get_PixelHeight(This,pVal) ) 

#define IImage_get_XDPI(This,pVal)	\
    ( (This)->lpVtbl -> get_XDPI(This,pVal) ) 

#define IImage_get_YDPI(This,pVal)	\
    ( (This)->lpVtbl -> get_YDPI(This,pVal) ) 

#define IImage_get_BitsPerPixel(This,pVal)	\
    ( (This)->lpVtbl -> get_BitsPerPixel(This,pVal) ) 

#define IImage_get_Thumbnail(This,ThumbSize,pVal)	\
    ( (This)->lpVtbl -> get_Thumbnail(This,ThumbSize,pVal) ) 

#define IImage_get_Picture(This,pVal)	\
    ( (This)->lpVtbl -> get_Picture(This,pVal) ) 

#define IImage_get_Compression(This,pVal)	\
    ( (This)->lpVtbl -> get_Compression(This,pVal) ) 

#define IImage_OCR(This,LangId,OCROrientImage,OCRStraightenImage)	\
    ( (This)->lpVtbl -> OCR(This,LangId,OCROrientImage,OCRStraightenImage) ) 

#define IImage_Rotate(This,Angle)	\
    ( (This)->lpVtbl -> Rotate(This,Angle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImage_INTERFACE_DEFINED__ */


#ifndef __IImages_INTERFACE_DEFINED__
#define __IImages_INTERFACE_DEFINED__

/* interface IImages */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IImages;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77096557-54CA-45C8-81C9-E70C2ABAA0FB")
    IImages : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IDispatch *Page,
            /* [in] */ IDispatch *BeforePage) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IDispatch *Page) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImagesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImages * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImages * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImages * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IImages * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IImages * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IImages * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IImages * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IImages * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IImages * This,
            /* [in] */ IDispatch *Page,
            /* [in] */ IDispatch *BeforePage);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IImages * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IImages * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IImages * This,
            /* [in] */ IDispatch *Page);
        
        END_INTERFACE
    } IImagesVtbl;

    interface IImages
    {
        CONST_VTBL struct IImagesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImages_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImages_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImages_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImages_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IImages_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IImages_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IImages_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IImages_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IImages_Add(This,Page,BeforePage)	\
    ( (This)->lpVtbl -> Add(This,Page,BeforePage) ) 

#define IImages_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IImages_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#define IImages_Remove(This,Page)	\
    ( (This)->lpVtbl -> Remove(This,Page) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImages_INTERFACE_DEFINED__ */


#ifndef __IDocument_INTERFACE_DEFINED__
#define __IDocument_INTERFACE_DEFINED__

/* interface IDocument */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D4073843-A58A-469A-A8E2-CFF3FF77EE4E")
    IDocument : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( 
            /* [defaultvalue][optional][in] */ VARIANT_BOOL SaveChanges = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveAs( 
            /* [in] */ BSTR FileName,
            /* [defaultvalue][optional][in] */ MiFILE_FORMAT FileFormat = -1,
            /* [defaultvalue][optional][in] */ MiCOMP_LEVEL CompLevel = 1) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Images( 
            /* [retval][out] */ IImages **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BuiltInDocumentProperties( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CustomDocumentProperties( 
            /* [retval][out] */ IDispatch **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [defaultvalue][optional][in] */ BSTR FileOpen = L"") = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Dirty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OCR( 
            /* [defaultvalue][optional][in] */ MiLANGUAGES LangId = 2048,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCROrientImage = -1,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCRStraightenImage = -1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PrintOut( 
            /* [defaultvalue][optional][in] */ long From = 0,
            /* [defaultvalue][optional][in] */ long To = -1,
            /* [defaultvalue][optional][in] */ long Copies = 1,
            /* [defaultvalue][optional][in] */ BSTR PrinterName = L"",
            /* [defaultvalue][optional][in] */ BSTR PrintToFileName = L"",
            /* [defaultvalue][optional][in] */ VARIANT_BOOL PrintAnnotation = -1,
            /* [defaultvalue][optional][in] */ MiPRINT_FITMODES FitMode = 1) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDocument * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDocument * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IDocument * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDocument * This,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL SaveChanges);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveAs )( 
            IDocument * This,
            /* [in] */ BSTR FileName,
            /* [defaultvalue][optional][in] */ MiFILE_FORMAT FileFormat,
            /* [defaultvalue][optional][in] */ MiCOMP_LEVEL CompLevel);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Images )( 
            IDocument * This,
            /* [retval][out] */ IImages **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BuiltInDocumentProperties )( 
            IDocument * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CustomDocumentProperties )( 
            IDocument * This,
            /* [retval][out] */ IDispatch **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IDocument * This,
            /* [defaultvalue][optional][in] */ BSTR FileOpen);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Dirty )( 
            IDocument * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OCR )( 
            IDocument * This,
            /* [defaultvalue][optional][in] */ MiLANGUAGES LangId,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCROrientImage,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL OCRStraightenImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PrintOut )( 
            IDocument * This,
            /* [defaultvalue][optional][in] */ long From,
            /* [defaultvalue][optional][in] */ long To,
            /* [defaultvalue][optional][in] */ long Copies,
            /* [defaultvalue][optional][in] */ BSTR PrinterName,
            /* [defaultvalue][optional][in] */ BSTR PrintToFileName,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL PrintAnnotation,
            /* [defaultvalue][optional][in] */ MiPRINT_FITMODES FitMode);
        
        END_INTERFACE
    } IDocumentVtbl;

    interface IDocument
    {
        CONST_VTBL struct IDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDocument_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IDocument_Close(This,SaveChanges)	\
    ( (This)->lpVtbl -> Close(This,SaveChanges) ) 

#define IDocument_SaveAs(This,FileName,FileFormat,CompLevel)	\
    ( (This)->lpVtbl -> SaveAs(This,FileName,FileFormat,CompLevel) ) 

#define IDocument_get_Images(This,pVal)	\
    ( (This)->lpVtbl -> get_Images(This,pVal) ) 

#define IDocument_get_BuiltInDocumentProperties(This,pVal)	\
    ( (This)->lpVtbl -> get_BuiltInDocumentProperties(This,pVal) ) 

#define IDocument_get_CustomDocumentProperties(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomDocumentProperties(This,pVal) ) 

#define IDocument_Create(This,FileOpen)	\
    ( (This)->lpVtbl -> Create(This,FileOpen) ) 

#define IDocument_get_Dirty(This,pVal)	\
    ( (This)->lpVtbl -> get_Dirty(This,pVal) ) 

#define IDocument_OCR(This,LangId,OCROrientImage,OCRStraightenImage)	\
    ( (This)->lpVtbl -> OCR(This,LangId,OCROrientImage,OCRStraightenImage) ) 

#define IDocument_PrintOut(This,From,To,Copies,PrinterName,PrintToFileName,PrintAnnotation,FitMode)	\
    ( (This)->lpVtbl -> PrintOut(This,From,To,Copies,PrinterName,PrintToFileName,PrintAnnotation,FitMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocument_INTERFACE_DEFINED__ */


#ifndef ___IDocumentEvents_DISPINTERFACE_DEFINED__
#define ___IDocumentEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDocumentEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDocumentEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("0CF31963-5E4D-4772-AE8D-82FE5A082B26")
    _IDocumentEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDocumentEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDocumentEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDocumentEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDocumentEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDocumentEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDocumentEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDocumentEvents * This,
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
    } _IDocumentEventsVtbl;

    interface _IDocumentEvents
    {
        CONST_VTBL struct _IDocumentEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDocumentEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IDocumentEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IDocumentEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IDocumentEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IDocumentEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IDocumentEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IDocumentEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDocumentEvents_DISPINTERFACE_DEFINED__ */


#ifndef ___IImageEvents_DISPINTERFACE_DEFINED__
#define ___IImageEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IImageEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IImageEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("99F3A122-448F-4D36-8243-48BFE32D50B2")
    _IImageEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IImageEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IImageEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IImageEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IImageEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IImageEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IImageEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IImageEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IImageEvents * This,
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
    } _IImageEventsVtbl;

    interface _IImageEvents
    {
        CONST_VTBL struct _IImageEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IImageEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IImageEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IImageEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IImageEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IImageEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IImageEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IImageEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IImageEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IMiSelectRect_INTERFACE_DEFINED__
#define __IMiSelectRect_INTERFACE_DEFINED__

/* interface IMiSelectRect */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiSelectRect;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA280C3C-E4B7-42BF-ACC8-FE3AD3581638")
    IMiSelectRect : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PageNumber( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Left( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Top( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Right( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Bottom( 
            /* [retval][out] */ long *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiSelectRectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiSelectRect * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiSelectRect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiSelectRect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiSelectRect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiSelectRect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiSelectRect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiSelectRect * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PageNumber )( 
            IMiSelectRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Left )( 
            IMiSelectRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Top )( 
            IMiSelectRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Right )( 
            IMiSelectRect * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Bottom )( 
            IMiSelectRect * This,
            /* [retval][out] */ long *pVal);
        
        END_INTERFACE
    } IMiSelectRectVtbl;

    interface IMiSelectRect
    {
        CONST_VTBL struct IMiSelectRectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiSelectRect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiSelectRect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiSelectRect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiSelectRect_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiSelectRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiSelectRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiSelectRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiSelectRect_get_PageNumber(This,pVal)	\
    ( (This)->lpVtbl -> get_PageNumber(This,pVal) ) 

#define IMiSelectRect_get_Left(This,pVal)	\
    ( (This)->lpVtbl -> get_Left(This,pVal) ) 

#define IMiSelectRect_get_Top(This,pVal)	\
    ( (This)->lpVtbl -> get_Top(This,pVal) ) 

#define IMiSelectRect_get_Right(This,pVal)	\
    ( (This)->lpVtbl -> get_Right(This,pVal) ) 

#define IMiSelectRect_get_Bottom(This,pVal)	\
    ( (This)->lpVtbl -> get_Bottom(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiSelectRect_INTERFACE_DEFINED__ */


#ifndef __IMiSelectRects_INTERFACE_DEFINED__
#define __IMiSelectRects_INTERFACE_DEFINED__

/* interface IMiSelectRects */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiSelectRects;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A1E1B7A-C041-4DDC-BF3B-042A0B95B82B")
    IMiSelectRects : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiSelectRectsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiSelectRects * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiSelectRects * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiSelectRects * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiSelectRects * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiSelectRects * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiSelectRects * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiSelectRects * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMiSelectRects * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IMiSelectRects * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IMiSelectRects * This,
            /* [in] */ long Index,
            /* [retval][out] */ IDispatch **pVal);
        
        END_INTERFACE
    } IMiSelectRectsVtbl;

    interface IMiSelectRects
    {
        CONST_VTBL struct IMiSelectRectsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiSelectRects_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiSelectRects_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiSelectRects_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiSelectRects_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiSelectRects_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiSelectRects_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiSelectRects_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiSelectRects_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IMiSelectRects_get__NewEnum(This,pVal)	\
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) ) 

#define IMiSelectRects_get_Item(This,Index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiSelectRects_INTERFACE_DEFINED__ */


#ifndef __IMiSelectableItem_INTERFACE_DEFINED__
#define __IMiSelectableItem_INTERFACE_DEFINED__

/* interface IMiSelectableItem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiSelectableItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01C4414A-D123-4BC7-A1FA-64E376C01655")
    IMiSelectableItem : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToClipboard( void) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *p) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Words( 
            /* [retval][out] */ IDispatch **ppWords) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSelectRects( 
            /* [retval][out] */ IMiSelectRects **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiSelectableItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiSelectableItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiSelectableItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiSelectableItem * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiSelectableItem * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiSelectableItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiSelectableItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiSelectableItem * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToClipboard )( 
            IMiSelectableItem * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            IMiSelectableItem * This,
            /* [retval][out] */ BSTR *p);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Words )( 
            IMiSelectableItem * This,
            /* [retval][out] */ IDispatch **ppWords);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSelectRects )( 
            IMiSelectableItem * This,
            /* [retval][out] */ IMiSelectRects **pVal);
        
        END_INTERFACE
    } IMiSelectableItemVtbl;

    interface IMiSelectableItem
    {
        CONST_VTBL struct IMiSelectableItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiSelectableItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiSelectableItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiSelectableItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiSelectableItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiSelectableItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiSelectableItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiSelectableItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiSelectableItem_CopyToClipboard(This)	\
    ( (This)->lpVtbl -> CopyToClipboard(This) ) 

#define IMiSelectableItem_get_Text(This,p)	\
    ( (This)->lpVtbl -> get_Text(This,p) ) 

#define IMiSelectableItem_get_Words(This,ppWords)	\
    ( (This)->lpVtbl -> get_Words(This,ppWords) ) 

#define IMiSelectableItem_GetSelectRects(This,pVal)	\
    ( (This)->lpVtbl -> GetSelectRects(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiSelectableItem_INTERFACE_DEFINED__ */


#ifndef __IMiSelectableImage_INTERFACE_DEFINED__
#define __IMiSelectableImage_INTERFACE_DEFINED__

/* interface IMiSelectableImage */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IMiSelectableImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6379198-3B20-461A-B3A9-191945752557")
    IMiSelectableImage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CopyToClipboard( 
            /* [defaultvalue][optional][in] */ long CopyAnnotation = 1,
            /* [defaultvalue][optional][in] */ long AlwaysKeepAnnotationColor = 0) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportToPicture( 
            /* [defaultvalue][optional][in] */ long CopyAnnotation,
            /* [defaultvalue][optional][in] */ long AlwaysKeepAnnotationColor,
            /* [retval][out] */ /* external definition not present */ IPictureDisp **ppiPicture) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBoundingRect( 
            /* [out] */ long *plPageNum,
            /* [out] */ long *Left,
            /* [out] */ long *Top,
            /* [out] */ long *Right,
            /* [out] */ long *Bottom) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiSelectableImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiSelectableImage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiSelectableImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiSelectableImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiSelectableImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiSelectableImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiSelectableImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiSelectableImage * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CopyToClipboard )( 
            IMiSelectableImage * This,
            /* [defaultvalue][optional][in] */ long CopyAnnotation,
            /* [defaultvalue][optional][in] */ long AlwaysKeepAnnotationColor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportToPicture )( 
            IMiSelectableImage * This,
            /* [defaultvalue][optional][in] */ long CopyAnnotation,
            /* [defaultvalue][optional][in] */ long AlwaysKeepAnnotationColor,
            /* [retval][out] */ /* external definition not present */ IPictureDisp **ppiPicture);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBoundingRect )( 
            IMiSelectableImage * This,
            /* [out] */ long *plPageNum,
            /* [out] */ long *Left,
            /* [out] */ long *Top,
            /* [out] */ long *Right,
            /* [out] */ long *Bottom);
        
        END_INTERFACE
    } IMiSelectableImageVtbl;

    interface IMiSelectableImage
    {
        CONST_VTBL struct IMiSelectableImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiSelectableImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiSelectableImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiSelectableImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiSelectableImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiSelectableImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiSelectableImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiSelectableImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiSelectableImage_CopyToClipboard(This,CopyAnnotation,AlwaysKeepAnnotationColor)	\
    ( (This)->lpVtbl -> CopyToClipboard(This,CopyAnnotation,AlwaysKeepAnnotationColor) ) 

#define IMiSelectableImage_ExportToPicture(This,CopyAnnotation,AlwaysKeepAnnotationColor,ppiPicture)	\
    ( (This)->lpVtbl -> ExportToPicture(This,CopyAnnotation,AlwaysKeepAnnotationColor,ppiPicture) ) 

#define IMiSelectableImage_GetBoundingRect(This,plPageNum,Left,Top,Right,Bottom)	\
    ( (This)->lpVtbl -> GetBoundingRect(This,plPageNum,Left,Top,Right,Bottom) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiSelectableImage_INTERFACE_DEFINED__ */


#ifndef __IMiSearchCallback_INTERFACE_DEFINED__
#define __IMiSearchCallback_INTERFACE_DEFINED__

/* interface IMiSearchCallback */
/* [object][hidden][uuid] */ 


EXTERN_C const IID IID_IMiSearchCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8376D508-78CA-416D-A903-2ED62E91E29B")
    IMiSearchCallback : public IUnknown
    {
    public:
        virtual HRESULT __stdcall IsCancelled( 
            /* [out] */ long *pfIsCancel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiSearchCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiSearchCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiSearchCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiSearchCallback * This);
        
        HRESULT ( __stdcall *IsCancelled )( 
            IMiSearchCallback * This,
            /* [out] */ long *pfIsCancel);
        
        END_INTERFACE
    } IMiSearchCallbackVtbl;

    interface IMiSearchCallback
    {
        CONST_VTBL struct IMiSearchCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiSearchCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiSearchCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiSearchCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiSearchCallback_IsCancelled(This,pfIsCancel)	\
    ( (This)->lpVtbl -> IsCancelled(This,pfIsCancel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiSearchCallback_INTERFACE_DEFINED__ */


#ifndef __IMiDocView_INTERFACE_DEFINED__
#define __IMiDocView_INTERFACE_DEFINED__

/* interface IMiDocView */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IMiDocView;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F958524A-8422-4B07-B69E-199F2421ED89")
    IMiDocView : public IDispatch
    {
    public:
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_Document( 
            /* [retval][out] */ IUnknown **pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_Document( 
            /* [in] */ IUnknown *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_FileName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_FileName( 
            /* [in] */ BSTR pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_NumPages( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClientToDocument( 
            /* [out][in] */ long *plX,
            /* [out][in] */ long *plY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DocumentToClient( 
            /* [out][in] */ long *plX,
            /* [out][in] */ long *plY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClientToImage( 
            /* [in] */ long lSX,
            /* [in] */ long lSY,
            /* [out] */ long *pnPage,
            /* [out] */ long *plX,
            /* [out] */ long *plY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImageToClient( 
            /* [in] */ long nPage,
            /* [in] */ long lX,
            /* [in] */ long lY,
            /* [out] */ long *plSX,
            /* [out] */ long *plSY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVisibleRect( 
            /* [out] */ long *Left,
            /* [out] */ long *Top,
            /* [out] */ long *Right,
            /* [out] */ long *Bottom) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveRectIntoView( 
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Right,
            /* [in] */ long Bottom) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DocViewMode( 
            /* [retval][out] */ MiDocviewMode *pVal) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_DocViewMode( 
            /* [in] */ MiDocviewMode pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_PageNum( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_PageNum( 
            /* [in] */ long pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetScale( 
            double *pdScaleX,
            double *pdScaleY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetScale( 
            double dScaleX,
            double dScaleY) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_FitMode( 
            /* [retval][out] */ MiFITMODE *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_FitMode( 
            /* [in] */ MiFITMODE pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActionState( 
            /* [retval][out] */ MiActionState *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_ActionState( 
            /* [in] */ MiActionState pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_TextSelection( 
            /* [retval][out] */ IMiSelectableItem **pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_TextSelection( 
            /* [in] */ IMiSelectableItem *pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_ImageSelection( 
            /* [retval][out] */ IMiSelectableImage **pVal) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_ImageSelection( 
            /* [in] */ IMiSelectableImage *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SelectAll( 
            /* [in] */ long nPage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MoveSelectionToView( 
            IDispatch *pdispSelection) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propput][id] */ HRESULT STDMETHODCALLTYPE put_LayerVisible( 
            /* [in] */ MiVIEWLAYER Index,
            /* [in] */ VARIANT_BOOL pfVisible) = 0;
        
        virtual /* [helpstring][requestedit][bindable][propget][id] */ HRESULT STDMETHODCALLTYPE get_LayerVisible( 
            /* [in] */ MiVIEWLAYER Index,
            /* [retval][out] */ VARIANT_BOOL *pfVisible) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiDocViewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiDocView * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiDocView * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiDocView * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiDocView * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiDocView * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiDocView * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiDocView * This,
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
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Document )( 
            IMiDocView * This,
            /* [retval][out] */ IUnknown **pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Document )( 
            IMiDocView * This,
            /* [in] */ IUnknown *pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FileName )( 
            IMiDocView * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FileName )( 
            IMiDocView * This,
            /* [in] */ BSTR pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_NumPages )( 
            IMiDocView * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClientToDocument )( 
            IMiDocView * This,
            /* [out][in] */ long *plX,
            /* [out][in] */ long *plY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DocumentToClient )( 
            IMiDocView * This,
            /* [out][in] */ long *plX,
            /* [out][in] */ long *plY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClientToImage )( 
            IMiDocView * This,
            /* [in] */ long lSX,
            /* [in] */ long lSY,
            /* [out] */ long *pnPage,
            /* [out] */ long *plX,
            /* [out] */ long *plY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImageToClient )( 
            IMiDocView * This,
            /* [in] */ long nPage,
            /* [in] */ long lX,
            /* [in] */ long lY,
            /* [out] */ long *plSX,
            /* [out] */ long *plSY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVisibleRect )( 
            IMiDocView * This,
            /* [out] */ long *Left,
            /* [out] */ long *Top,
            /* [out] */ long *Right,
            /* [out] */ long *Bottom);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveRectIntoView )( 
            IMiDocView * This,
            /* [in] */ long Left,
            /* [in] */ long Top,
            /* [in] */ long Right,
            /* [in] */ long Bottom);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DocViewMode )( 
            IMiDocView * This,
            /* [retval][out] */ MiDocviewMode *pVal);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DocViewMode )( 
            IMiDocView * This,
            /* [in] */ MiDocviewMode pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PageNum )( 
            IMiDocView * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PageNum )( 
            IMiDocView * This,
            /* [in] */ long pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScale )( 
            IMiDocView * This,
            double *pdScaleX,
            double *pdScaleY);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetScale )( 
            IMiDocView * This,
            double dScaleX,
            double dScaleY);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FitMode )( 
            IMiDocView * This,
            /* [retval][out] */ MiFITMODE *pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_FitMode )( 
            IMiDocView * This,
            /* [in] */ MiFITMODE pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActionState )( 
            IMiDocView * This,
            /* [retval][out] */ MiActionState *pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ActionState )( 
            IMiDocView * This,
            /* [in] */ MiActionState pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TextSelection )( 
            IMiDocView * This,
            /* [retval][out] */ IMiSelectableItem **pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TextSelection )( 
            IMiDocView * This,
            /* [in] */ IMiSelectableItem *pVal);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ImageSelection )( 
            IMiDocView * This,
            /* [retval][out] */ IMiSelectableImage **pVal);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ImageSelection )( 
            IMiDocView * This,
            /* [in] */ IMiSelectableImage *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SelectAll )( 
            IMiDocView * This,
            /* [in] */ long nPage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MoveSelectionToView )( 
            IMiDocView * This,
            IDispatch *pdispSelection);
        
        /* [helpstring][requestedit][bindable][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_LayerVisible )( 
            IMiDocView * This,
            /* [in] */ MiVIEWLAYER Index,
            /* [in] */ VARIANT_BOOL pfVisible);
        
        /* [helpstring][requestedit][bindable][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LayerVisible )( 
            IMiDocView * This,
            /* [in] */ MiVIEWLAYER Index,
            /* [retval][out] */ VARIANT_BOOL *pfVisible);
        
        END_INTERFACE
    } IMiDocViewVtbl;

    interface IMiDocView
    {
        CONST_VTBL struct IMiDocViewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiDocView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiDocView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiDocView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiDocView_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiDocView_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiDocView_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiDocView_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiDocView_get_Document(This,pVal)	\
    ( (This)->lpVtbl -> get_Document(This,pVal) ) 

#define IMiDocView_put_Document(This,pVal)	\
    ( (This)->lpVtbl -> put_Document(This,pVal) ) 

#define IMiDocView_get_FileName(This,pVal)	\
    ( (This)->lpVtbl -> get_FileName(This,pVal) ) 

#define IMiDocView_put_FileName(This,pVal)	\
    ( (This)->lpVtbl -> put_FileName(This,pVal) ) 

#define IMiDocView_get_NumPages(This,pVal)	\
    ( (This)->lpVtbl -> get_NumPages(This,pVal) ) 

#define IMiDocView_ClientToDocument(This,plX,plY)	\
    ( (This)->lpVtbl -> ClientToDocument(This,plX,plY) ) 

#define IMiDocView_DocumentToClient(This,plX,plY)	\
    ( (This)->lpVtbl -> DocumentToClient(This,plX,plY) ) 

#define IMiDocView_ClientToImage(This,lSX,lSY,pnPage,plX,plY)	\
    ( (This)->lpVtbl -> ClientToImage(This,lSX,lSY,pnPage,plX,plY) ) 

#define IMiDocView_ImageToClient(This,nPage,lX,lY,plSX,plSY)	\
    ( (This)->lpVtbl -> ImageToClient(This,nPage,lX,lY,plSX,plSY) ) 

#define IMiDocView_GetVisibleRect(This,Left,Top,Right,Bottom)	\
    ( (This)->lpVtbl -> GetVisibleRect(This,Left,Top,Right,Bottom) ) 

#define IMiDocView_MoveRectIntoView(This,Left,Top,Right,Bottom)	\
    ( (This)->lpVtbl -> MoveRectIntoView(This,Left,Top,Right,Bottom) ) 

#define IMiDocView_get_DocViewMode(This,pVal)	\
    ( (This)->lpVtbl -> get_DocViewMode(This,pVal) ) 

#define IMiDocView_put_DocViewMode(This,pVal)	\
    ( (This)->lpVtbl -> put_DocViewMode(This,pVal) ) 

#define IMiDocView_get_PageNum(This,pVal)	\
    ( (This)->lpVtbl -> get_PageNum(This,pVal) ) 

#define IMiDocView_put_PageNum(This,pVal)	\
    ( (This)->lpVtbl -> put_PageNum(This,pVal) ) 

#define IMiDocView_GetScale(This,pdScaleX,pdScaleY)	\
    ( (This)->lpVtbl -> GetScale(This,pdScaleX,pdScaleY) ) 

#define IMiDocView_SetScale(This,dScaleX,dScaleY)	\
    ( (This)->lpVtbl -> SetScale(This,dScaleX,dScaleY) ) 

#define IMiDocView_get_FitMode(This,pVal)	\
    ( (This)->lpVtbl -> get_FitMode(This,pVal) ) 

#define IMiDocView_put_FitMode(This,pVal)	\
    ( (This)->lpVtbl -> put_FitMode(This,pVal) ) 

#define IMiDocView_get_ActionState(This,pVal)	\
    ( (This)->lpVtbl -> get_ActionState(This,pVal) ) 

#define IMiDocView_put_ActionState(This,pVal)	\
    ( (This)->lpVtbl -> put_ActionState(This,pVal) ) 

#define IMiDocView_get_TextSelection(This,pVal)	\
    ( (This)->lpVtbl -> get_TextSelection(This,pVal) ) 

#define IMiDocView_put_TextSelection(This,pVal)	\
    ( (This)->lpVtbl -> put_TextSelection(This,pVal) ) 

#define IMiDocView_get_ImageSelection(This,pVal)	\
    ( (This)->lpVtbl -> get_ImageSelection(This,pVal) ) 

#define IMiDocView_put_ImageSelection(This,pVal)	\
    ( (This)->lpVtbl -> put_ImageSelection(This,pVal) ) 

#define IMiDocView_SelectAll(This,nPage)	\
    ( (This)->lpVtbl -> SelectAll(This,nPage) ) 

#define IMiDocView_MoveSelectionToView(This,pdispSelection)	\
    ( (This)->lpVtbl -> MoveSelectionToView(This,pdispSelection) ) 

#define IMiDocView_put_LayerVisible(This,Index,pfVisible)	\
    ( (This)->lpVtbl -> put_LayerVisible(This,Index,pfVisible) ) 

#define IMiDocView_get_LayerVisible(This,Index,pfVisible)	\
    ( (This)->lpVtbl -> get_LayerVisible(This,Index,pfVisible) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiDocView_INTERFACE_DEFINED__ */


#ifndef ___IMiDocViewEvents_DISPINTERFACE_DEFINED__
#define ___IMiDocViewEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IMiDocViewEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IMiDocViewEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9028B775-EC59-4118-862A-EFDEAF5955A4")
    _IMiDocViewEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IMiDocViewEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IMiDocViewEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IMiDocViewEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IMiDocViewEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IMiDocViewEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IMiDocViewEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IMiDocViewEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IMiDocViewEvents * This,
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
    } _IMiDocViewEventsVtbl;

    interface _IMiDocViewEvents
    {
        CONST_VTBL struct _IMiDocViewEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IMiDocViewEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IMiDocViewEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IMiDocViewEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IMiDocViewEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IMiDocViewEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IMiDocViewEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IMiDocViewEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IMiDocViewEvents_DISPINTERFACE_DEFINED__ */


#ifndef __IMiDocSearch_INTERFACE_DEFINED__
#define __IMiDocSearch_INTERFACE_DEFINED__

/* interface IMiDocSearch */
/* [object][oleautomation][dual][uuid] */ 


EXTERN_C const IID IID_IMiDocSearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC06ED64-A40C-4FB4-A660-AC6DBC752292")
    IMiDocSearch : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            IUnknown *piDoc,
            BSTR strPattern,
            VARIANT *PageNum,
            VARIANT *WordIndex,
            VARIANT *StartAfterIndex,
            VARIANT *Backward,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchMinus = -1,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchFullHalfWidthForm = -1,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchHiraganaKatakana = -1,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL IgnoreSpace = -1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Search( 
            IMiSearchCallback *pSearchCallback,
            IMiSelectableItem **ppiSearchResult) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiDocSearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiDocSearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiDocSearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiDocSearch * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMiDocSearch * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMiDocSearch * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMiDocSearch * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMiDocSearch * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IMiDocSearch * This,
            IUnknown *piDoc,
            BSTR strPattern,
            VARIANT *PageNum,
            VARIANT *WordIndex,
            VARIANT *StartAfterIndex,
            VARIANT *Backward,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchMinus,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchFullHalfWidthForm,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL MatchHiraganaKatakana,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL IgnoreSpace);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Search )( 
            IMiDocSearch * This,
            IMiSearchCallback *pSearchCallback,
            IMiSelectableItem **ppiSearchResult);
        
        END_INTERFACE
    } IMiDocSearchVtbl;

    interface IMiDocSearch
    {
        CONST_VTBL struct IMiDocSearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiDocSearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiDocSearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiDocSearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiDocSearch_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMiDocSearch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMiDocSearch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMiDocSearch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMiDocSearch_Initialize(This,piDoc,strPattern,PageNum,WordIndex,StartAfterIndex,Backward,MatchMinus,MatchFullHalfWidthForm,MatchHiraganaKatakana,IgnoreSpace)	\
    ( (This)->lpVtbl -> Initialize(This,piDoc,strPattern,PageNum,WordIndex,StartAfterIndex,Backward,MatchMinus,MatchFullHalfWidthForm,MatchHiraganaKatakana,IgnoreSpace) ) 

#define IMiDocSearch_Search(This,pSearchCallback,ppiSearchResult)	\
    ( (This)->lpVtbl -> Search(This,pSearchCallback,ppiSearchResult) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiDocSearch_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Document;

#ifdef __cplusplus

class DECLSPEC_UUID("40942A6C-1520-4132-BDF8-BDC1F71F547B")
Document;
#endif

EXTERN_C const CLSID CLSID_Layout;

#ifdef __cplusplus

class DECLSPEC_UUID("1AFC4117-128E-4314-9D53-64CBDA5C7E02")
Layout;
#endif

EXTERN_C const CLSID CLSID_Image;

#ifdef __cplusplus

class DECLSPEC_UUID("56F963EC-6EFC-4A6B-9A1E-5BFE545C89D0")
Image;
#endif

EXTERN_C const CLSID CLSID_Word;

#ifdef __cplusplus

class DECLSPEC_UUID("5995E30F-59EB-42AE-BDCF-8908271C0B32")
Word;
#endif

EXTERN_C const CLSID CLSID_MiFont;

#ifdef __cplusplus

class DECLSPEC_UUID("C5EAE79B-ACCC-4E51-8ED5-A16F42FB7B1F")
MiFont;
#endif

EXTERN_C const CLSID CLSID_Words;

#ifdef __cplusplus

class DECLSPEC_UUID("72ACBCE3-9067-4D5E-9539-3497FECD032D")
Words;
#endif

EXTERN_C const CLSID CLSID_Images;

#ifdef __cplusplus

class DECLSPEC_UUID("F961D185-2CC1-43DB-80AB-567FA10251EC")
Images;
#endif

EXTERN_C const CLSID CLSID_MiRect;

#ifdef __cplusplus

class DECLSPEC_UUID("00607E44-15DF-49BC-AF0C-A9023E060791")
MiRect;
#endif

EXTERN_C const CLSID CLSID_MiRects;

#ifdef __cplusplus

class DECLSPEC_UUID("CB2FBD52-56C1-4DD8-897F-961D1543B877")
MiRects;
#endif

EXTERN_C const CLSID CLSID_MiDocView;

#ifdef __cplusplus

class DECLSPEC_UUID("EF347A62-BA21-42E4-94A0-1C0A6D7FDFE7")
MiDocView;
#endif

EXTERN_C const CLSID CLSID_MiDocSearch;

#ifdef __cplusplus

class DECLSPEC_UUID("FA554DB9-C806-46A9-AEF8-B5AF891A94F9")
MiDocSearch;
#endif

EXTERN_C const CLSID CLSID_MiSelectRect;

#ifdef __cplusplus

class DECLSPEC_UUID("A4D2B51F-809F-4C53-9147-5516871816BD")
MiSelectRect;
#endif

EXTERN_C const CLSID CLSID_MiSelectRects;

#ifdef __cplusplus

class DECLSPEC_UUID("23E9E94B-C202-4E9C-8C2E-F53BC536FF1D")
MiSelectRects;
#endif
#endif /* __MODI_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


