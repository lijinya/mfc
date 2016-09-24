// MFCTreeCtrlDlg.h : header file
//

#if !defined(AFX_MFCTREECTRLDLG_H__59B99355_05E6_4AFD_BD10_473B25F4E88A__INCLUDED_)
#define AFX_MFCTREECTRLDLG_H__59B99355_05E6_4AFD_BD10_473B25F4E88A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCTreeCtrlDlg dialog

class CMFCTreeCtrlDlg : public CDialog
{
// Construction
public:
	CMFCTreeCtrlDlg(CWnd* pParent = NULL);	// standard constructor
	CImageList	m_iNormal;

// Dialog Data
	//{{AFX_DATA(CMFCTreeCtrlDlg)
	enum { IDD = IDD_MFCTREECTRL_DIALOG };
	CTreeCtrl	m_wndTree;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCTreeCtrlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCTreeCtrlDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	void InitTreeCtrl();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCTREECTRLDLG_H__59B99355_05E6_4AFD_BD10_473B25F4E88A__INCLUDED_)
