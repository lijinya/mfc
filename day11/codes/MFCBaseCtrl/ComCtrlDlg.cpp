// ComCtrlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCBaseCtrl.h"
#include "ComCtrlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CComCtrlDlg dialog


CComCtrlDlg::CComCtrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CComCtrlDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CComCtrlDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CComCtrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CComCtrlDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CComCtrlDlg, CDialog)
	//{{AFX_MSG_MAP(CComCtrlDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CComCtrlDlg message handlers
