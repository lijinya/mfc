// MFCTreeCtrl.h : main header file for the MFCTREECTRL application
//

#if !defined(AFX_MFCTREECTRL_H__FD3B8D50_1C86_4FFC_9E34_0835D442657B__INCLUDED_)
#define AFX_MFCTREECTRL_H__FD3B8D50_1C86_4FFC_9E34_0835D442657B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCTreeCtrlApp:
// See MFCTreeCtrl.cpp for the implementation of this class
//

class CMFCTreeCtrlApp : public CWinApp
{
public:
	CMFCTreeCtrlApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCTreeCtrlApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCTreeCtrlApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCTREECTRL_H__FD3B8D50_1C86_4FFC_9E34_0835D442657B__INCLUDED_)
