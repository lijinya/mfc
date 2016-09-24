// PageWidth.cpp : implementation file
//

#include "stdafx.h"
#include "MFCLabelPropertyPage.h"
#include "PageWidth.h"
#include "MFCLabelPropertyPageView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageWidth property page

IMPLEMENT_DYNCREATE(CPageWidth, CPropertyPage)

CPageWidth::CPageWidth() : CPropertyPage(CPageWidth::IDD)
{
	//{{AFX_DATA_INIT(CPageWidth)
	m_nLineWidth = 1;
	//}}AFX_DATA_INIT
}

CPageWidth::~CPageWidth()
{
}

void CPageWidth::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageWidth)
	DDX_Text(pDX, IDC_LINE_WIDTH, m_nLineWidth);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageWidth, CPropertyPage)
	//{{AFX_MSG_MAP(CPageWidth)
	ON_EN_CHANGE(IDC_LINE_WIDTH, OnChangeLineWidth)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageWidth message handlers

void CPageWidth::OnChangeLineWidth() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CPropertyPage::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	SetModified(TRUE);	//设置修改
}

BOOL CPageWidth::OnApply() 
{
	// TODO: Add your specialized code here and/or call the base class
	//将标签中的线宽赋值给视图。
	UpdateData(TRUE);
	//m_nLineWidth
	CMFCLabelPropertyPageView *pView=
		(CMFCLabelPropertyPageView*)\
		((CMainFrame*)AfxGetMainWnd())->GetActiveView();
	pView->m_nLineWidth=m_nLineWidth;
	pView->Invalidate();
	return CPropertyPage::OnApply();
}
