// MFCMDI.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"
class CMdiDoc:public CDocument{
	DECLARE_DYNCREATE(CMdiDoc)
public:
	CString m_strContent;
};
IMPLEMENT_DYNCREATE(CMdiDoc,CDocument)
class CMdiView:public CEditView{
	DECLARE_DYNCREATE(CMdiView)
		DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChange();
	virtual void OnUpdate( 	CView* pSender, LPARAM lHint, 
		CObject* pHint ); 

};
BEGIN_MESSAGE_MAP(CMdiView,CEditView)
	ON_CONTROL_REFLECT_EX(EN_CHANGE,OnEnChange)
END_MESSAGE_MAP()
IMPLEMENT_DYNCREATE(CMdiView,CEditView)
void CMdiView::OnEnChange(){
	CMdiDoc *pMdiDoc=(CMdiDoc*)GetDocument();
	GetWindowText(pMdiDoc->m_strContent);
	pMdiDoc->UpdateAllViews(this);

}
void CMdiView::OnUpdate( CView* pSender, LPARAM lHint, 
					  CObject* pHint ){
	CMdiDoc *pDoc=(CMdiDoc*)GetDocument();	//get document
	SetWindowText(pDoc->m_strContent);	//show content
}

class CChildFrame:public CMDIChildWnd{
	DECLARE_DYNCREATE(CChildFrame)
};
IMPLEMENT_DYNCREATE(CChildFrame,CMDIChildWnd)
class CMainFrame:public CMDIFrameWnd{
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNewView();
};
BEGIN_MESSAGE_MAP(CMainFrame,CMDIFrameWnd)
	ON_COMMAND(ID_NEWVIEW,OnNewView)
END_MESSAGE_MAP()
void CMainFrame::OnNewView(){
	CFrameWnd* pFrameWnd=GetActiveFrame();
	if(!pFrameWnd->IsKindOf(RUNTIME_CLASS(CChildFrame))){
		return ;
	}
	CView *pView=pFrameWnd->GetActiveView();
	CDocument *pDoc=pView->GetDocument();
	CDocTemplate* pTemplate=pDoc->GetDocTemplate();
	CChildFrame *pNewFrame=(CChildFrame*)pTemplate->CreateNewFrame(pDoc,NULL);
	pTemplate->InitialUpdateFrame(pNewFrame,NULL);
}

class CMdiApp:public CWinApp{
public:
	virtual BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNew();
};
BEGIN_MESSAGE_MAP(CMdiApp,CWinApp)
	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()
CMdiApp theApp;
BOOL CMdiApp::InitInstance(){
	CMultiDocTemplate *pTemplate=new CMultiDocTemplate(
		IDR_MENUCHILD,
		RUNTIME_CLASS(CMdiDoc),
		RUNTIME_CLASS(CChildFrame),
		RUNTIME_CLASS(CMdiView)	
		);
	AddDocTemplate(pTemplate);
	CMainFrame *pFrame=new CMainFrame;
	pFrame->LoadFrame(IDR_MENUMAIN);
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	OnFileNew();
//	OnFileNew();
	return TRUE;
}
void CMdiApp::OnNew(){
	OnFileNew();
}