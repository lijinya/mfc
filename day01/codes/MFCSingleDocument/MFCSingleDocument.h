// MFCSingleDocument.h : main header file for the MFCSINGLEDOCUMENT application
//

#if !defined(AFX_MFCSINGLEDOCUMENT_H__B5814E40_231F_44F1_9837_101EA34BEB8B__INCLUDED_)
#define AFX_MFCSINGLEDOCUMENT_H__B5814E40_231F_44F1_9837_101EA34BEB8B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentApp:
// See MFCSingleDocument.cpp for the implementation of this class
//

class CMFCSingleDocumentApp : public CWinApp
{
public:
	CMFCSingleDocumentApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCSingleDocumentApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCSingleDocumentApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCSINGLEDOCUMENT_H__B5814E40_231F_44F1_9837_101EA34BEB8B__INCLUDED_)
