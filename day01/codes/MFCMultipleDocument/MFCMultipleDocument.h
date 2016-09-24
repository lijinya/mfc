// MFCMultipleDocument.h : main header file for the MFCMULTIPLEDOCUMENT application
//

#if !defined(AFX_MFCMULTIPLEDOCUMENT_H__D36F2560_02C0_43D5_ABE4_E97636424ABB__INCLUDED_)
#define AFX_MFCMULTIPLEDOCUMENT_H__D36F2560_02C0_43D5_ABE4_E97636424ABB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentApp:
// See MFCMultipleDocument.cpp for the implementation of this class
//

class CMFCMultipleDocumentApp : public CWinApp
{
public:
	CMFCMultipleDocumentApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCMultipleDocumentApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCMultipleDocumentApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCMULTIPLEDOCUMENT_H__D36F2560_02C0_43D5_ABE4_E97636424ABB__INCLUDED_)
