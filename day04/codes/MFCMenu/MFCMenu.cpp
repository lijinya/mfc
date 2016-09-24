// MFCMenu.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
class CMyFrameWnd:public CFrameWnd{
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct ); 
	afx_msg void OnNew();
	afx_msg void OnExit();
	afx_msg void OnInitMenuPopup( CMenu *, UINT, BOOL );
	afx_msg void OnContextMenu( CWnd*, CPoint );
};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)
	ON_WM_CREATE()
//	ON_COMMAND(IDM_NEW,OnNew)
	ON_WM_INITMENUPOPUP()
	ON_COMMAND(IDM_EXIT,OnExit)
	ON_WM_CONTEXTMENU()
END_MESSAGE_MAP()
void CMyFrameWnd::OnNew(){
	AfxMessageBox("CMyFrame::new");
}
void CMyFrameWnd::OnExit(){
	AfxMessageBox("CMyFrameWnd::exit");
}
int CMyFrameWnd::OnCreate(LPCREATESTRUCT lpCreateStruct){
//	CMenu menu;
///	menu.LoadMenu(IDR_MENU1);
//	CFrameWnd::SetMenu(&menu);
	return CFrameWnd::OnCreate(lpCreateStruct);
}
void CMyFrameWnd::OnContextMenu( CWnd* pWnd, CPoint pt){
	CMenu menu;
	menu.LoadMenu(IDR_MENU1);
	CMenu* pPopup=menu.GetSubMenu(1);
//	::TrackPopupMenu(pPopup->m_hMenu,TPM_CENTERALIGN|TPM_VCENTERALIGN,
//		pt.x,pt.y,0,pWnd->m_hWnd,NULL);
	pPopup->TrackPopupMenu(TPM_CENTERALIGN|TPM_VCENTERALIGN,pt.x,pt.y,pWnd,NULL);
}
void CMyFrameWnd::OnInitMenuPopup( CMenu *pPopupMenu,UINT nIndex, BOOL bSysMenu){
//	::CheckMenuItem(pPopupMenu->m_hMenu,IDM_NEW,MF_BYCOMMAND|MF_CHECKED);
	pPopupMenu->CheckMenuItem(0,MF_BYPOSITION|MF_CHECKED);
}
class CMyWinApp:public CWinApp{
public:	//don't forget public or members will be private default
	virtual BOOL InitInstance();
	CMyWinApp();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnNew();
};
BEGIN_MESSAGE_MAP(CMyWinApp,CWinApp)
	ON_COMMAND(IDM_NEW,OnNew)	//default CFrameWnd
END_MESSAGE_MAP()
CMyWinApp::CMyWinApp(){

}
void CMyWinApp::OnNew(){
	AfxMessageBox("CWinApp::new");
}
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
//	pFrame->Create(NULL,"MFCMenu");
	pFrame->Create(NULL,"MFCMenu",WS_OVERLAPPEDWINDOW,
		CFrameWnd::rectDefault,NULL,MAKEINTRESOURCE(IDR_MENU1)); //mount menu
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}

