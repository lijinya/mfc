#if !defined(AFX_PAGESALARY_H__30886201_CCE3_4BF4_8D86_68FCAA1BC76B__INCLUDED_)
#define AFX_PAGESALARY_H__30886201_CCE3_4BF4_8D86_68FCAA1BC76B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageSalary.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageSalary dialog

class CPageSalary : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageSalary)

// Construction
public:
	CPageSalary();
	~CPageSalary();

// Dialog Data
	//{{AFX_DATA(CPageSalary)
	enum { IDD = IDD_PROPPAGE_SALARY };
	CString	m_strSalary;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageSalary)
	public:
	virtual BOOL OnSetActive();
	virtual BOOL OnWizardFinish();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageSalary)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGESALARY_H__30886201_CCE3_4BF4_8D86_68FCAA1BC76B__INCLUDED_)
