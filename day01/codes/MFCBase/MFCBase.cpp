// MFCBase.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
class CMyFrameWnd:public CFrameWnd{
	
};
class CMyWinApp:public CWinApp{
public:
	CMyWinApp();
	virtual BOOL InitInstance();
	virtual int Run();
	virtual BOOL InitApplication();
	virtual BOOL OnIdle( LONG lCount );
	virtual int ExitInstance( );
};
int CMyWinApp::ExitInstance( ){
	AfxMessageBox("CWinApp::ExitInstance");
	return CWinApp::ExitInstance();
}
BOOL CMyWinApp::OnIdle( LONG lCount ){
//	AfxMessageBox("OnIdle");
	return CWinApp::OnIdle(lCount);
}
BOOL CMyWinApp::InitApplication(){
	AfxMessageBox("InitApplication");
	return CWinApp::InitApplication();
}
CMyWinApp::CMyWinApp(){
	
}
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MyFrame");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}

int CMyWinApp::Run(){
	AfxMessageBox("hello mfc!");
	return CWinApp::Run();
}