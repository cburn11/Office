#include <Windows.h>
#include <windowsx.h>

#include <string>

#include "resource.h"
#include "CommonHeaders.h"
#include "ConnectableSource.h"

extern "C" void * g_pConnectableSource;

HWND hwndList;

#define DELETE_KEY	1000

LRESULT CALLBACK CustomListProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {
	auto defproc = (WNDPROC) GetWindowLongPtr(hwnd, GWLP_USERDATA);

	HWND hwndParent = GetParent(hwnd);

	switch( message ) {

	case WM_KEYDOWN:
		
		if( wParam == VK_DELETE ) {
		
			NMHDR nmh;
			nmh.code = DELETE_KEY;
			nmh.idFrom = GetDlgCtrlID(hwnd);
			nmh.hwndFrom = hwnd;
			SendMessage(hwndParent, WM_NOTIFY, nmh.idFrom, (LPARAM) &nmh);
		}
		
		break;
	}

	return CallWindowProc(defproc, hwnd, message, wParam, lParam);
}

namespace CustomDialog {

	void Cls_OnNotify(HWND hwnd, int id, NMHDR * pNMHDR) {

		if( IDC_LIST_HOOK == id ) {
			auto sel = ListBox_GetCurSel(hwndList);
			
			auto cch = ListBox_GetTextLen(hwndList, sel);
			
			auto szText = ( WCHAR * ) new WCHAR[cch + 1]{ 0 };
			if( !szText ) return;

			ListBox_GetText(hwndList, sel, szText);
			std::wstring path{ szText };
			delete[] szText;

			if( ( (ConnectableSource *) g_pConnectableSource )->UnloadPlugin(path) ) {
				( (ConnectableSource *) g_pConnectableSource )->UpdatePluginList(hwndList);
			}
		}
	}

	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam) {

		hwndList = GetDlgItem(hwnd, IDC_LIST_HOOK);

		auto oldproc = SetWindowLongPtr(hwndList, GWLP_WNDPROC, (LONG_PTR) CustomListProc);
		SetWindowLongPtr(hwndList, GWLP_USERDATA, oldproc);

		((ConnectableSource *) g_pConnectableSource)->UpdatePluginList(hwndList);

		return TRUE;
	}

	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {

		switch( id ) {

		case IDCANCEL:
			EndDialog(hwnd, 0);
			break;

		case IDC_BUTTON_ADD:
			
			HWND hwndEdit = GetDlgItem(hwnd, IDC_EDIT_HOOK);

			auto cch = Edit_GetTextLength(hwndEdit);
			WCHAR * szPath = new WCHAR[cch + 1];
			if( !szPath ) return;

			Edit_GetText(hwndEdit, szPath, cch + 1);
			
			std::wstring path{ szPath };

			delete[] szPath;
			IPlugin * pdisp = NULL;
			if( ((ConnectableSource *) g_pConnectableSource)->LoadPlugin(path, &pdisp) ) {
				((ConnectableSource *) g_pConnectableSource)->UpdatePluginList(hwndList);
				pdisp->Release();
			} else {
				MessageBox(hwnd, path.c_str(), L"Unable to Load library and create instance.", MB_ICONERROR);
			}

			break;

		}
	}
}

extern "C" INT_PTR CALLBACK CustomDlgProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam) {

	switch( message ) {

		HANDLE_DLG_MSG(hwnd, WM_INITDIALOG, CustomDialog::Cls_OnInitDialog);
		HANDLE_DLG_MSG(hwnd, WM_COMMAND, CustomDialog::Cls_OnCommand);
		HANDLE_DLG_MSG(hwnd, WM_NOTIFY, CustomDialog::Cls_OnNotify);

	}

	return FALSE;
}