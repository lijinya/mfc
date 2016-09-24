// MFCDiglog.h : main header file for the MFCDIGLOG application
//

#if !defined(AFX_MFCDIGLOG_H__E0F0EC63_1645_4B90_AA59_2E71FDA18CCB__INCLUDED_)
#define AFX_MFCDIGLOG_H__E0F0EC63_1645_4B90_AA59_2E71FDA18CCB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCDiglogApp:
// See MFCDiglog.cpp for the implementation of this class
//

class CMFCDiglogApp : public CWinApp
{
public:
	CMFCDiglogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDiglogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCDiglogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDIGLOG_H__E0F0EC63_1645_4B90_AA59_2E71FDA18CCB__INCLUDED_)
