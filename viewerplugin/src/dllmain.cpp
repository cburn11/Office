#include <Windows.h>
#include <windowsx.h>

#include "ClipboardToWord_h.h"

#include "ViewerPlugin.h"

struct CAtlViewerPluginModule : public CAtlDllModuleT<CAtlViewerPluginModule> {

	DECLARE_LIBID(LIBID_ClipboardToWord)
};

CAtlViewerPluginModule _AtlModule;

HMODULE			g_hModule;	

BOOL WINAPI DllMain(HMODULE hModule, DWORD reason, void * pv) {

	switch( reason ) {

	case DLL_PROCESS_ATTACH:

		g_hModule = hModule;

		break;

	}

	return _AtlModule.DllMain(reason, pv);
}

HRESULT CALLBACK DllGetClassObject(REFCLSID objGuid, REFIID factoryGuid, void ** ppv) {

	return _AtlModule.DllGetClassObject(objGuid, factoryGuid, ppv);

}

HRESULT CALLBACK DllCanUnloadNow() {

	return _AtlModule.DllCanUnloadNow();

}

OBJECT_ENTRY_AUTO(CLSID_ClipboardEventsPlugin, ViewerPlugin)