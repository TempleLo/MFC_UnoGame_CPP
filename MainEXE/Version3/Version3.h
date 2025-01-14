﻿
// Version3.h : main header file for the Version3 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CVersion3App:
// See Version3.cpp for the implementation of this class
//

class CVersion3App : public CWinApp
{
public:
	CVersion3App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CVersion3App theApp;
