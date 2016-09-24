// PageColor.cpp : implementation file
//

#include "stdafx.h"
#include "MFCLabelPropertyPage.h"
#include "PageColor.h"
#include "MFCLabelPropertyPageView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageColor property page

IMPLEMENT_DYNCREATE(CPageColor, CPropertyPage)

CPageColor::CPageColor() : CPropertyPage(CPageColor::IDD)
{
	//{{AFX_DATA_INIT(CPageColor)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_LineColor=RGB(0,0,0);
}

CPageColor::~CPageColor()
{
}

void CPageColor::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageColor)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageColor, CPropertyPage)
	//{{AFX_MSG_MAP(CPageColor)
	ON_BN_CLICKED(IDC_COLOR, OnColor)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageColor message handlers

void CPageColor::OnColor() 
{
	// TODO: Add your control notification handler code here
	CColorDialog dlg;
	if(IDOK!=dlg.DoModal()){
		return;
	}else{
		m_LineColor=dlg.GetColor();
		SetModified(TRUE);
	}
}

BOOL CPageColor::OnApply() 
{
	// TODO: Add your specialized code here and/or call the base class
		//将标签中的颜色赋值给视图。
//	UpdateData(TRUE);
	//m_nLineColor
	CMFCLabelPropertyPageView *pView=
		(CMFCLabelPropertyPageView*)\
		((CMainFrame*)AfxGetMainWnd())->GetActiveView();
	pView->m_LineColor=m_LineColor;
	pView->Invalidate();
	return CPropertyPage::OnApply();
}
