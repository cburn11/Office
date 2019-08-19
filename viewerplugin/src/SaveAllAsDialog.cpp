
#include <Windows.h>
#include <windowsx.h>

#include <CommCtrl.h>
#define ComCtl6
#include <commonheaders.h>

#include <string>
#include <utility>

#include "SaveAllAsDialog.h"
#include "resource.h"

SaveAllAsDialog::SaveAllAsDialog(HWND hwndParent) {

	m_hInstance = (HINSTANCE) GetModuleHandle(L"ViewerPlugin");
	m_szTemplate = MAKEINTRESOURCE(IDD_DIALOG_SAVEALLAS);
	m_hwndParent = hwndParent;
}

INT_PTR SaveAllAsDialog::MessageHandler(UINT const message, WPARAM const wParam, LPARAM const lParam) {

	switch( message ) {

		HANDLE_DLG_MSG(m_window, WM_INITDIALOG, Cls_OnInitDialog);

		HANDLE_DLG_MSG_DERIVED(m_window, WM_COMMAND, Cls_OnCommand, __super::MessageHandler(message, wParam, lParam));

	case WM_USER:

		return 0;
	}

	return __super::MessageHandler(message, wParam, lParam);
}

BOOL SaveAllAsDialog::Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam) {

	m_hwndSavePath = GetDlgItem(hwnd, IDC_EDIT_SAVEALLAS_PATH);
	m_hwndIndex = GetDlgItem(hwnd, IDC_EDIT_SAVEALLAS_INDEX);
	m_hwndNoOverwrite = GetDlgItem(hwnd, IDC_CHECK_SAVEALLAS_OVERWRITE);
	m_hwndUseDate = GetDlgItem(hwnd, IDC_CHECK_SAVEALLAS_DATE);
	m_hwndPrefix = GetDlgItem(hwnd, IDC_EDIT_SAVEALLAS_PREFIX);
	m_hwndUpDown = GetDlgItem(hwnd, IDC_SPIN_SAVEALLAS_INDEX);

	SyncSaveSettings();

	ToggleNoOverwrite(true);
	ToggleUseDate(true);

	SendMessage(m_hwndUpDown, UDM_SETBUDDY, (WPARAM) m_hwndIndex, 0);

	return TRUE;
}

void SaveAllAsDialog::Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify) {

	switch( id ) {

	case IDC_BUTTON_SAVEALLAS_BROWSE: {

		auto szPath = (const WCHAR *) SendMessage(m_hwndParent, WM_SAVEALLASDIALOG_ACTION, MAKEWPARAM(ACTION_SHOWBROWSEDIALOG, 0), 0);
		SendMessage(m_hwndParent, WM_SAVEALLASDIALOG_ACTION, MAKEWPARAM(ACTION_SETCURSAVEDIR, 0), (LPARAM) szPath);
		SyncSaveSettings();

		break; }

	case IDOK:

		OK_Action();

		break;

	case IDC_EDIT_SAVEALLAS_PATH:

		if( EN_UPDATE == codeNotify ) {

			KillTimer(hwnd, m_idTimer);
				
			m_idTimer = SetTimer(hwnd, 0, 500, [](HWND hwnd, UINT message, UINT_PTR idEvent, DWORD dwTime) {
				PostMessage(hwnd, WM_USER, 0, 0);
			});
		}

		break;
	}
}

void SaveAllAsDialog::SyncSaveSettings() {
	   
	auto szPath = (const WCHAR *) SendMessage(m_hwndParent, WM_SAVEALLASDIALOG_ACTION, MAKEWPARAM(ACTION_GETCURSAVEDIR, 0), 0);
	SetSavePath(szPath);

	auto offset = (UINT) SendMessage(m_hwndParent, WM_SAVEALLASDIALOG_ACTION, MAKEWPARAM(ACTION_GETCUROFFSET, 0), 0);
	SetOffset(offset);

	auto szPrefix = (const WCHAR *) SendMessage(m_hwndParent, WM_SAVEALLASDIALOG_ACTION, MAKEWPARAM(ACTION_GETCURPREFIX, 0), 0);
	SetPrefix(szPrefix);
}


void SaveAllAsDialog::SetSavePath(const WCHAR * szSavePath) {

	if( !szSavePath )				return;

	if( m_saveDir == szSavePath )	return;

	m_saveDir = szSavePath;

	Edit_SetText(m_hwndSavePath, szSavePath);
}

void SaveAllAsDialog::ToggleNoOverwrite(bool fNoOverwrite) {

	if( fNoOverwrite == m_fNoOverwrite )		return;

	m_fNoOverwrite = fNoOverwrite;

	Edit_Enable(m_hwndIndex, !m_fNoOverwrite);
	Button_SetCheck(m_hwndNoOverwrite, m_fNoOverwrite);
}

void SaveAllAsDialog::ToggleUseDate(bool fUseDate) {

	if( fUseDate == m_fUseDate )	return;
		
	m_fUseDate = fUseDate;
	Edit_Enable(m_hwndPrefix, !m_fUseDate);
	Button_SetCheck(m_hwndUseDate, m_fUseDate);
}

void SaveAllAsDialog::OK_Action() {


	auto pPair = new std::pair<std::wstring, UINT>{m_prefix, m_minIndex};

	EndDialog(m_window, (INT_PTR) pPair);
}

void SaveAllAsDialog::SetOffset(UINT offset) {

	m_minIndex = offset;

	std::wstring strOffset = std::to_wstring(offset);

	Edit_SetText(m_hwndIndex, strOffset.c_str());
}

void SaveAllAsDialog::SetPrefix(const WCHAR * szPrefix) {

	if( szPrefix == nullptr )		return;

	m_prefix = szPrefix;

	Edit_SetText(m_hwndPrefix, szPrefix);
}