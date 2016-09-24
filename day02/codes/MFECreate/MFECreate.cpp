// MFECreate.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#define WM_MYMESSAGE WM_USER+10001
class CMyFrameWnd:public CFrameWnd{
public:
	int xPos,yPos;
	CMyFrameWnd(int x=100,int y=100);
	virtual LRESULT WindowProc(
		UINT message,WPARAM wParam,LPARAM lParam);
};
CMyFrameWnd::CMyFrameWnd(int x,int y){
	CFrameWnd::CFrameWnd();
	xPos=x;
	yPos=y;
}
LRESULT CMyFrameWnd::WindowProc(UINT message,WPARAM wParam,LPARAM lParam){
	switch(message){
		case WM_PAINT:{
				PAINTSTRUCT ps={0};
				HDC hDC=::BeginPaint(m_hWnd,&ps);
				::TextOut(hDC,xPos,yPos,"hello",5);
				::EndPaint(m_hWnd,&ps);
			}
			break;
		case WM_KEYDOWN:{		
			switch(wParam){
			case 0x25:
				xPos-=5;
				break;
			case 0x26:
				yPos-=5;
				break;
			case 0x27:
				xPos+=5;
				break;
			case 0x28:
				yPos+=5;
				break;
			}
			::InvalidateRect(m_hWnd,NULL,TRUE);
			break;
			}
		case WM_CREATE:
			AfxMessageBox("WM_CREATE");
			break;
		case WM_MYMESSAGE:
			AfxMessageBox("SendMessage success");
			break;
	}
	return CFrameWnd::WindowProc(message,wParam,lParam);
}
class CMyWinApp:public CWinApp{
public:
	virtual BOOL InitInstance();
	CMyWinApp();
};
CMyWinApp::CMyWinApp(){}
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
		CMyFrameWnd *pFrame=new CMyFrameWnd();
		pFrame->Create(NULL,"MFCCreate");
		m_pMainWnd=pFrame;
		pFrame->ShowWindow(SW_SHOW);
		pFrame->UpdateWindow();
		return TRUE;
//	return CWinApp::InitInstance();
}