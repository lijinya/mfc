#if !defined(AFX_COMCTRLDLG_H__71DD9EFF_5040_4767_97A0_E38037D18850__INCLUDED_)
#define AFX_COMCTRLDLG_H__71DD9EFF_5040_4767_97A0_E38037D18850__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ComCtrlDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CComCtrlDlg dialog

class CComCtrlDlg : public CDialog
{
// Construction
public:
	CComCtrlDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CComCtrlDlg)
	enum { IDD = IDD_DIALOG_COMMON_CTRL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CComCtrlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CComCtrlDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_COMCTRLDLG_H__71DD9EFF_5040_4767_97A0_E38037D18850__INCLUDED_)
