#if !defined(AFX_DIALOGLOGIN_H__EC1A290F_30BC_4D9E_B811_FCE6E2E9DC6A__INCLUDED_)
#define AFX_DIALOGLOGIN_H__EC1A290F_30BC_4D9E_B811_FCE6E2E9DC6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogLogin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogLogin dialog

class CDialogLogin : public CDialog
{
// Construction
public:
	CDialogLogin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogLogin)
	enum { IDD = IDD_DIALOG_LOGIN };
	CString	m_strUserName;
	CString	m_strPassword;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogLogin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogLogin)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGLOGIN_H__EC1A290F_30BC_4D9E_B811_FCE6E2E9DC6A__INCLUDED_)
