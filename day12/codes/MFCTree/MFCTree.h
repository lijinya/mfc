// MFCTree.h : main header file for the MFCTREE application
//

#if !defined(AFX_MFCTREE_H__F4760A2A_5251_426A_8644_9C8F83836F66__INCLUDED_)
#define AFX_MFCTREE_H__F4760A2A_5251_426A_8644_9C8F83836F66__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCTreeApp:
// See MFCTree.cpp for the implementation of this class
//

class CMFCTreeApp : public CWinApp
{
public:
	CMFCTreeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCTreeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCTreeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCTREE_H__F4760A2A_5251_426A_8644_9C8F83836F66__INCLUDED_)
