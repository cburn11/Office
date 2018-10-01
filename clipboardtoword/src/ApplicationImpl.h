#pragma once

#include <Windows.h>

#include "ClipboardToWord_h.h"

typedef struct _ApplicationImpl {

	IApplication 	pApp;		//	Define _ApplicationImpl this way, so This * in the 
								//	IApplication methods can be cast to APPLICATION_IMPL *.
	HWND			hwnd;		//	Which makes the hwnd member available.

} APPLICATION_IMPL, * PAPPLICATION_IMPL;

extern IApplicationVtbl			g_IApplicationVtbl;				//	ApplicationImpl.c
extern APPLICATION_IMPL *		g_pAppImpl;						//	clipboardtoword.c

BOOL CreateApplicationImpl(HWND hwnd, APPLICATION_IMPL ** ppAppImpl);