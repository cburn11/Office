

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_ClipboardToWord,0xa2715f71,0x6d7c,0x4731,0xb2,0x51,0x7f,0x4a,0x46,0x68,0xc7,0x2b);


MIDL_DEFINE_GUID(IID, IID_IPlugin,0xff80ab35,0x93ad,0x4441,0xa3,0x37,0x8c,0xd2,0x74,0x8a,0xd5,0x22);


MIDL_DEFINE_GUID(IID, IID_IApplication,0xf31714c5,0xe3bf,0x42e7,0xae,0x74,0xe4,0x4c,0x97,0x96,0xd7,0x35);


MIDL_DEFINE_GUID(IID, IID_IClipboardEvents,0xa5ded517,0x3d32,0x41e8,0xb1,0x3a,0xf2,0x47,0x20,0x9c,0x4a,0x9d);


MIDL_DEFINE_GUID(IID, IID_IApplicationEvents,0x7f2a0ab1,0x33f0,0x4429,0xa9,0x96,0xb5,0x57,0x83,0x95,0xde,0xfd);


MIDL_DEFINE_GUID(CLSID, CLSID_Application,0x2867c8f1,0x7a59,0x445c,0xb2,0xd2,0x77,0xef,0x58,0xa3,0xac,0x8d);


MIDL_DEFINE_GUID(CLSID, CLSID_ClipboardEvents,0xbb60afb3,0x15b7,0x4afd,0x9f,0x8c,0x89,0xd0,0xba,0x7a,0x6d,0x88);


MIDL_DEFINE_GUID(CLSID, CLSID_ClipboardEventsPlugin,0x537c3d54,0x07b1,0x426d,0x8c,0x65,0xca,0x2b,0x05,0x4a,0x41,0xa7);


MIDL_DEFINE_GUID(CLSID, CLSID_ApplicationEvents,0xc4af1965,0xba78,0x4bac,0xa5,0xa0,0x69,0xf8,0xb5,0x34,0x7d,0x31);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



