// MFCDocument.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "resource.h"

class CLjy:public CCmdTarget{
public:
	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
	AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg void OnNew();
	DECLARE_MESSAGE_MAP()
};
BEGIN_MESSAGE_MAP(CLjy,CCmdTarget)
	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()
void CLjy::OnNew(){
	AfxMessageBox("CLjy::new");
}
BOOL CLjy::OnCmdMsg(UINT nID, int nCode, void* pExtra,
					AFX_CMDHANDLERINFO* pHandlerInfo){
//	AfxMessageBox("CLjy");
	return CCmdTarget::OnCmdMsg(nID, nCode, pExtra,pHandlerInfo);
//	return 0;
}

class CMyDocument:public CDocument{
public:
	DECLARE_MESSAGE_MAP()
		afx_msg void OnNew();
	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
	AFX_CMDHANDLERINFO* pHandlerInfo);
};
BEGIN_MESSAGE_MAP(CMyDocument,CDocument)
//	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()

BOOL CMyDocument::OnCmdMsg(UINT nID, int nCode, void* pExtra,
						   AFX_CMDHANDLERINFO* pHandlerInfo){
/*	CLjy ljy;
	if(ljy.OnCmdMsg(nID,nCode,pExtra,pHandlerInfo))
		return TRUE;
	return CDocument::OnCmdMsg(nID,nCode,pExtra,pHandlerInfo);
*/
	CLjy ljy;
	
	if(CDocument::OnCmdMsg(nID,nCode,pExtra,pHandlerInfo))
		return TRUE;
	return 	ljy.OnCmdMsg(nID,nCode,pExtra,pHandlerInfo);
		
}

void CMyDocument::OnNew(){
	AfxMessageBox("CMyDocument::new");
}

class CMyView:public CEditView{
public:
	virtual void OnDraw(CDC* pDC);
	DECLARE_DYNCREATE(CMyView)
	DECLARE_MESSAGE_MAP()
	afx_msg void OnNew();
//	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg  int OnCreate(LPCREATESTRUCT lpCreateStruct);
//	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,	AFX_CMDHANDLERINFO* pHandlerInfo);
};
IMPLEMENT_DYNCREATE(CMyView,CEditView)
BEGIN_MESSAGE_MAP(CMyView,CEditView)
	ON_WM_CREATE()
//	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()

int CMyView::OnCreate(LPCREATESTRUCT lpCreateStruct){
	return CEditView::OnCreate(lpCreateStruct);
	//	return 0;
}
/*
BOOL CMyView::OnCmdMsg(UINT nID, int nCode, void* pExtra,AFX_CMDHANDLERINFO* pHandlerInfo){
//	CLjy ljy;
//	if(CView::OnCmdMsg(nID,nCode, pExtra,pHandlerInfo)){
//		return TRUE;
//	}
//	return ljy.OnCmdMsg(nID,nCode,pExtra,pHandlerInfo);
}
*/
void CMyView::OnNew(){
	AfxMessageBox("CMyView::new");
}
void CMyView::OnDraw(CDC* pDC){
	
}

class CMyFrameWnd:public CFrameWnd{
	DECLARE_MESSAGE_MAP()
public:
	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
	AFX_CMDHANDLERINFO* pHandlerInfo);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnNew();
};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()
BOOL CMyFrameWnd::OnCmdMsg(UINT nID, int nCode, void* pExtra,
						   AFX_CMDHANDLERINFO* pHandlerInfo){
	CLjy ljy;
/*	if(ljy.OnCmdMsg(nID, nCode, pExtra,pHandlerInfo))
		return TRUE;
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra,pHandlerInfo);
*/	if(CFrameWnd::OnCmdMsg(nID, nCode, pExtra,pHandlerInfo)){
		return TRUE;
	}
	ljy.OnCmdMsg(nID, nCode, pExtra,pHandlerInfo);
	
}
int CMyFrameWnd::OnCreate(LPCREATESTRUCT lpCreateStruct){
//	return 0;
	return CFrameWnd::OnCreate(lpCreateStruct);
}
void CMyFrameWnd::OnNew(){
	AfxMessageBox("CMyFrameWnd::new");
}

class CMyWinApp:public CWinApp{
public:
	BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra,
	AFX_CMDHANDLERINFO* pHandlerInfo);
	virtual BOOL InitInstance();
	afx_msg void OnNew();
	DECLARE_MESSAGE_MAP()
};
BEGIN_MESSAGE_MAP(CMyWinApp,CWinApp)
	ON_COMMAND(ID_NEW,OnNew)
END_MESSAGE_MAP()
void CMyWinApp::OnNew(){
	AfxMessageBox("CMyWinApp::new");
}
BOOL CMyWinApp::OnCmdMsg(UINT nID, int nCode, void* pExtra,
						   AFX_CMDHANDLERINFO* pHandlerInfo){
	CLjy ljy;
	if(ljy.OnCmdMsg(nID, nCode, pExtra,pHandlerInfo))
		return TRUE;
	return CWinApp::OnCmdMsg(nID, nCode, pExtra,pHandlerInfo);
/*	if(CFrameWnd::OnCmdMsg(nID, nCode, pExtra,pHandlerInfo)){
		return TRUE;
	}
	ljy.OnCmdMsg(nID, nCode, pExtra,pHandlerInfo);
	*/
}
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	CCreateContext cct;
	cct.m_pCurrentDoc=new CMyDocument();
	cct.m_pNewViewClass=RUNTIME_CLASS(CMyView);
	pFrame->LoadFrame(IDR_MENU1,WS_OVERLAPPEDWINDOW,NULL,&cct);
//	pFrame->Create(NULL,"MFCDocument");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}
