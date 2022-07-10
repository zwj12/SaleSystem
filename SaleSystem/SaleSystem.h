
// SaleSystem.h : main header file for the SaleSystem application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSaleSystemApp:
// See SaleSystem.cpp for the implementation of this class
//

class CSaleSystemApp : public CWinApp
{
public:
	CSaleSystemApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSaleSystemApp theApp;
