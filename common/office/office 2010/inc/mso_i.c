

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Nov 10 10:52:34 2013
 */
/* Compiler settings for mso.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_Office,0x2DF8D04C,0x5BFA,0x101B,0xBD,0xE5,0x00,0xAA,0x00,0x44,0xDE,0x52);


MIDL_DEFINE_GUID(IID, IID_IAccessible,0x618736E0,0x3C3D,0x11CF,0x81,0x0C,0x00,0xAA,0x00,0x38,0x9B,0x71);


MIDL_DEFINE_GUID(IID, IID__IMsoDispObj,0x000C0300,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__IMsoOleAccDispObj,0x000C0301,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CommandBars,0x000C0302,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CommandBar,0x000C0304,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CommandBarControls,0x000C0306,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CommandBarControl,0x000C0308,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CommandBarButton,0x000C030E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CommandBarPopup,0x000C030A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CommandBarComboBox,0x000C030C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CommandBarActiveX,0x000C030D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Adjustments,0x000C0310,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CalloutFormat,0x000C0311,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ColorFormat,0x000C0312,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ConnectorFormat,0x000C0313,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FillFormat,0x000C0314,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FreeformBuilder,0x000C0315,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_GroupShapes,0x000C0316,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_LineFormat,0x000C0317,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ShapeNode,0x000C0318,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ShapeNodes,0x000C0319,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PictureFormat,0x000C031A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ShadowFormat,0x000C031B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Script,0x000C0341,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Scripts,0x000C0340,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Shape,0x000C031C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ShapeRange,0x000C031D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Shapes,0x000C031E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TextEffectFormat,0x000C031F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TextFrame,0x000C0320,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThreeDFormat,0x000C0321,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDispCagNotifySink,0x000C0359,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Balloon,0x000C0324,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_BalloonCheckboxes,0x000C0326,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_BalloonCheckbox,0x000C0328,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_BalloonLabels,0x000C032E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_BalloonLabel,0x000C0330,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_AnswerWizardFiles,0x000C0361,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_AnswerWizard,0x000C0360,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Assistant,0x000C0322,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DocumentProperty,0x2DF8D04E,0x5BFA,0x101B,0xBD,0xE5,0x00,0xAA,0x00,0x44,0xDE,0x52);


MIDL_DEFINE_GUID(IID, IID_DocumentProperties,0x2DF8D04D,0x5BFA,0x101B,0xBD,0xE5,0x00,0xAA,0x00,0x44,0xDE,0x52);


MIDL_DEFINE_GUID(IID, IID_IFoundFiles,0x000C0338,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IFind,0x000C0337,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FoundFiles,0x000C0331,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PropertyTest,0x000C0333,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PropertyTests,0x000C0334,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileSearch,0x000C0332,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_COMAddIn,0x000C033A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_COMAddIns,0x000C0339,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_LanguageSettings,0x000C0353,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICommandBarsEvents,0x55F88892,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(IID, DIID__CommandBarsEvents,0x000C0352,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICommandBarComboBoxEvents,0x55F88896,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(IID, DIID__CommandBarComboBoxEvents,0x000C0354,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICommandBarButtonEvents,0x55F88890,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(IID, DIID__CommandBarButtonEvents,0x000C0351,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebPageFont,0x000C0913,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebPageFonts,0x000C0914,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_HTMLProjectItem,0x000C0358,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_HTMLProjectItems,0x000C0357,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_HTMLProject,0x000C0356,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MsoDebugOptions,0x000C035A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileDialogSelectedItems,0x000C0363,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileDialogFilter,0x000C0364,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileDialogFilters,0x000C0365,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileDialog,0x000C0362,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SignatureSet,0x000C0410,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Signature,0x000C0411,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoEnvelopeVB,0x000672AC,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, DIID_IMsoEnvelopeVBEvents,0x000672AD,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_FileTypes,0x000C036C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SearchFolders,0x000C036A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ScopeFolders,0x000C0369,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ScopeFolder,0x000C0368,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SearchScope,0x000C0367,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SearchScopes,0x000C0366,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDiagram,0x000C036D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DiagramNodes,0x000C036E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DiagramNodeChildren,0x000C036F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DiagramNode,0x000C0370,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CanvasShapes,0x000C0371,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_OfficeDataSourceObject,0x000C1530,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ODSOColumn,0x000C1531,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ODSOColumns,0x000C1532,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ODSOFilter,0x000C1533,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ODSOFilters,0x000C1534,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_NewFile,0x000C0936,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebComponent,0x000CD100,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebComponentWindowExternal,0x000CD101,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebComponentFormat,0x000CD102,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ILicWizExternal,0x4CAC6328,0xB9B0,0x11D3,0x8D,0x59,0x00,0x50,0x04,0x83,0x84,0xE3);


MIDL_DEFINE_GUID(IID, IID_ILicValidator,0x919AA22C,0xB9AD,0x11D3,0x8D,0x59,0x00,0x50,0x04,0x83,0x84,0xE3);


MIDL_DEFINE_GUID(IID, IID_ILicAgent,0x00194002,0xD9C3,0x11D3,0x8D,0x59,0x00,0x50,0x04,0x83,0x84,0xE3);


MIDL_DEFINE_GUID(IID, IID_IMsoEServicesDialog,0x000C0372,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WebComponentProperties,0x000C0373,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartDocument,0x000C0377,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceMember,0x000C0381,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceMembers,0x000C0382,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceTask,0x000C0379,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceTasks,0x000C037A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceFile,0x000C037B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceFiles,0x000C037C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceFolder,0x000C037D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceFolders,0x000C037E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceLink,0x000C037F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspaceLinks,0x000C0380,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SharedWorkspace,0x000C0385,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Sync,0x000C0386,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DocumentLibraryVersion,0x000C0387,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DocumentLibraryVersions,0x000C0388,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_UserPermission,0x000C0375,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Permission,0x000C0376,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MsoDebugOptions_UTRunResult,0x000C038C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MsoDebugOptions_UT,0x000C038B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MsoDebugOptions_UTs,0x000C038A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MsoDebugOptions_UTManager,0x000C0389,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MetaProperty,0x000C038F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_MetaProperties,0x000C038E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PolicyItem,0x000C0391,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ServerPolicy,0x000C0390,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DocumentInspector,0x000C0393,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_DocumentInspectors,0x000C0392,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WorkflowTask,0x000CD900,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WorkflowTasks,0x000CD901,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WorkflowTemplate,0x000CD902,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_WorkflowTemplates,0x000CD903,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IDocumentInspector,0x000CD706,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SignatureSetup,0x000CD6A1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SignatureInfo,0x000CD6A2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SignatureProvider,0x000CD6A3,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLPrefixMapping,0x000CDB10,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLPrefixMappings,0x000CDB00,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLSchema,0x000CDB01,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CustomXMLSchemaCollection,0x000CDB02,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLNodes,0x000CDB03,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLNode,0x000CDB04,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLValidationError,0x000CDB0E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomXMLValidationErrors,0x000CDB0F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CustomXMLPart,0x000CDB05,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICustomXMLPartEvents,0x000CDB06,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, DIID__CustomXMLPartEvents,0x000CDB07,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CustomXMLParts,0x000CDB09,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICustomXMLPartsEvents,0x000CDB0A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, DIID__CustomXMLPartsEvents,0x000CDB0B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_GradientStop,0x000C03BF,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_GradientStops,0x000C03C0,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SoftEdgeFormat,0x000C03BC,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_GlowFormat,0x000C03BD,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ReflectionFormat,0x000C03BE,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ParagraphFormat2,0x000C0399,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Font2,0x000C039A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TextColumn2,0x000C03B2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TextRange2,0x000C0397,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TextFrame2,0x000C0398,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeColor,0x000C03A1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeColorScheme,0x000C03A2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeFont,0x000C03A3,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeFonts,0x000C03A4,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeFontScheme,0x000C03A5,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ThemeEffectScheme,0x000C03A6,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_OfficeTheme,0x000C03A0,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID__CustomTaskPane,0x000C033B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_CustomTaskPaneEvents,0x8A64A872,0xFC6B,0x4D4A,0x92,0x6E,0x3A,0x36,0x89,0x56,0x2C,0x1C);


MIDL_DEFINE_GUID(IID, DIID__CustomTaskPaneEvents,0x000C033C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICTPFactory,0x000C033D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ICustomTaskPaneConsumer,0x000C033E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IRibbonUI,0x000C03A7,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IRibbonControl,0x000C0395,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IRibbonExtensibility,0x000C0396,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IAssistance,0x4291224C,0xDEFE,0x485B,0x8E,0x69,0x6C,0xF8,0xAA,0x85,0xCB,0x76);


MIDL_DEFINE_GUID(IID, IID_IMsoChartData,0x000C172F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoChart,0x000C1709,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoCorners,0x000C1714,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoLegend,0x000C1710,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoBorder,0x000C1717,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoWalls,0x000C1715,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoFloor,0x000C1716,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoPlotArea,0x000C1724,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoChartArea,0x000C1728,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoSeriesLines,0x000C1729,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoLeaderLines,0x000C1723,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_GridLines,0x000C1725,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoUpBars,0x000C172A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDownBars,0x000C172D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoInterior,0x000C171B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ChartFillFormat,0x000C171C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_LegendEntries,0x000C1719,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ChartFont,0x000C1718,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ChartColorFormat,0x000C171D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_LegendEntry,0x000C171A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoLegendKey,0x000C171E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SeriesCollection,0x000C170A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoSeries,0x000C170B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoErrorBars,0x000C1721,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoTrendline,0x000C170E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Trendlines,0x000C1722,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDataLabels,0x000C171F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDataLabel,0x000C1720,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Points,0x000C170D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ChartPoint,0x000C170C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Axes,0x000C1712,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoAxis,0x000C1713,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoDataTable,0x000C1711,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoChartTitle,0x000C170F,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoAxisTitle,0xABFA087C,0xF703,0x4D53,0x94,0x6E,0x37,0xFF,0x82,0xB2,0xC9,0x94);


MIDL_DEFINE_GUID(IID, IID_IMsoDisplayUnitLabel,0x6EA00553,0x9439,0x4D5A,0xB1,0xE6,0xDC,0x15,0xA5,0x4D,0xA8,0xB2);


MIDL_DEFINE_GUID(IID, IID_IMsoTickLabels,0x000C1726,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoHyperlinks,0xA98639A1,0xCB0C,0x4A5C,0xA5,0x11,0x96,0x54,0x7F,0x75,0x2A,0xCD);


MIDL_DEFINE_GUID(IID, IID_IMsoDropLines,0x000C172C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoHiLoLines,0x000C172E,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoChartGroup,0x000C1727,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ChartGroups,0x000C172B,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoCharacters,0x000C1731,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoChartFormat,0x000C1730,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_BulletFormat2,0x000C03B9,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TabStops2,0x000C03BA,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_TabStop2,0x000C03BB,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Ruler2,0x000C03C1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_RulerLevels2,0x000C03C2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_RulerLevel2,0x000C03C3,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_EncryptionProvider,0x000CD809,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IBlogExtensibility,0x000C03C4,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IBlogPictureExtensibility,0x000C03C5,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IConverterPreferences,0x000C03D4,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IConverterApplicationPreferences,0x000C03D5,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IConverterUICallback,0x000C03D6,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IConverter,0x000C03D7,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArt,0x000C03C6,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtNodes,0x000C03C7,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtNode,0x000C03C8,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtLayouts,0x000C03C9,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtLayout,0x000C03CA,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtQuickStyles,0x000C03CB,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtQuickStyle,0x000C03CC,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtColors,0x000C03CD,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_SmartArtColor,0x000C03CE,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerField,0x000C03E0,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerFields,0x000C03E1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerProperty,0x000C03E2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerProperties,0x000C03E3,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerResult,0x000C03E4,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerResults,0x000C03E5,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PickerDialog,0x000C03E6,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_IMsoContactCard,0x000C03F0,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_EffectParameter,0x000C03CF,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_EffectParameters,0x000C03D0,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PictureEffect,0x000C03D1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_PictureEffects,0x000C03D2,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_Crop,0x000C03D3,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(IID, IID_ContactCard,0x000C03F1,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandBars,0x55F88893,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandBarComboBox,0x55F88897,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(CLSID, CLSID_CommandBarButton,0x55F88891,0x7708,0x11D1,0xAC,0xEB,0x00,0x60,0x08,0x96,0x1D,0xA5);


MIDL_DEFINE_GUID(CLSID, CLSID_MsoEnvelope,0x0006F01A,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CustomXMLSchemaCollection,0x000CDB0D,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CustomXMLPart,0x000CDB08,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CustomXMLParts,0x000CDB0C,0x0000,0x0000,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_CustomTaskPane,0xC5771BE5,0xA188,0x466B,0xAB,0x31,0x00,0xA6,0xA3,0x2B,0x1B,0x1C);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



