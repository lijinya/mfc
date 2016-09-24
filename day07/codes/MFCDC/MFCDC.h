// MFCDC.h : main header file for the MFCDC application
//

#if !defined(AFX_MFCDC_H__463A9338_DB48_4B9E_86AA_63ED16FEC0FA__INCLUDED_)
#define AFX_MFCDC_H__463A9338_DB48_4B9E_86AA_63ED16FEC0FA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCDCApp:
// See MFCDC.cpp for the implementation of this class
//

class CMFCDCApp : public CWinApp
{
public:
	CMFCDCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCDCApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDC_H__463A9338_DB48_4B9E_86AA_63ED16FEC0FA__INCLUDED_)
