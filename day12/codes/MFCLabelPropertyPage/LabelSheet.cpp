// LabelSheet.cpp : implementation file
//

#include "stdafx.h"
#include "MFCLabelPropertyPage.h"
#include "LabelSheet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLabelSheet

IMPLEMENT_DYNAMIC(CLabelSheet, CPropertySheet)

CLabelSheet::CLabelSheet(UINT nIDCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(nIDCaption, pParentWnd, iSelectPage)
{
	SetPage();
}

CLabelSheet::CLabelSheet(LPCTSTR pszCaption, CWnd* pParentWnd, UINT iSelectPage)
	:CPropertySheet(pszCaption, pParentWnd, iSelectPage)
{
	SetPage();
}

CLabelSheet::~CLabelSheet()
{
}


BEGIN_MESSAGE_MAP(CLabelSheet, CPropertySheet)
	//{{AFX_MSG_MAP(CLabelSheet)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLabelSheet message handlers

void CLabelSheet::SetPage()
{
	AddPage(&m_pageLineColor);
	AddPage(&m_pageLineWidth);
}
