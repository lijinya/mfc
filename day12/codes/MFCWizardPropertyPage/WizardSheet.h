#if !defined(AFX_WIZARDSHEET_H__BD0117D3_2BC2_4A5C_A5D0_FA32D2AF33FB__INCLUDED_)
#define AFX_WIZARDSHEET_H__BD0117D3_2BC2_4A5C_A5D0_FA32D2AF33FB__INCLUDED_


#include "PageHobby.h"
#include "PageCityCareer.h"
#include "PageSalary.h"


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// WizardSheet.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CWizardSheet

class CWizardSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CWizardSheet)

// Construction
public:
	CWizardSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CWizardSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

	CPageSalary m_pageSalary;
	CPageHobby  m_pageHobby;
	CPageCityCareer m_pageCityCareer;

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWizardSheet)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CWizardSheet();

	// Generated message map functions
protected:
	//{{AFX_MSG(CWizardSheet)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	void SetPage();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WIZARDSHEET_H__BD0117D3_2BC2_4A5C_A5D0_FA32D2AF33FB__INCLUDED_)
