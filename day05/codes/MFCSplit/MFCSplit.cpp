// MFCSplit.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
class CMyFrameWnd:public CFrameWnd{
public:
	CSplitterWnd m_split1;
	CSplitterWnd m_split2;
public:
	virtual BOOL OnCreateClient(
		LPCREATESTRUCT lpcs,
		CCreateContext* pContext );
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
	
};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)
	ON_WM_CREATE()
END_MESSAGE_MAP()
int CMyFrameWnd::OnCreate(LPCREATESTRUCT lpCreateStruct){
//	return 0;
	return CFrameWnd::OnCreate(lpCreateStruct);
}
class CMyView:public CView{
public:
	virtual void OnDraw(CDC* pDC);
	DECLARE_DYNCREATE(CMyView)
};
BOOL CMyFrameWnd::OnCreateClient(
							LPCREATESTRUCT lpcs,
							CCreateContext* pContext ){
/*	m_split1.CreateStatic(this,2,1);
	m_split2.CreateStatic(&m_split1,1,2,
		WS_CHILD|WS_VISIBLE,m_split1.IdFromRowCol(0,0));
	m_split2.CreateView(0,0,RUNTIME_CLASS(CMyView),CSize(200,200),pContext);
	m_split2.CreateView(0,1,RUNTIME_CLASS(CEditView),CSize(200,200),pContext);
	m_split1.CreateView(1,0,RUNTIME_CLASS(CHtmlView),CSize(400,200),pContext);
	m_split1.SetRowInfo(0,200,
		100	//if not satisify,minimum 100
		);
	CHtmlView *cHtml=(CHtmlView*)(m_split1.GetPane(1,0));
	cHtml->Navigate("c:/");
*/
/*	m_split1.CreateStatic(this,1,2);
	m_split2.CreateStatic(&m_split1,2,1,
		WS_CHILD|WS_VISIBLE,m_split1.IdFromRowCol(0,0));
	m_split2.CreateView(1,0,RUNTIME_CLASS(CMyView),CSize(200,200),pContext);
	m_split2.CreateView(0,0,RUNTIME_CLASS(CEditView),CSize(200,200),pContext);
	m_split1.CreateView(0,1,RUNTIME_CLASS(CHtmlView),CSize(200,400),pContext);
	m_split1.SetColumnInfo(0,200,
		100	//if not satisify,minimum 100
		);
	CHtmlView *cHtml=(CHtmlView*)(m_split1.GetPane(0,1));
	cHtml->Navigate("c:/");
	return TRUE;
	*/
	CCreateContext cct;
	cct.m_pNewViewClass=RUNTIME_CLASS(CMyView);
	m_split1.Create(this,2,2,CSize(200,200),&cct);
	return TRUE;
}


	IMPLEMENT_DYNCREATE(CMyView,CView)
void CMyView::OnDraw(CDC* pDC){
	pDC->TextOut(100,100,"hello");
}
class CMyWinApp:public CWinApp{
	virtual BOOL InitInstance();
};
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MFCSplit");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}
