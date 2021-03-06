

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Sun Feb 10 08:03:15 2013
 */
/* Compiler settings for dte80a.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_EnvDTE,0x80CC9F66,0xE7D8,0x4DDD,0x85,0xB6,0xD9,0xE6,0xCD,0x0E,0x93,0xE2);


MIDL_DEFINE_GUID(IID, IID__DTE,0x04A72314,0x32E9,0x48E2,0x9B,0x87,0xA6,0x36,0x03,0x45,0x4F,0x3E);


MIDL_DEFINE_GUID(IID, IID_Windows,0x2294311A,0xB7BC,0x4789,0xB3,0x65,0x1C,0x15,0xFF,0x2C,0xD1,0x7C);


MIDL_DEFINE_GUID(IID, IID_Window,0x0BEAB46B,0x4C07,0x4F94,0xA8,0xD7,0x16,0x26,0x02,0x0E,0x4E,0x53);


MIDL_DEFINE_GUID(IID, IID_LinkedWindows,0xF00EF34A,0xA654,0x4C1B,0x89,0x7A,0x58,0x5D,0x5B,0xCB,0xB3,0x5A);


MIDL_DEFINE_GUID(IID, IID_ProjectItem,0x0B48100A,0x473E,0x433C,0xAB,0x8F,0x66,0xB9,0x73,0x9A,0xB6,0x20);


MIDL_DEFINE_GUID(IID, IID_ProjectItems,0x8E2F1269,0x185E,0x43C7,0x88,0x99,0x95,0x0A,0xD2,0x76,0x9C,0xCF);


MIDL_DEFINE_GUID(IID, IID_Project,0x866311E6,0xC887,0x4143,0x98,0x33,0x64,0x5F,0x5B,0x93,0xF6,0xF1);


MIDL_DEFINE_GUID(IID, IID_Projects,0xE3EC0ADD,0x31B3,0x461F,0x83,0x03,0x8A,0x5E,0x69,0x31,0x25,0x7A);


MIDL_DEFINE_GUID(IID, IID_Properties,0x4CC8CCF5,0xA926,0x4646,0xB1,0x7F,0xB4,0x94,0x0C,0xAE,0xD4,0x72);


MIDL_DEFINE_GUID(IID, IID_Property,0x7B988E06,0x2581,0x485E,0x93,0x22,0x04,0x88,0x1E,0x06,0x00,0xD0);


MIDL_DEFINE_GUID(IID, IID_ConfigurationManager,0x9043FDA1,0x345B,0x4364,0x90,0x0F,0xBC,0x85,0x98,0xEB,0x8E,0x4F);


MIDL_DEFINE_GUID(IID, IID_Configuration,0x90813589,0xFE21,0x4AA4,0xA2,0xE5,0x05,0x3F,0xD2,0x74,0xE9,0x80);


MIDL_DEFINE_GUID(IID, IID_OutputGroups,0xF9FA748E,0xE302,0x44CF,0x89,0x1B,0xE2,0x63,0x18,0x9D,0x58,0x5E);


MIDL_DEFINE_GUID(IID, IID_OutputGroup,0xA3A80783,0x875F,0x435B,0x96,0x39,0xE5,0xCE,0x88,0x8D,0xF7,0x37);


MIDL_DEFINE_GUID(IID, IID_Configurations,0xB6B4C8D6,0x4D27,0x43B9,0xB4,0x5C,0x52,0xBD,0x16,0xB6,0xBA,0x38);


MIDL_DEFINE_GUID(IID, IID_Globals,0xE68A3E0E,0xB435,0x4DDE,0x86,0xB7,0xF5,0xAD,0xEF,0xC1,0x9D,0xF2);


MIDL_DEFINE_GUID(IID, IID_CodeModel,0x0CFBC2B4,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeElements,0x0CFBC2B5,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeElement,0x0CFBC2B6,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_TextPoint,0x7F59E94E,0x4939,0x40D2,0x9F,0x7F,0xB7,0x65,0x1C,0x25,0x90,0x5D);


MIDL_DEFINE_GUID(IID, IID_TextDocument,0xCB218890,0x1382,0x472B,0x91,0x18,0x78,0x27,0x00,0xC8,0x81,0x15);


MIDL_DEFINE_GUID(IID, IID_Document,0x63EB5C39,0xCA8F,0x498E,0x9A,0x66,0x6D,0xD4,0xA2,0x7A,0xC9,0x5B);


MIDL_DEFINE_GUID(IID, IID_Documents,0x9E2CF3EA,0x140F,0x413E,0xBD,0x4B,0x7D,0x46,0x74,0x0C,0xD2,0xF4);


MIDL_DEFINE_GUID(IID, IID_TextSelection,0x1FA0E135,0x399A,0x4D2C,0xA4,0xFE,0xD2,0x1E,0x24,0x80,0xF9,0x21);


MIDL_DEFINE_GUID(IID, IID_VirtualPoint,0x42320454,0x626C,0x4DD0,0x9E,0xCB,0x35,0x7C,0x4F,0x19,0x66,0xD8);


MIDL_DEFINE_GUID(IID, IID_TextRanges,0xB6422E9C,0x9EFD,0x4F87,0xBD,0xDC,0xC7,0xFD,0x8F,0x2F,0xD3,0x03);


MIDL_DEFINE_GUID(IID, IID_TextRange,0x72767524,0xE3B3,0x43D0,0xBB,0x46,0xBB,0xE1,0xD5,0x56,0xA9,0xFF);


MIDL_DEFINE_GUID(IID, IID_EditPoint,0xC1FFE800,0x028B,0x4475,0xA9,0x07,0x14,0xF5,0x1F,0x19,0xBB,0x7D);


MIDL_DEFINE_GUID(IID, IID_TextPane,0x0A3BF283,0x05F8,0x4669,0x9B,0xCB,0xA8,0x4B,0x64,0x23,0x34,0x9A);


MIDL_DEFINE_GUID(IID, IID_TextPanes,0xD9013D31,0x3652,0x46B2,0xA2,0x5A,0x29,0xA8,0x81,0xB9,0xF8,0x6B);


MIDL_DEFINE_GUID(IID, IID_TextWindow,0x2FC54DC9,0x922B,0x44EB,0x8C,0xC0,0xBA,0x18,0x25,0x84,0xDC,0x4B);


MIDL_DEFINE_GUID(IID, IID_CodeType,0x0CFBC2B7,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeNamespace,0x0CFBC2B8,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeClass,0xB1F42514,0x91CD,0x4D3A,0x8B,0x25,0xA3,0x17,0xD8,0x03,0x2B,0x24);


MIDL_DEFINE_GUID(IID, IID_CodeAttribute,0x0CFBC2BE,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeInterface,0xB1F42510,0x91CD,0x4D3A,0x8B,0x25,0xA3,0x17,0xD8,0x03,0x2B,0x24);


MIDL_DEFINE_GUID(IID, IID_CodeFunction,0x0CFBC2B9,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeTypeRef,0x0CFBC2BC,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeParameter,0x0CFBC2BD,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeProperty,0x0CFBC2BB,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeVariable,0x0CFBC2BA,0x0D4E,0x11D3,0x89,0x97,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_CodeStruct,0xB1F42511,0x91CD,0x4D3A,0x8B,0x25,0xA3,0x17,0xD8,0x03,0x2B,0x24);


MIDL_DEFINE_GUID(IID, IID_CodeEnum,0xB1F42512,0x91CD,0x4D3A,0x8B,0x25,0xA3,0x17,0xD8,0x03,0x2B,0x24);


MIDL_DEFINE_GUID(IID, IID_CodeDelegate,0xB1F42513,0x91CD,0x4D3A,0x8B,0x25,0xA3,0x17,0xD8,0x03,0x2B,0x24);


MIDL_DEFINE_GUID(IID, IID_FileCodeModel,0xED1A3F99,0x4477,0x11D3,0x89,0xBF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID_ContextAttributes,0x33C5EBB8,0x244E,0x449D,0x9C,0xEE,0xFA,0xD7,0x0A,0x77,0x4E,0x59);


MIDL_DEFINE_GUID(IID, IID_ContextAttribute,0x1A6E2CB3,0xB897,0x42EB,0x96,0xBE,0xFF,0x0F,0xDB,0x65,0xDB,0x2F);


MIDL_DEFINE_GUID(IID, IID_AddIn,0x53A87FA1,0xCE93,0x48BF,0x95,0x8B,0xC6,0xDA,0x79,0x3C,0x50,0x28);


MIDL_DEFINE_GUID(IID, IID_AddIns,0x50590801,0xD13E,0x4404,0x80,0xC2,0x5C,0xA3,0x0A,0x4D,0x0E,0xE8);


MIDL_DEFINE_GUID(IID, IID_Events,0x134170F8,0x93B1,0x42DD,0x9F,0x89,0xA2,0xAC,0x70,0x10,0xBA,0x07);


MIDL_DEFINE_GUID(IID, IID__CommandEvents,0xA79FC678,0x0D0A,0x496A,0xB9,0xDC,0x0D,0x5B,0x9E,0x1C,0xA9,0xFC);


MIDL_DEFINE_GUID(IID, DIID__dispCommandEvents,0xFF2D5C12,0xFEEA,0x11D0,0xBB,0xC8,0x00,0xA0,0xC9,0x0F,0x27,0x44);


MIDL_DEFINE_GUID(IID, IID__SelectionEvents,0xEB6783DB,0x1819,0x496D,0x84,0xA4,0x3C,0xFF,0x88,0x30,0x10,0xF6);


MIDL_DEFINE_GUID(IID, DIID__dispSelectionEvents,0xDEEB28B3,0x23E6,0x11D1,0xAE,0x5C,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(IID, IID__SolutionEvents,0xBF8BBF37,0x5415,0x46A9,0x94,0x0D,0x59,0x4C,0xAD,0x9D,0xEC,0x26);


MIDL_DEFINE_GUID(IID, DIID__dispSolutionEvents,0xFBCFF1C2,0x261C,0x11D1,0xAE,0x5E,0x00,0xA0,0xC9,0x0F,0x26,0xF4);


MIDL_DEFINE_GUID(IID, IID__BuildEvents,0x794A2BA5,0xFFA6,0x4FC5,0xBF,0x13,0x95,0x7B,0x2C,0x22,0xED,0xD7);


MIDL_DEFINE_GUID(IID, DIID__dispBuildEvents,0x1926364E,0x6B90,0x46CB,0xA4,0x4D,0x8A,0x80,0xFB,0x11,0xAC,0xD9);


MIDL_DEFINE_GUID(IID, IID__WindowEvents,0x0D3A23A8,0x67BB,0x11D2,0x97,0xC1,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, DIID__dispWindowEvents,0x0D3A23A9,0x67BB,0x11D2,0x97,0xC1,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, IID__OutputWindowEvents,0x0A3546A8,0x6840,0x11D2,0x97,0xC1,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, DIID__dispOutputWindowEvents,0x0D3A23AF,0x67BB,0x11D2,0x97,0xC1,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, IID_OutputWindowPane,0xFFC9DFC4,0x61CA,0x4B0C,0x83,0xC2,0x07,0x03,0xA2,0x4F,0x5C,0x16);


MIDL_DEFINE_GUID(IID, IID_OutputWindowPanes,0xB02CF62A,0x9470,0x4308,0xA5,0x21,0x96,0x75,0xFB,0xA3,0x95,0xAB);


MIDL_DEFINE_GUID(IID, IID_OutputWindow,0xEAB0A63D,0xC3A8,0x496E,0x9A,0xCF,0xA8,0x2C,0xEF,0x6A,0x43,0xB3);


MIDL_DEFINE_GUID(IID, IID__FindEvents,0xC5331ACD,0xC5D5,0x11D2,0x85,0x98,0x00,0x60,0x97,0xC6,0x8E,0x81);


MIDL_DEFINE_GUID(IID, DIID__dispFindEvents,0xC5331ACE,0xC5D5,0x11D2,0x85,0x98,0x00,0x60,0x97,0xC6,0x8E,0x81);


MIDL_DEFINE_GUID(IID, IID__TaskListEvents,0x1125C422,0x49BD,0x11D2,0x88,0x23,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, DIID__dispTaskListEvents,0x1125C423,0x49BD,0x11D2,0x88,0x23,0x00,0xC0,0x4F,0xB6,0xC6,0xFF);


MIDL_DEFINE_GUID(IID, IID_TaskItem,0x58E4D419,0x6B8C,0x4C63,0x92,0xDE,0x70,0x16,0x1C,0xD9,0x58,0x90);


MIDL_DEFINE_GUID(IID, IID_TaskItems,0x4B51103D,0x513C,0x4773,0xB5,0x6A,0x35,0x4D,0x09,0x28,0xFD,0x04);


MIDL_DEFINE_GUID(IID, IID_TaskList,0x4E4F0569,0xE16A,0x4DA1,0x92,0xDE,0x10,0x88,0x2A,0x4D,0xDD,0x8C);


MIDL_DEFINE_GUID(IID, IID__DTEEvents,0xFA1BB6D7,0xCA83,0x11D2,0xAA,0xB2,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, DIID__dispDTEEvents,0xB50C9708,0xC909,0x4B87,0xA0,0x3D,0xAF,0x6C,0xC4,0xBF,0xB4,0x22);


MIDL_DEFINE_GUID(IID, IID__DocumentEvents,0xDC5437F5,0xF114,0x11D2,0xAA,0xCF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, DIID__dispDocumentEvents,0xDC5437F6,0xF114,0x11D2,0xAA,0xCF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID__ProjectItemsEvents,0x22800963,0x2811,0x410D,0xBF,0x87,0xA7,0x80,0x8E,0xAC,0x97,0x7D);


MIDL_DEFINE_GUID(IID, DIID__dispProjectItemsEvents,0x6962753F,0xEFD5,0x41C5,0xB0,0x83,0xD7,0x06,0x87,0x16,0x6A,0xEB);


MIDL_DEFINE_GUID(IID, IID__DebuggerEvents,0xD4EAE958,0x0FBA,0x11D3,0xB8,0x80,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, DIID__dispDebuggerEvents,0x46209330,0x0FBA,0x11D3,0xB8,0x80,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Process,0x5C5A0070,0xF396,0x4E37,0xA8,0x2A,0x1B,0x76,0x7E,0x27,0x2D,0xF9);


MIDL_DEFINE_GUID(IID, IID_Programs,0xDC6A118A,0xBBAB,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Program,0x6A38D87C,0xBBA0,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Threads,0x6AA23FB4,0xBBA1,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Thread,0x9407F466,0xBBA1,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_StackFrames,0x4ED85664,0xBBA2,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_StackFrame,0x1342D0D8,0xBBA3,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Expressions,0x2685337A,0xBB9E,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Expression,0x27ADC812,0xBB07,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Debugger,0x338FB9A0,0xBAE5,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Breakpoints,0x25968106,0xBAFB,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Breakpoint,0x11C5114C,0xBB00,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Languages,0xA4F4246C,0xC131,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Language,0xB3CCFA68,0xC145,0x11D2,0x8A,0xD1,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_Processes,0x9F379969,0x5EAC,0x4A54,0xB2,0xBC,0x69,0x46,0xCF,0xFB,0x56,0xEF);


MIDL_DEFINE_GUID(IID, IID__TextEditorEvents,0x23B7A868,0x6C89,0x436A,0x94,0xFA,0x25,0xD7,0x55,0x45,0x6A,0x77);


MIDL_DEFINE_GUID(IID, DIID__dispTextEditorEvents,0x2699DD44,0xC507,0x4DA3,0xAA,0x34,0x31,0x4A,0x6C,0x21,0xDF,0xE2);


MIDL_DEFINE_GUID(IID, IID__Solution,0x26F6CC4B,0x7A48,0x4E4D,0x8A,0xF5,0x9E,0x96,0x02,0x32,0xE0,0x5F);


MIDL_DEFINE_GUID(IID, IID_SolutionBuild,0xA3C1C40C,0x9218,0x4D4C,0x9D,0xAA,0x07,0x5F,0x64,0xF6,0x92,0x2C);


MIDL_DEFINE_GUID(IID, IID_SolutionConfiguration,0x60AAAD75,0xCB8D,0x4C62,0x99,0x59,0x24,0xD6,0xA6,0xA5,0x0D,0xE7);


MIDL_DEFINE_GUID(IID, IID_SolutionConfigurations,0x23E78ED7,0xC9E1,0x462D,0x8B,0xC6,0x36,0x60,0x03,0x48,0x6E,0xD9);


MIDL_DEFINE_GUID(IID, IID_SolutionContexts,0x0685B546,0xFB84,0x4917,0xAB,0x98,0x98,0xD4,0x0F,0x89,0x2D,0x61);


MIDL_DEFINE_GUID(IID, IID_SolutionContext,0xFC6A1A82,0x9C8A,0x47BB,0xA0,0x46,0x6E,0x96,0x5D,0xF5,0xA9,0x9B);


MIDL_DEFINE_GUID(IID, IID_BuildDependencies,0xEAD260EB,0x1E5B,0x450A,0xB6,0x28,0x4C,0xFA,0xDA,0x11,0xB4,0xA1);


MIDL_DEFINE_GUID(IID, IID_BuildDependency,0x9C5CEAAC,0x062F,0x4434,0xA2,0xED,0x78,0xAB,0x4D,0x61,0x34,0xFE);


MIDL_DEFINE_GUID(IID, IID_Commands,0xE6B96CAC,0xB8C7,0x40AE,0xB7,0x05,0x5C,0x81,0x87,0x8C,0x4A,0x9E);


MIDL_DEFINE_GUID(IID, IID_Command,0x5FE10FB0,0x91A1,0x4E55,0xBA,0xAA,0xEC,0xCA,0xE5,0xCC,0xEB,0x94);


MIDL_DEFINE_GUID(IID, IID_SelectedItems,0x6CAA67CF,0x43AE,0x4184,0xAA,0xAB,0x02,0x00,0xDD,0xF6,0xB2,0x40);


MIDL_DEFINE_GUID(IID, IID_SelectedItem,0x049D2CDF,0x3731,0x4CB6,0xA2,0x33,0xBE,0x97,0xBC,0xE9,0x22,0xD3);


MIDL_DEFINE_GUID(IID, IID_SelectionContainer,0x02273422,0x8DD4,0x4A9F,0x8A,0x8B,0xD7,0x04,0x43,0xD5,0x10,0xF4);


MIDL_DEFINE_GUID(IID, IID_WindowConfigurations,0xE577442A,0x98E1,0x46C5,0xBD,0x2E,0xD2,0x58,0x07,0xEC,0x81,0xCE);


MIDL_DEFINE_GUID(IID, IID_WindowConfiguration,0x41D02413,0x8A67,0x4C28,0xA9,0x80,0xAD,0x75,0x39,0xED,0x41,0x5D);


MIDL_DEFINE_GUID(IID, IID_StatusBar,0xC34301A1,0x3EF1,0x41D8,0x93,0x2A,0xFE,0xA4,0xA8,0xA8,0xCE,0x0C);


MIDL_DEFINE_GUID(IID, IID_ObjectExtenders,0x8D0AA9CC,0x8465,0x42F3,0xAD,0x6E,0xDF,0xDE,0x28,0xCC,0xC7,0x5D);


MIDL_DEFINE_GUID(IID, IID_IExtenderProvider,0x4DB06329,0x23F4,0x443B,0x9A,0xBD,0x9C,0xF6,0x11,0xE8,0xAE,0x07);


MIDL_DEFINE_GUID(IID, IID_IExtenderSite,0xE57C510B,0x968B,0x4A3C,0xA4,0x67,0xEE,0x40,0x13,0x15,0x7D,0xC9);


MIDL_DEFINE_GUID(IID, IID_IExtenderProviderUnk,0xF69B64A3,0x9017,0x4E48,0x97,0x84,0xE1,0x52,0xB5,0x1A,0xA7,0x22);


MIDL_DEFINE_GUID(IID, IID_Find,0x40D4B9B6,0x739B,0x4965,0x8D,0x65,0x69,0x2A,0xEC,0x69,0x22,0x66);


MIDL_DEFINE_GUID(IID, IID_ItemOperations,0xD5DBE57B,0xC074,0x4E95,0xB0,0x15,0xAB,0xEE,0xAA,0x39,0x16,0x93);


MIDL_DEFINE_GUID(IID, IID_UndoContext,0xD8DEC44D,0xCAF2,0x4B39,0xA5,0x39,0xB9,0x1A,0xE9,0x21,0xBA,0x92);


MIDL_DEFINE_GUID(IID, IID_Macros,0xF9F99155,0x6D4D,0x49B1,0xAD,0x63,0xC7,0x8C,0x3E,0x8A,0x59,0x16);


MIDL_DEFINE_GUID(IID, IID_SourceControl,0xF1DDC2C2,0xDF76,0x4EBB,0x9D,0xE8,0x48,0xAD,0x25,0x57,0x06,0x2C);


MIDL_DEFINE_GUID(IID, IID_TextBuffer,0xF47DC7E7,0x84B6,0x474F,0xBB,0x91,0x63,0x16,0x40,0xAA,0x05,0x60);


MIDL_DEFINE_GUID(IID, IID_ISupportVSProperties,0x6659ED14,0x2AB6,0x47F3,0xA8,0x90,0x00,0xC8,0xAB,0xA4,0x3B,0x84);


MIDL_DEFINE_GUID(IID, IID_ToolBox,0x56FCD5AF,0x7F17,0x4C5C,0xAA,0x8D,0xAE,0x2B,0xB2,0xDD,0xBF,0x38);


MIDL_DEFINE_GUID(IID, IID_ToolBoxTab,0xCE2DEF9E,0x3387,0x4BF2,0x96,0x7B,0xA1,0xF7,0xF7,0x0D,0xF3,0x25);


MIDL_DEFINE_GUID(IID, IID_ToolBoxTabs,0xCF177B52,0x4F2F,0x42A0,0x8D,0xA3,0xCE,0x78,0x67,0x9A,0x0D,0x2D);


MIDL_DEFINE_GUID(IID, IID_ToolBoxItems,0x395C7DFB,0xF158,0x431C,0x8F,0x43,0xDD,0xA8,0x3B,0x4E,0xF5,0x4E);


MIDL_DEFINE_GUID(IID, IID_ToolBoxItem,0x46538D1B,0x4D81,0x4002,0x8B,0xB4,0xDB,0xDB,0x65,0xBA,0xBB,0x23);


MIDL_DEFINE_GUID(IID, IID_IExtensibleObjectSite,0xEB5BE8A7,0xE593,0x4DE6,0xA9,0x23,0xC2,0xAF,0xEC,0xB9,0x63,0x36);


MIDL_DEFINE_GUID(IID, IID_IVsProfferCommands,0x8CC0CDE1,0xC16A,0x4749,0x99,0xAF,0x6F,0x75,0x23,0xC3,0x4A,0x57);


MIDL_DEFINE_GUID(IID, IID_IFilterProperties,0xAADE1F59,0x6ACE,0x43D1,0x8F,0xCA,0x42,0xAF,0x3A,0x5C,0x4F,0x3C);


MIDL_DEFINE_GUID(IID, IID_UIHierarchyItem,0xFBD0D024,0x09CD,0x4D9F,0x9E,0x2B,0xCA,0xCD,0x62,0x84,0x26,0xA5);


MIDL_DEFINE_GUID(IID, IID_UIHierarchyItems,0xDB8406B0,0xA916,0x449C,0xA2,0x77,0xBB,0x04,0x02,0x8F,0x43,0x94);


MIDL_DEFINE_GUID(IID, IID_UIHierarchy,0x72A2A2EF,0xC209,0x408C,0xA3,0x77,0x76,0x87,0x17,0x74,0xAD,0xB7);


MIDL_DEFINE_GUID(IID, IID_TextEditor,0x9FF3DDCA,0x1795,0x4191,0xA5,0xB1,0x02,0xD1,0xAE,0x35,0xD0,0x74);


MIDL_DEFINE_GUID(IID, IID__DebuggerEventsRoot,0xD4BB39FB,0x0F0E,0x11D3,0xB8,0x80,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(IID, IID_IDTWizard,0xE914BBE1,0x03A4,0x11D1,0xBB,0xCD,0x00,0xA0,0xC9,0x0F,0x27,0x44);


MIDL_DEFINE_GUID(IID, IID_IVsExtensibility,0x3C536122,0x57B1,0x46DE,0xAB,0x34,0xAC,0xC5,0x24,0x14,0x00,0x93);


MIDL_DEFINE_GUID(IID, IID_IVsGlobalsCallback,0xE2CC506A,0x588B,0x4F65,0xA1,0xF0,0x22,0x44,0xC0,0x60,0xAB,0xCB);


MIDL_DEFINE_GUID(IID, IID_IVsGlobals,0x192AC688,0xE7C6,0x4F9D,0x81,0x80,0x4B,0x37,0xEF,0xBF,0x6F,0x3A);


MIDL_DEFINE_GUID(IID, IID_IDTCommandTarget,0x7EF39A3E,0x590D,0x4879,0x88,0xD4,0xC9,0xBE,0x5B,0xCF,0xD9,0x2E);


MIDL_DEFINE_GUID(IID, IID_CommandWindow,0x509B9955,0x7303,0x48C9,0x90,0xD4,0xE1,0x65,0xB9,0x74,0xE6,0xBA);


MIDL_DEFINE_GUID(IID, IID__ProjectsEvents,0x85451F83,0xB5CA,0x437F,0xA6,0x19,0x0C,0xB7,0x05,0x70,0x74,0x20);


MIDL_DEFINE_GUID(IID, DIID__dispProjectsEvents,0x7F508D55,0x627F,0x4D7F,0xBE,0x0B,0x9E,0x3D,0x82,0x9F,0xF0,0xED);


MIDL_DEFINE_GUID(IID, IID__MiscSlnFilesEventsRoot,0x7658B944,0xF37B,0x11D2,0xAA,0xCF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID__CommandBarControlEvents,0x9E66FE98,0xA1C6,0x421D,0x8C,0x0C,0x6D,0xA4,0xE6,0x52,0xE7,0x70);


MIDL_DEFINE_GUID(IID, DIID__dispCommandBarControlEvents,0x987FB893,0xF96D,0x11D0,0xBB,0xBB,0x00,0xA0,0xC9,0x0F,0x27,0x44);


MIDL_DEFINE_GUID(IID, IID__DocumentEventsRoot,0xDC5437F4,0xF114,0x11D2,0xAA,0xCF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(IID, IID__TextEditorEventsRoot,0xB3C38885,0xB288,0x44A8,0xB2,0x90,0x34,0xFE,0x63,0xBF,0x3C,0x76);


MIDL_DEFINE_GUID(IID, IID__WindowEventsRoot,0x17D12026,0xBA99,0x403E,0xA3,0x59,0x71,0xFD,0x1E,0x5A,0x72,0xCD);


MIDL_DEFINE_GUID(IID, IID__OutputWindowEventsRoot,0xAA6F4085,0x33B6,0x4629,0xB9,0xEA,0x69,0x21,0x01,0x00,0x7C,0xC2);


MIDL_DEFINE_GUID(IID, IID__TaskListEventsRoot,0x6BC8C372,0xC6F0,0x4BE6,0xB2,0x55,0x82,0x7A,0xC1,0x90,0xBF,0x71);


MIDL_DEFINE_GUID(IID, IID_IDTToolsOptionsPage,0xBDCAF240,0x2692,0x4713,0x90,0x2A,0xB1,0x10,0xB1,0xD0,0xF1,0x00);


MIDL_DEFINE_GUID(IID, IID__EnvironmentWebBrowser,0xA3286B03,0x5AC6,0x44F0,0x8C,0xC3,0xEB,0xED,0x7F,0x11,0x24,0xE5);


MIDL_DEFINE_GUID(IID, IID__EnvironmentHelp,0xAEBDED64,0xA206,0x11D3,0xB8,0xB5,0x00,0xC0,0x4F,0x79,0xF8,0x02);


MIDL_DEFINE_GUID(IID, IID_ColorableItems,0xE5D17051,0xD6E5,0x4DA7,0x8B,0x3A,0xCA,0x88,0x86,0x17,0xA5,0xE7);


MIDL_DEFINE_GUID(IID, IID_FontsAndColorsItems,0xF25AE7E6,0x1460,0x4BA4,0x8E,0x5E,0xBB,0xBE,0x74,0x6D,0xE3,0x53);


MIDL_DEFINE_GUID(IID, IID__FontsAndColors,0x256068F6,0x1ADD,0x4F7B,0xBA,0x76,0x57,0x13,0x14,0xC4,0x13,0xAD);


MIDL_DEFINE_GUID(IID, IID__EnvironmentGeneral,0x48E61D9C,0x8C8D,0x42D3,0x91,0x4B,0x46,0xD7,0x0C,0x8B,0x7A,0x40);


MIDL_DEFINE_GUID(IID, IID__EnvironmentFontsAndColors,0xF809CAB6,0x2C9F,0x41F2,0xA5,0xAF,0xE2,0x6F,0xB8,0x0E,0x62,0xAD);


MIDL_DEFINE_GUID(IID, IID__EnvironmentProjectsAndSolution,0x478F06D4,0x5D57,0x473F,0x9B,0x74,0x5F,0x8E,0x88,0xEF,0xA5,0xE7);


MIDL_DEFINE_GUID(IID, IID__EnvironmentDocuments,0x76ED1C48,0xED86,0x4E9E,0xAC,0xF8,0xA4,0x0E,0x76,0x5D,0xAF,0x25);


MIDL_DEFINE_GUID(IID, IID__EnvironmentTaskList,0x4BC18A5B,0xDBB6,0x4AF5,0xA4,0x43,0x2E,0x3F,0x19,0x36,0x53,0x04);


MIDL_DEFINE_GUID(IID, IID__EnvironmentKeyboard,0x9C722678,0x490D,0x408F,0x98,0xAE,0xB6,0xB9,0xA6,0x8A,0xA4,0x5D);


MIDL_DEFINE_GUID(IID, IID_IExtensibleObject,0x86C31347,0x5B52,0x4715,0xB4,0x54,0xA6,0xE5,0xFC,0xAB,0x97,0x5D);


MIDL_DEFINE_GUID(IID, IID_IVsTextEditGeneral,0x2E1BFD1C,0x5B26,0x4ACA,0xB9,0x7B,0xED,0x9D,0x26,0x1B,0xA3,0xE7);


MIDL_DEFINE_GUID(IID, IID_IVsTextEditPerLanguage,0x5943BD7E,0xD722,0x42DB,0xA2,0x51,0xFE,0x2A,0xDD,0x87,0x11,0xEA);


MIDL_DEFINE_GUID(IID, IID_IVsTextEditFonts,0xF39AB913,0xE6C9,0x4546,0xA2,0x65,0x1E,0x43,0xF8,0xDE,0x92,0x4C);


MIDL_DEFINE_GUID(IID, IID_HTMLWindow,0xF6576203,0xFBCE,0x477E,0xA6,0x6B,0xED,0xA2,0x37,0xBB,0x68,0xA7);


MIDL_DEFINE_GUID(CLSID, CLSID_DTE,0x3C9CFE1E,0x389F,0x4118,0x9F,0xAD,0x36,0x53,0x85,0x19,0x03,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandEvents,0x1DED92B5,0x9A46,0x4B29,0x93,0xEF,0xB5,0xE0,0x70,0x16,0x65,0x9E);


MIDL_DEFINE_GUID(CLSID, CLSID_SelectionEvents,0xAF37511E,0x9E9D,0x4234,0xA5,0xA1,0x75,0x84,0xD2,0x90,0xE0,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_SolutionEvents,0x88AC98C7,0xB38C,0x404B,0xBD,0x86,0xD2,0xA4,0xF2,0xE8,0x9D,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_BuildEvents,0xD83D60E3,0x229F,0x4660,0x8D,0xD0,0x28,0xB6,0x29,0xEE,0xDC,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_WindowEvents,0x2E260FD4,0xC130,0x4E6D,0x8E,0xBC,0x4A,0x3B,0xFD,0x18,0x81,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_OutputWindowEvents,0x3760037F,0xB012,0x44F8,0x9C,0x23,0x36,0x09,0xD7,0xA1,0x6D,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_FindEvents,0x811322BC,0x042D,0x4828,0xBF,0xF2,0x64,0x0E,0xF8,0xB7,0x20,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_TaskListEvents,0x29617ACD,0x7859,0x4328,0xBE,0x09,0x29,0x8F,0x91,0xF4,0x81,0x96);


MIDL_DEFINE_GUID(CLSID, CLSID_DTEEvents,0xC6304BAB,0x6765,0x4C63,0x90,0x17,0x49,0x40,0xAE,0xB6,0xF2,0x07);


MIDL_DEFINE_GUID(CLSID, CLSID_DocumentEvents,0xDC5437F7,0xF114,0x11D2,0xAA,0xCF,0x00,0xC0,0x4F,0x68,0x8D,0xDE);


MIDL_DEFINE_GUID(CLSID, CLSID_ProjectItemsEvents,0xDE6C1098,0x93CA,0x4F49,0xBE,0xF0,0x26,0x2A,0x13,0xCA,0x11,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_DebuggerEvents,0x0C763210,0x0FBB,0x11D3,0xB8,0x80,0x00,0xC0,0x4F,0x79,0xE4,0x79);


MIDL_DEFINE_GUID(CLSID, CLSID_TextEditorEvents,0xADF22C37,0x0069,0x4ADF,0xB1,0x2D,0xD8,0xD4,0x7C,0x38,0xFE,0x79);


MIDL_DEFINE_GUID(CLSID, CLSID_Solution,0xB35CAA8C,0x77DE,0x4AB3,0x8E,0x5A,0xF0,0x38,0xE3,0xFC,0x60,0x56);


MIDL_DEFINE_GUID(CLSID, CLSID_ProjectsEvents,0x536A4BE3,0xA376,0x408E,0x95,0x4C,0x47,0x1C,0x77,0x9E,0x21,0x6F);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandBarEvents,0xBFD4B2B2,0x9EEC,0x4DB8,0xAB,0xA0,0xAC,0x31,0x6F,0x4C,0x73,0x28);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



