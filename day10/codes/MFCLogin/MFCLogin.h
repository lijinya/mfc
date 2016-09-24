// MFCLogin.h : main header file for the MFCLOGIN application
//

#if !defined(AFX_MFCLOGIN_H__CD3CA336_BF7B_4D48_A4DC_8958CE9CA792__INCLUDED_)
#define AFX_MFCLOGIN_H__CD3CA336_BF7B_4D48_A4DC_8958CE9CA792__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginApp:
// See MFCLogin.cpp for the implementation of this class
//

class CMFCLoginApp : public CWinApp
{
public:
	CMFCLoginApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCLoginApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCLoginApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCLOGIN_H__CD3CA336_BF7B_4D48_A4DC_8958CE9CA792__INCLUDED_)
