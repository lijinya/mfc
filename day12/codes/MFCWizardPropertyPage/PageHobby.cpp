// PageHobby.cpp : implementation file
//

#include "stdafx.h"
#include "MFCWizardPropertyPage.h"
#include "PageHobby.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageHobby property page

IMPLEMENT_DYNCREATE(CPageHobby, CPropertyPage)

CPageHobby::CPageHobby() : CPropertyPage(CPageHobby::IDD)
{
	//{{AFX_DATA_INIT(CPageHobby)
	m_bMountain = FALSE;
	m_bProgramming = FALSE;
	m_bSwim = FALSE;
	m_bTravel = FALSE;
	//}}AFX_DATA_INIT
}

CPageHobby::~CPageHobby()
{
}

void CPageHobby::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageHobby)
	DDX_Check(pDX, IDC_CHECK_MOUNTAIN, m_bMountain);
	DDX_Check(pDX, IDC_CHECK_PROGRAMMING, m_bProgramming);
	DDX_Check(pDX, IDC_CHECK_SWIM, m_bSwim);
	DDX_Check(pDX, IDC_CHECK_TRAVEL, m_bTravel);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageHobby, CPropertyPage)
	//{{AFX_MSG_MAP(CPageHobby)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageHobby message handlers

BOOL CPageHobby::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropertySheet*)GetParent())->SetWizardButtons(
			PSWIZB_NEXT | PSWIZB_BACK
		);
	return CPropertyPage::OnSetActive();
}

LRESULT CPageHobby::OnWizardNext() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(TRUE);
	if(!(m_bMountain||m_bTravel||m_bSwim||m_bProgramming)){
		MessageBox("请至少选择一项爱好!");
		return -1;
	}
	return CPropertyPage::OnWizardNext();
}
