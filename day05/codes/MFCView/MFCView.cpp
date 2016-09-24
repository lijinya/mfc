// MFCView.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
class CMyView:public CView{
public:
	virtual void OnDraw(CDC* pDC);
	afx_msg void OnPaint();
	afx_msg void OnNew();
	DECLARE_MESSAGE_MAP()
};
BEGIN_MESSAGE_MAP(CMyView,CView)
//	ON_WM_PAINT()
	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()
void CMyView::OnDraw(CDC* pDC){
	pDC->TextOut(200,200,"CMyView::OnDraw");
}
void CMyView::OnNew(){
	AfxMessageBox("CMyView::new");
}
void CMyView::OnPaint(){
	PAINTSTRUCT ps={0};
	HDC hDC=::BeginPaint(this->m_hWnd,&ps);
	::TextOut(hDC,100,100,"hello",5);
	::EndPaint(this->m_hWnd,&ps);
}
class CMyFrameWnd:public CFrameWnd{
	DECLARE_MESSAGE_MAP()
		afx_msg void OnPaint();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)
	ON_WM_PAINT()
	ON_WM_CREATE()
END_MESSAGE_MAP()

void CMyFrameWnd::OnPaint(){
	PAINTSTRUCT ps={0};
	HDC hDC=::BeginPaint(m_hWnd,&ps);
	::TextOut(hDC,100,100,"hello",5);
	::EndPaint(m_hWnd,&ps);
}
int CMyFrameWnd::OnCreate(LPCREATESTRUCT lpCreateStruct){
	CMyView *pView=new CMyView();
	pView->Create(NULL,
		"",	//title bar  not show
		WS_CHILD|WS_VISIBLE,
		CRect(0,0,200,200),
		this,
		AFX_IDW_PANE_FIRST
		);
	m_pViewActive=pView;
//	CMenu menu;
//	menu.LoadMenu(IDR_MENU1);
//	menu.
	return CFrameWnd::OnCreate(lpCreateStruct);
}
class CMyWinApp:public CWinApp{
public:
	virtual BOOL InitInstance();
};
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MFCView",WS_OVERLAPPEDWINDOW,
		CFrameWnd::rectDefault,NULL,
		MAKEINTRESOURCE(IDR_MENU1));
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}