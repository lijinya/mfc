#if !defined(AFX_PAGECOLOR_H__0E3F1D9A_FA55_4245_8A65_66D91AE56941__INCLUDED_)
#define AFX_PAGECOLOR_H__0E3F1D9A_FA55_4245_8A65_66D91AE56941__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageColor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageColor dialog

class CPageColor : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageColor)

// Construction
public:
	CPageColor();
	~CPageColor();
	
	COLORREF m_LineColor;

// Dialog Data
	//{{AFX_DATA(CPageColor)
	enum { IDD = IDD_PROPPAGE_LABEL_COLOR };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageColor)
	public:
	virtual BOOL OnApply();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageColor)
	afx_msg void OnColor();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGECOLOR_H__0E3F1D9A_FA55_4245_8A65_66D91AE56941__INCLUDED_)
