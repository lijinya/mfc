// MFCDiglogDlg.h : header file
//

#if !defined(AFX_MFCDIGLOGDLG_H__8A0D65E9_A37D_414C_8904_72BC8AA1E294__INCLUDED_)
#define AFX_MFCDIGLOGDLG_H__8A0D65E9_A37D_414C_8904_72BC8AA1E294__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMFCDiglogDlg dialog

class CMFCDiglogDlg : public CDialog
{
// Construction
public:
	CMFCDiglogDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMFCDiglogDlg)
	enum { IDD = IDD_MFCDIGLOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDiglogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMFCDiglogDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDIGLOGDLG_H__8A0D65E9_A37D_414C_8904_72BC8AA1E294__INCLUDED_)
