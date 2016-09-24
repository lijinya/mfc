// MFCComCtrl.h : main header file for the MFCCOMCTRL application
//

#if !defined(AFX_MFCCOMCTRL_H__208B1503_7B2E_4D92_A252_3F019D2F56D1__INCLUDED_)
#define AFX_MFCCOMCTRL_H__208B1503_7B2E_4D92_A252_3F019D2F56D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCComCtrlApp:
// See MFCComCtrl.cpp for the implementation of this class
//

class CMFCComCtrlApp : public CWinApp
{
public:
	CMFCComCtrlApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCComCtrlApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCComCtrlApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCOMCTRL_H__208B1503_7B2E_4D92_A252_3F019D2F56D1__INCLUDED_)
