// MFCExamDlg.h : header file
//

#if !defined(AFX_MFCEXAMDLG_H__0FA47B4A_251D_40C7_944D_731B43CEDFA8__INCLUDED_)
#define AFX_MFCEXAMDLG_H__0FA47B4A_251D_40C7_944D_731B43CEDFA8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCExamDlg dialog

class CMFCExamDlg : public CDialog
{
// Construction
public:
	CMFCExamDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCExamDlg)
	enum { IDD = IDD_MFCEXAM_DIALOG };
	CListBox	m_wndShowInfoList;
	CListCtrl	m_wndInfoList;
	CString	m_strAddress;
	int		m_nAge;
	CString	m_strName;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCExamDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCExamDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	void InitListCtrl();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCEXAMDLG_H__0FA47B4A_251D_40C7_944D_731B43CEDFA8__INCLUDED_)
