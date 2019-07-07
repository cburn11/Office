#include "clipboardextender.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, WCHAR * cmdline, int iShowCmd) {

	ClipboardExtenderMainWindow cb_win;

	ShowWindow(cb_win.m_window, iShowCmd);
	UpdateWindow(cb_win.m_window);

	cb_win.run();

	return 0;
}