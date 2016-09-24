// MFCTreeDlg.h : header file
//

#if !defined(AFX_MFCTREEDLG_H__8C902B35_4444_490F_B489_5123A5506125__INCLUDED_)
#define AFX_MFCTREEDLG_H__8C902B35_4444_490F_B489_5123A5506125__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCTreeDlg dialog

class CMFCTreeDlg : public CDialog
{
// Construction
public:
//	void ShowData(CString strPath);
	void InitListCtrl();
	CMFCTreeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCTreeDlg)
	enum { IDD = IDD_MFCTREE_DIALOG };
	CComboBox	m_wndStyle;
	CListCtrl	m_wndList;
	CImageList m_ilNormal;
	CImageList m_ilSmall;
	CStringList	m_strListPath;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCTreeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
private:
		void ShowData(CString strPath);
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCTreeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSelchangeComboStyle();
	afx_msg void OnDblclkList(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCTREEDLG_H__8C902B35_4444_490F_B489_5123A5506125__INCLUDED_)
