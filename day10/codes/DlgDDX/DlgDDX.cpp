// DlgDDX.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
class CMyDlg:public CDialog{
public:
	CMyDlg():CDialog(IDD_DIALOG1){}
	virtual void DoDataExchange( CDataExchange* pDX ); 
	virtual BOOL OnInitDialog();
	virtual void OnOK();
public:
	CWnd m_WndOK;	//
	CString m_strEdit;
};
void CMyDlg::DoDataExchange(CDataExchange*pDX){
	DDX_Control(pDX,IDOK,m_WndOK);
	DDX_Text(pDX,IDC_EDIT1,m_strEdit);
	CDialog::DoDataExchange(pDX);
}
void CMyDlg::OnOK(){
	UpdateData(TRUE);
	AfxMessageBox(m_strEdit);
	CDialog::OnOK();
}
BOOL CMyDlg::OnInitDialog(){
	if(!CDialog::OnInitDialog()){
		return FALSE;
	}
	m_strEdit="Hello CEdit";
	m_WndOK.SetWindowText("DDXOK");
	m_WndOK.MoveWindow(0,0,100,100);
//	SetWindowText(m_strEdit);	m_strEdit="999";	//对话框窗口标题
	UpdateData(FALSE);
	return TRUE;
///	CDialog::OnInitDialog();
}
class CDlgDDXApp:public CWinApp{
public:
	virtual BOOL InitInstance();
};
CDlgDDXApp theApp;
BOOL CDlgDDXApp::InitInstance(){
	CMyDlg dlg;
	m_pMainWnd=&dlg;
	dlg.DoModal();
	return TRUE;
}

