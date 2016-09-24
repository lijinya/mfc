// MFCSdi.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
class CMyDoc:public CDocument{
	DECLARE_DYNCREATE(CMyDoc)
};
IMPLEMENT_DYNCREATE(CMyDoc,CDocument)
class CMyView:public CEditView{
	DECLARE_DYNCREATE(CMyView)
	DECLARE_MESSAGE_MAP()
public:
	afx_msg BOOL OnSetCursor( CWnd* pWnd, UINT nHitTest, UINT message );
};
BEGIN_MESSAGE_MAP(CMyView,CEditView)
	ON_WM_SETCURSOR()
END_MESSAGE_MAP()
IMPLEMENT_DYNCREATE(CMyView,CEditView)
BOOL CMyView::OnSetCursor( CWnd* pWnd, UINT nHitTest, UINT message ){
	HCURSOR hCur=::LoadCursor(AfxGetInstanceHandle(),
		MAKEINTRESOURCE(IDC_CURSOR1)		
		);
	SetCursor(hCur);
	return 0;
//	return CEditView::OnSetCursor(pWnd,nHitTest,message);
}
class CMyFrameWnd:public CFrameWnd{
	DECLARE_DYNCREATE(CMyFrameWnd)
};
IMPLEMENT_DYNCREATE(CMyFrameWnd,CFrameWnd)
class CMyWinApp:public CWinApp{
public:
	BOOL InitInstance();
};
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CSingleDocTemplate *pTemplate=new CSingleDocTemplate(
		IDR_MENU1,
		RUNTIME_CLASS(CMyDoc),
		RUNTIME_CLASS(CMyFrameWnd),
		RUNTIME_CLASS(CMyView)
		);
	AddDocTemplate(pTemplate);
	OnFileNew();
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();
	return TRUE;
}