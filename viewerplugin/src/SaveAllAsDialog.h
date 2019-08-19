#pragma once

#include <Windows.h>

#include <string>

#include <windowclass.h>

#define WM_SAVEALLASDIALOG_ACTION (WM_USER + 15)

#define ACTION_GETCURSAVEDIR	1000
#define ACTION_SETCURSAVEDIR	1001
#define ACTION_SHOWBROWSEDIALOG	1002
#define ACTION_GETCUROFFSET		1003
#define ACTION_GETCURPREFIX		1004

/* INT_PTR Cls_OnSaveAllAsDialogAction(HWND hwnd, int action, LPARAM lParam) */
#define HANDLE_WM_SAVEALLASDIALOG_ACTION(hwnd, wParam, lParam, fn) \
    (LRESULT)(INT_PTR)(fn)((hwnd), (int)(LOWORD(wParam)), lParam)

class SaveAllAsDialog : public ModalDialog<SaveAllAsDialog> {

public:

	SaveAllAsDialog(HWND hwndParent);

	INT_PTR MessageHandler(UINT const message, WPARAM const wParam, LPARAM const lParam) override;

private:

	std::wstring m_saveDir;
	std::wstring m_prefix;

	UINT m_minIndex = 0;

	bool m_fNoOverwrite;
	bool m_fUseDate;

	UINT_PTR m_idTimer;

	HWND m_hwndSavePath;
	HWND m_hwndIndex;
	HWND m_hwndNoOverwrite;
	HWND m_hwndUseDate;
	HWND m_hwndPrefix;
	HWND m_hwndUpDown;

	void Cls_OnCommand(HWND hwnd, int id, HWND hwndCtl, UINT codeNotify);

	BOOL Cls_OnInitDialog(HWND hwnd, HWND hwndFocus, LPARAM lParam);

	void SyncSaveSettings();

	void SetSavePath(const WCHAR * szSavePath);
	void SetPrefix(const WCHAR * szPrefix);
	void SetOffset(UINT offset);
	
	void ToggleNoOverwrite(bool fNoOverwrite);
	void ToggleUseDate(bool fUseDate);

	void OK_Action();
};