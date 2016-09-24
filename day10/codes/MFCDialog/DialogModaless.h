#if !defined(AFX_DIALOGMODALESS_H__3DE0DE0F_FF89_490F_88C9_5CCED7189F00__INCLUDED_)
#define AFX_DIALOGMODALESS_H__3DE0DE0F_FF89_490F_88C9_5CCED7189F00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogModaless.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogModaless dialog

class CDialogModaless : public CDialog
{
// Construction
public:
	CDialogModaless(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogModaless)
	enum { IDD = IDD_DIALOG_MODALESS };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogModaless)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void PostNcDestroy();
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogModaless)
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGMODALESS_H__3DE0DE0F_FF89_490F_88C9_5CCED7189F00__INCLUDED_)
