#if !defined(AFX_MODALDLG_H__0C7A4B56_AB09_4F1C_B2E3_C79C8637FBBE__INCLUDED_)
#define AFX_MODALDLG_H__0C7A4B56_AB09_4F1C_B2E3_C79C8637FBBE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ModalDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CModalDlg dialog

class CModalDlg : public CDialog
{
// Construction
public:
	CModalDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CModalDlg)
	enum { IDD = IDD_DIALOG_MODAL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModalDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CModalDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODALDLG_H__0C7A4B56_AB09_4F1C_B2E3_C79C8637FBBE__INCLUDED_)
