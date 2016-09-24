// MFCBaseCtrlDlg.h : header file
//

#if !defined(AFX_MFCBASECTRLDLG_H__7EB3BBAD_5727_46A7_B068_94D729C86776__INCLUDED_)
#define AFX_MFCBASECTRLDLG_H__7EB3BBAD_5727_46A7_B068_94D729C86776__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCBaseCtrlDlg dialog

class CMFCBaseCtrlDlg : public CDialog
{
// Construction
public:
	void OnPlayAnimate();
	CMFCBaseCtrlDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCBaseCtrlDlg)
	enum { IDD = IDD_MFCBASECTRL_DIALOG };
	CHotKeyCtrl	m_wndHotKey;
	CButton	m_wndReplay;
	CComboBox	m_wndPlayCount;
	CListBox	m_wndFilenames;
	CAnimateCtrl	m_wndAnimate;
	CString	m_strFilePath;
	CString	m_strFilenames;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCBaseCtrlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	virtual void PostNcDestroy();
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCBaseCtrlDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnFileopen();
	afx_msg void OnDblclkListFilenames();
	afx_msg void OnCheckReplay();
	afx_msg void OnRadioPlay();
	afx_msg void OnRadioPause();
	afx_msg void OnButtonSetup();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCBASECTRLDLG_H__7EB3BBAD_5727_46A7_B068_94D729C86776__INCLUDED_)
