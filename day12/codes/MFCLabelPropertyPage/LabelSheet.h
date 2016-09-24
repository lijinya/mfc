#if !defined(AFX_LABELSHEET_H__D3F2560D_2CB5_4AC1_873D_CDA773E93DF0__INCLUDED_)
#define AFX_LABELSHEET_H__D3F2560D_2CB5_4AC1_873D_CDA773E93DF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LabelSheet.h : header file
//

#include "PageColor.h"
#include "PageWidth.h"


/////////////////////////////////////////////////////////////////////////////
// CLabelSheet

class CLabelSheet : public CPropertySheet
{
	DECLARE_DYNAMIC(CLabelSheet)

// Construction
public:
	CLabelSheet(UINT nIDCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);
	CLabelSheet(LPCTSTR pszCaption, CWnd* pParentWnd = NULL, UINT iSelectPage = 0);

// Attributes
public:
	CPageColor m_pageLineColor;
	CPageWidth m_pageLineWidth;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLabelSheet)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLabelSheet();

	// Generated message map functions
protected:
	//{{AFX_MSG(CLabelSheet)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void SetPage();
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LABELSHEET_H__D3F2560D_2CB5_4AC1_873D_CDA773E93DF0__INCLUDED_)
