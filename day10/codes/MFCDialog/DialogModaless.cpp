// DialogModaless.cpp : implementation file
//

#include "stdafx.h"
#include "MFCDialog.h"
#include "DialogModaless.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogModaless dialog


CDialogModaless::CDialogModaless(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogModaless::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogModaless)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CDialogModaless::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogModaless)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogModaless, CDialog)
	//{{AFX_MSG_MAP(CDialogModaless)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogModaless message handlers

void CDialogModaless::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	delete this;
	CDialog::PostNcDestroy();
}

void CDialogModaless::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
	DestroyWindow();
}

void CDialogModaless::OnCancel() 
{
	// TODO: Add extra cleanup here

	CDialog::OnCancel();
	DestroyWindow();
}
