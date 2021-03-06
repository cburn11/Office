

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_MODI,0xA5EDEDF4,0x2BBC,0x45F3,0x82,0x2B,0xE6,0x0C,0x27,0x8A,0x1A,0x79);


MIDL_DEFINE_GUID(IID, IID_IMiFont,0x1FFC9A7B,0x7606,0x4C97,0x81,0x19,0x78,0x67,0x3E,0x9D,0x48,0x21);


MIDL_DEFINE_GUID(IID, IID_IMiRect,0x87D6FB47,0x7CFA,0x4DB3,0x82,0xCD,0xE8,0xDC,0xC5,0xBD,0xA7,0xAB);


MIDL_DEFINE_GUID(IID, IID_IMiRects,0x895C88A9,0x8598,0x44CC,0x91,0xC4,0x80,0x10,0xAE,0x24,0x75,0xEB);


MIDL_DEFINE_GUID(IID, IID_IWord,0x5612275B,0xB4F1,0x42AF,0xB6,0x96,0x36,0x0D,0x40,0xDF,0x04,0x1D);


MIDL_DEFINE_GUID(IID, IID_IWords,0xD8363824,0x4B07,0x423B,0x88,0x03,0x49,0xB4,0x70,0x43,0x4F,0x3D);


MIDL_DEFINE_GUID(IID, IID_ILayout,0xC300C846,0xA3FD,0x4A5B,0xAD,0x65,0x4A,0x6A,0xB4,0x6B,0x78,0x21);


MIDL_DEFINE_GUID(IID, IID_IImage,0xAC0D48A6,0x886D,0x4EB5,0xA8,0xA1,0x09,0x3D,0x60,0xB9,0xA8,0x4A);


MIDL_DEFINE_GUID(IID, IID_IImages,0x77096557,0x54CA,0x45C8,0x81,0xC9,0xE7,0x0C,0x2A,0xBA,0xA0,0xFB);


MIDL_DEFINE_GUID(IID, IID_IDocument,0xD4073843,0xA58A,0x469A,0xA8,0xE2,0xCF,0xF3,0xFF,0x77,0xEE,0x4E);


MIDL_DEFINE_GUID(IID, DIID__IDocumentEvents,0x0CF31963,0x5E4D,0x4772,0xAE,0x8D,0x82,0xFE,0x5A,0x08,0x2B,0x26);


MIDL_DEFINE_GUID(IID, DIID__IImageEvents,0x99F3A122,0x448F,0x4D36,0x82,0x43,0x48,0xBF,0xE3,0x2D,0x50,0xB2);


MIDL_DEFINE_GUID(IID, IID_IMiSelectRect,0xEA280C3C,0xE4B7,0x42BF,0xAC,0xC8,0xFE,0x3A,0xD3,0x58,0x16,0x38);


MIDL_DEFINE_GUID(IID, IID_IMiSelectRects,0x3A1E1B7A,0xC041,0x4DDC,0xBF,0x3B,0x04,0x2A,0x0B,0x95,0xB8,0x2B);


MIDL_DEFINE_GUID(IID, IID_IMiSelectableItem,0x01C4414A,0xD123,0x4BC7,0xA1,0xFA,0x64,0xE3,0x76,0xC0,0x16,0x55);


MIDL_DEFINE_GUID(IID, IID_IMiSelectableImage,0xF6379198,0x3B20,0x461A,0xB3,0xA9,0x19,0x19,0x45,0x75,0x25,0x57);


MIDL_DEFINE_GUID(IID, IID_IMiSearchCallback,0x8376D508,0x78CA,0x416D,0xA9,0x03,0x2E,0xD6,0x2E,0x91,0xE2,0x9B);


MIDL_DEFINE_GUID(IID, IID_IMiDocView,0xF958524A,0x8422,0x4B07,0xB6,0x9E,0x19,0x9F,0x24,0x21,0xED,0x89);


MIDL_DEFINE_GUID(IID, DIID__IMiDocViewEvents,0x9028B775,0xEC59,0x4118,0x86,0x2A,0xEF,0xDE,0xAF,0x59,0x55,0xA4);


MIDL_DEFINE_GUID(IID, IID_IMiDocSearch,0xBC06ED64,0xA40C,0x4FB4,0xA6,0x60,0xAC,0x6D,0xBC,0x75,0x22,0x92);


MIDL_DEFINE_GUID(CLSID, CLSID_Document,0x40942A6C,0x1520,0x4132,0xBD,0xF8,0xBD,0xC1,0xF7,0x1F,0x54,0x7B);


MIDL_DEFINE_GUID(CLSID, CLSID_Layout,0x1AFC4117,0x128E,0x4314,0x9D,0x53,0x64,0xCB,0xDA,0x5C,0x7E,0x02);


MIDL_DEFINE_GUID(CLSID, CLSID_Image,0x56F963EC,0x6EFC,0x4A6B,0x9A,0x1E,0x5B,0xFE,0x54,0x5C,0x89,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_Word,0x5995E30F,0x59EB,0x42AE,0xBD,0xCF,0x89,0x08,0x27,0x1C,0x0B,0x32);


MIDL_DEFINE_GUID(CLSID, CLSID_MiFont,0xC5EAE79B,0xACCC,0x4E51,0x8E,0xD5,0xA1,0x6F,0x42,0xFB,0x7B,0x1F);


MIDL_DEFINE_GUID(CLSID, CLSID_Words,0x72ACBCE3,0x9067,0x4D5E,0x95,0x39,0x34,0x97,0xFE,0xCD,0x03,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_Images,0xF961D185,0x2CC1,0x43DB,0x80,0xAB,0x56,0x7F,0xA1,0x02,0x51,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_MiRect,0x00607E44,0x15DF,0x49BC,0xAF,0x0C,0xA9,0x02,0x3E,0x06,0x07,0x91);


MIDL_DEFINE_GUID(CLSID, CLSID_MiRects,0xCB2FBD52,0x56C1,0x4DD8,0x89,0x7F,0x96,0x1D,0x15,0x43,0xB8,0x77);


MIDL_DEFINE_GUID(CLSID, CLSID_MiDocView,0xEF347A62,0xBA21,0x42E4,0x94,0xA0,0x1C,0x0A,0x6D,0x7F,0xDF,0xE7);


MIDL_DEFINE_GUID(CLSID, CLSID_MiDocSearch,0xFA554DB9,0xC806,0x46A9,0xAE,0xF8,0xB5,0xAF,0x89,0x1A,0x94,0xF9);


MIDL_DEFINE_GUID(CLSID, CLSID_MiSelectRect,0xA4D2B51F,0x809F,0x4C53,0x91,0x47,0x55,0x16,0x87,0x18,0x16,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_MiSelectRects,0x23E9E94B,0xC202,0x4E9C,0x8C,0x2E,0xF5,0x3B,0xC5,0x36,0xFF,0x1D);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



