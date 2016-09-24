// MFCBaseCtrl.h : main header file for the MFCBASECTRL application
//

#if !defined(AFX_MFCBASECTRL_H__1B3A0F82_A06A_4AC4_99C1_A613C552D076__INCLUDED_)
#define AFX_MFCBASECTRL_H__1B3A0F82_A06A_4AC4_99C1_A613C552D076__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCBaseCtrlApp:
// See MFCBaseCtrl.cpp for the implementation of this class
//

class CMFCBaseCtrlApp : public CWinApp
{
public:
	CMFCBaseCtrlApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCBaseCtrlApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCBaseCtrlApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCBASECTRL_H__1B3A0F82_A06A_4AC4_99C1_A613C552D076__INCLUDED_)
