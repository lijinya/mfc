// MFCWizardPropertyPage.h : main header file for the MFCWIZARDPROPERTYPAGE application
//

#if !defined(AFX_MFCWIZARDPROPERTYPAGE_H__4DE5E08E_0D32_4163_8F3F_08C380595704__INCLUDED_)
#define AFX_MFCWIZARDPROPERTYPAGE_H__4DE5E08E_0D32_4163_8F3F_08C380595704__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageApp:
// See MFCWizardPropertyPage.cpp for the implementation of this class
//

class CMFCWizardPropertyPageApp : public CWinApp
{
public:
	CMFCWizardPropertyPageApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCWizardPropertyPageApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCWizardPropertyPageApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCWIZARDPROPERTYPAGE_H__4DE5E08E_0D32_4163_8F3F_08C380595704__INCLUDED_)
