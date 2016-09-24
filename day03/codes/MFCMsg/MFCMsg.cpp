// MFCMsg.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#define WM_MYMESSAGE WM_USER+10001
class CMyFrameWnd:public CFrameWnd{
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT cs);
	afx_msg void OnPaint(void);
	afx_msg void OnTest1();
	afx_msg void OnTest(UINT nID);
	afx_msg LRESULT OnMyMessage(WPARAM, LPARAM);
	afx_msg void OnEnChange( );
};
BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)

ON_WM_CREATE()
ON_WM_PAINT()
ON_COMMAND(1001,OnTest1)
ON_COMMAND_RANGE(1002,1003,OnTest)
ON_MESSAGE(WM_MYMESSAGE,OnMyMessage)
ON_EN_CHANGE(1004,OnEnChange)

END_MESSAGE_MAP()

int CMyFrameWnd::OnCreate(LPCREATESTRUCT cs){
//	AfxMessageBox("WM_CREATE");
	CreateWindowEx(0,"BUTTON","Test1",WS_CHILD|WS_VISIBLE,100,100,100,40,
		m_hWnd,(HMENU)1001,AfxGetInstanceHandle(),NULL);
	CreateWindowEx(0,"BUTTON","Test2",WS_CHILD|WS_VISIBLE,100,200,100,40,
		m_hWnd,(HMENU)1002,AfxGetInstanceHandle(),NULL);
	CreateWindowEx(0,"BUTTON","Test3",WS_CHILD|WS_VISIBLE,100,300,100,40,
		m_hWnd,(HMENU)1003,AfxGetInstanceHandle(),NULL);
	CreateWindowEx(0,"EDIT","Test4",WS_CHILD|WS_VISIBLE|WS_BORDER,300,100,200,100,
		m_hWnd,(HMENU)1004,AfxGetInstanceHandle(),NULL);
	return CFrameWnd::OnCreate(cs);
}
void CMyFrameWnd::OnPaint(void){
	PAINTSTRUCT ps={0};
	HDC hDC=::BeginPaint(m_hWnd,&ps);
	::TextOut(hDC,100,100,"hello",5);
	::EndPaint(m_hWnd,&ps);
//	return (void)(CFrameWnd::OnPaint());
}
void CMyFrameWnd::OnTest1(){
	AfxMessageBox("Test1");
//	SendMessage(WM_MYMESSAGE,0,1);	//this=pFrame
	HWND hWnd=::FindWindow(NULL,"MFCCreate");
	::SendMessage(hWnd,WM_MYMESSAGE,0,1);
}
void CMyFrameWnd::OnTest(UINT nID){
	if(1002==nID){
		AfxMessageBox("Test2 clicked!");
	}else if(1003==nID){
		AfxMessageBox("Test3 clicked!");
	}
}
LRESULT CMyFrameWnd::OnMyMessage(WPARAM wParam, LPARAM lParam){
	CString str;
	str.Format("wParam=%d\tlParam=%d",wParam,lParam);
	AfxMessageBox(str);
	return 0;
}
void CMyFrameWnd::OnEnChange(){
	AfxMessageBox("content changed!");
}
class CMyWinApp:public CWinApp{
public:
	virtual BOOL InitInstance();
};
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MFCMsg");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}