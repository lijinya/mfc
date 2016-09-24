// MFCExam.h : main header file for the MFCEXAM application
//

#if !defined(AFX_MFCEXAM_H__E7209C58_4875_4DCE_89D4_9F715CB5D087__INCLUDED_)
#define AFX_MFCEXAM_H__E7209C58_4875_4DCE_89D4_9F715CB5D087__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCExamApp:
// See MFCExam.cpp for the implementation of this class
//

class CMFCExamApp : public CWinApp
{
public:
	CMFCExamApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCExamApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCExamApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXAM_H__E7209C58_4875_4DCE_89D4_9F715CB5D087__INCLUDED_)
