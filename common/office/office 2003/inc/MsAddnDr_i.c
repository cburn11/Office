

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

MIDL_DEFINE_GUID(IID, LIBID_AddInDesignerObjects,0xAC0714F2,0x3D04,0x11D1,0xAE,0x7D,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(IID, IID_IAddinDesigner,0xAC0714F3,0x3D04,0x11D1,0xAE,0x7D,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(IID, IID_IAddinInstance,0xAC0714F4,0x3D04,0x11D1,0xAE,0x7D,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(IID, IID__IDTExtensibility2,0xB65AD801,0xABAF,0x11D0,0xBB,0x8B,0x00,0xA0,0xC9,0x0F,0x27,0x44);


MIDL_DEFINE_GUID(CLSID, CLSID_AddinDesigner,0xAC0714F6,0x3D04,0x11D1,0xAE,0x7D,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(CLSID, CLSID_AddinInstance,0xAC0714F7,0x3D04,0x11D1,0xAE,0x7D,0x00,0xA0,0xC9,0x0F,0x26,0xF4);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



