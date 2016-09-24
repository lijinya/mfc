// MFCToolbar.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
UINT g_hIndicator[]={
	0,
	IDS_TIME,
	IDS_POS
};
class CMyFrameWnd:public CFrameWnd{

	DECLARE_MESSAGE_MAP()
public:
	CToolBar toolBar;
	CStatusBar statusBar;
	afx_msg int OnCreate( 
		LPCREATESTRUCT lpCreateStruct ); 
	afx_msg void OnNew(void);
	afx_msg void OnGreen(void);
	afx_msg void OnToolbar();
	afx_msg void OnBlue(void);
	afx_msg void OnInitMenuPopup( CMenu *, UINT, BOOL );
	afx_msg void OnTimer( 
		UINT nIDEvent ); 
	afx_msg void OnMouseMove( 
		UINT nFlags, 
		CPoint point ); 

};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(IDM_NEW,OnNew)
	ON_COMMAND(ID_GREEN,OnGreen)
	ON_WM_INITMENUPOPUP()
	ON_WM_TIMER()
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_BLUE,OnBlue)
	ON_COMMAND(ID_TOOLBAR,OnToolbar)
END_MESSAGE_MAP()

class CMyWinApp:public CWinApp{
	virtual BOOL InitInstance();
};
void CMyFrameWnd::OnTimer( 
						  UINT nIDEvent ){
	SYSTEMTIME st={0};
	GetLocalTime(&st);
	CString strTime;
	strTime.Format("%d-%d-%d-%d:%d-%d",
		st.wYear,st.wMonth,st.wDay,st.wHour,st.wMinute,st.wSecond);
	statusBar.SetPaneText(1,strTime);
}
void CMyFrameWnd::OnMouseMove( 
						 UINT nFlags, 
						 CPoint point ){
	CString strPos;
	strPos.Format("%d,%d",point.x,point.y);
//	AfxMessageBox(strPos);
	statusBar.SetPaneText(2,strPos);
}

int CMyFrameWnd::OnCreate(LPCREATESTRUCT lpCreateStruct){
	toolBar.CreateEx(this,TBSTYLE_FLAT,
		WS_CHILD|WS_VISIBLE|CBRS_ALIGN_TOP|
		CBRS_SIZE_DYNAMIC|CBRS_TOOLTIPS|CBRS_FLYBY);
	toolBar.LoadToolBar(IDR_TOOLBAR1);
	toolBar.EnableDocking(CBRS_ALIGN_ANY);
	this->EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&toolBar,AFX_IDW_DOCKBAR_TOP);
	toolBar.SetWindowText("toolbar");
	statusBar.CreateEx(this);
	statusBar.SetIndicators(g_hIndicator,sizeof(g_hIndicator)/sizeof(UINT));
	statusBar.SetPaneInfo(1,IDS_TIME,SBPS_POPOUT,200);
	statusBar.SetPaneInfo(2,IDS_POS,SBPS_NORMAL,200);

	::SetTimer(this->m_hWnd,0x1001,1000,NULL);
	return CFrameWnd::OnCreate(lpCreateStruct);
}
void CMyFrameWnd::OnNew(void){
	AfxMessageBox("CMyFrameWnd::OnNew");
}
void CMyFrameWnd::OnGreen(void){
	AfxMessageBox("CMyFrameWnd::Green");
}
void CMyFrameWnd::OnBlue(void){
	AfxMessageBox("CMyFrameWnd::Blue");
}
void CMyFrameWnd::OnToolbar(){
	BOOL isVisible=toolBar.CWnd::IsWindowVisible();
	if(isVisible){
		this->ShowControlBar(&toolBar,FALSE,FALSE);
	}else{
		this->ShowControlBar(&toolBar,TRUE,FALSE);
	}
}
void CMyFrameWnd::OnInitMenuPopup( CMenu *pPopupMenu,UINT nIndex, BOOL bSysMenu){
	//	::CheckMenuItem(pPopupMenu->m_hMenu,IDM_NEW,MF_BYCOMMAND|MF_CHECKED);
	if(toolBar.IsWindowVisible()){
//		pPopupMenu->CheckMenuItem(ID_TOOLBAR,MF_BYCOMMAND|MF_CHECKED);
		pPopupMenu->CheckMenuItem(0,MF_BYPOSITION|MF_CHECKED);
		//set all
	}else{
		pPopupMenu->CheckMenuItem(ID_TOOLBAR,MF_BYCOMMAND|MF_UNCHECKED);
	}
}	
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MFCToolbar",WS_OVERLAPPEDWINDOW,CFrameWnd::rectDefault,
		NULL,MAKEINTRESOURCE(IDR_MENU1));
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}

