// MFCComCtrlDlg.h : header file
//

#if !defined(AFX_MFCCOMCTRLDLG_H__2D7642B8_657D_4DD2_80E0_E9F544C1FDE8__INCLUDED_)
#define AFX_MFCCOMCTRLDLG_H__2D7642B8_657D_4DD2_80E0_E9F544C1FDE8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCComCtrlDlg dialog

class CMFCComCtrlDlg : public CDialog
{
// Construction
public:
	CMFCComCtrlDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCComCtrlDlg)
	enum { IDD = IDD_MFCCOMCTRL_DIALOG };
	CProgressCtrl	m_wndProgress;
	CSliderCtrl	m_wndSlider;
	CSpinButtonCtrl	m_wndSpin;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCComCtrlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCComCtrlDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonMove();
	afx_msg void OnCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnOutofmemorySpin(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDeltaposSpin(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCOMCTRLDLG_H__2D7642B8_657D_4DD2_80E0_E9F544C1FDE8__INCLUDED_)
