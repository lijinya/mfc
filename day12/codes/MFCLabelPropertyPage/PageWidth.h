#if !defined(AFX_PAGEWIDTH_H__38981E5E_0020_46F8_9E13_12E45EAAA9C1__INCLUDED_)
#define AFX_PAGEWIDTH_H__38981E5E_0020_46F8_9E13_12E45EAAA9C1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageWidth.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageWidth dialog

class CPageWidth : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageWidth)

// Construction
public:
	CPageWidth();
	~CPageWidth();

// Dialog Data
	//{{AFX_DATA(CPageWidth)
	enum { IDD = IDD_PROPPAGE_LABEL_WIDTH };
	UINT	m_nLineWidth;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageWidth)
	public:
	virtual BOOL OnApply();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageWidth)
	afx_msg void OnChangeLineWidth();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEWIDTH_H__38981E5E_0020_46F8_9E13_12E45EAAA9C1__INCLUDED_)
