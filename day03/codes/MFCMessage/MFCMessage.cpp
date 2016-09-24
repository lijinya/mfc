// MFCMessage.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
class CMyFrameWnd:public CFrameWnd{
//	DECLARE_MESSAGE_MAP()
///////////////////////////////////////
//	replace DECLARE_MESSAGE_MAP()

private: 
		 static const AFX_MSGMAP_ENTRY _messageEntries[]; 
		 //
protected: 
		   static AFX_DATA const AFX_MSGMAP messageMap; 
	       virtual const AFX_MSGMAP* GetMessageMap() const; 
		   /*
*/
////////////////////////////////////////
public:
	int m_xPos;
	int m_yPos;
	CMyFrameWnd(int x=100,int y=100);
	LRESULT OnCreate(WPARAM wParam,LPARAM lParam);
	LRESULT OnPaint(WPARAM wParam,LPARAM lParam);
	LRESULT OnMouseMove(WPARAM wParam,LPARAM lParam);
};
CMyFrameWnd::CMyFrameWnd(int x,int y){
	m_xPos=x;
	m_yPos=y;
}
LRESULT CMyFrameWnd::OnCreate(WPARAM wParam,LPARAM lParam){
	AfxMessageBox("CMyframeWnd::OnCreate");
	return 0;
}
LRESULT CMyFrameWnd::OnMouseMove(WPARAM wParam,LPARAM lParam){
	m_xPos=LOWORD(lParam);
	m_yPos=HIWORD(lParam);
//	m_xPos = ::GET_X_LPARAM(lParam); 
//	m_yPos = ::GET_Y_LPARAM(lParam);
	::InvalidateRect(m_hWnd,NULL,TRUE);
	return 0;
}
LRESULT CMyFrameWnd::OnPaint(WPARAM wParam,LPARAM lParam){
	PAINTSTRUCT ps={0};
	HDC hDC=::BeginPaint(m_hWnd,&ps);
	::TextOut(hDC,m_xPos,m_yPos,"hello",5);
	::EndPaint(m_hWnd,&ps);
	return 0;
}
class CMyWinApp:public CWinApp{
public:
	virtual BOOL InitInstance();
	CMyWinApp(){}
};

//	BEGIN_MESSAGE_MAP(CMyFrameWnd,CFrameWnd)////本类，基类

const AFX_MSGMAP* CMyFrameWnd::GetMessageMap() const { 
	return &CMyFrameWnd::messageMap; 
} 
AFX_COMDAT AFX_DATADEF const AFX_MSGMAP CMyFrameWnd::messageMap = { 
	&CFrameWnd::messageMap, &CMyFrameWnd::_messageEntries[0] 
}; 
AFX_COMDAT const AFX_MSGMAP_ENTRY CMyFrameWnd::_messageEntries[] = {
  /*
*/
//	ON_MESSAGE(WM_MOUSEMOVE,OnMouseMove)
//	ON_MESSAGE(WM_CREATE,OnCreate)
//	ON_MESSAGE(WM_PAINT,OnPaint)	//add to the array
		{ 
			WM_CREATE, 0, 0, 0, AfxSig_lwl, 
			(AFX_PMSG)(AFX_PMSGW)(LRESULT (AFX_MSG_CALL CWnd::*)\
			(WPARAM, LPARAM))&OnCreate 
		},
/*		*/
END_MESSAGE_MAP()
/*
//#define END_MESSAGE_MAP() 
		{
			0, 0, 0, 0, AfxSig_end, (AFX_PMSG)0 
		} 
	}; 
	*/
CMyWinApp theApp;
BOOL CMyWinApp::InitInstance(){
	CMyFrameWnd *pFrame=new CMyFrameWnd();
	pFrame->Create(NULL,"MFCMsg");
	m_pMainWnd=pFrame;
	pFrame->ShowWindow(SW_SHOW);
	pFrame->UpdateWindow();
	return TRUE;
}

