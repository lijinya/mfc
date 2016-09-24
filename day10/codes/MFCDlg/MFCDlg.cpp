// MFCDlg.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"

class CMyDlg:public CDialog{
public:
	CMyDlg():CDialog(IDD_DIALOG1){}
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	virtual void PostNcDestroy();
};
void CMyDlg::OnOK(){
	
	CDialog::OnOK();
	DestroyWindow();
}
void CMyDlg::OnCancel(){
	
	CDialog::OnCancel();
	DestroyWindow();
}
void CMyDlg::PostNcDestroy(){
	delete this;
	CDialog::PostNcDestroy();
}
BOOL CMyDlg::OnInitDialog(){
//	MessageBox("init succeed!");
	CWnd *pWnd=GetDlgItem(IDCANCEL);	//根据ID获取控件
	pWnd->EnableWindow(FALSE);
	return CDialog::OnInitDialog();
}
class CDlgApp:public CWinApp{
public:
	virtual BOOL InitInstance();
};
CDlgApp theApp;

BOOL CDlgApp::InitInstance(){
/*	CMyDlg dlg;
	m_pMainWnd=&dlg;
	dlg.DoModal();					*/
/*	CFrameWnd *pFrame=new CFrameWnd();
	pFrame->Create(NULL,"MFCDlg");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();			*/
	CMyDlg *pDlg=new CMyDlg;
	pDlg->Create(IDD_DIALOG1);
	m_pMainWnd=pDlg;
	pDlg->ShowWindow(SW_SHOW);
	pDlg->UpdateWindow();
	return TRUE;
}