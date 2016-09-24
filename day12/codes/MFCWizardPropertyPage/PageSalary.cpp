// PageSalary.cpp : implementation file
//

#include "stdafx.h"
#include "MFCWizardPropertyPage.h"
#include "PageSalary.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPageSalary property page

IMPLEMENT_DYNCREATE(CPageSalary, CPropertyPage)

CPageSalary::CPageSalary() : CPropertyPage(CPageSalary::IDD)
{
	//{{AFX_DATA_INIT(CPageSalary)
	m_strSalary = _T("");
	//}}AFX_DATA_INIT
}

CPageSalary::~CPageSalary()
{
}

void CPageSalary::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPageSalary)
	DDX_CBString(pDX, IDC_COMBO_SALARY, m_strSalary);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CPageSalary, CPropertyPage)
	//{{AFX_MSG_MAP(CPageSalary)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPageSalary message handlers

BOOL CPageSalary::OnSetActive() 
{
	// TODO: Add your specialized code here and/or call the base class
	((CPropertySheet*)GetParent())->SetWizardButtons(
		PSWIZB_BACK|PSWIZB_FINISH);
	return CPropertyPage::OnSetActive();
}

BOOL CPageSalary::OnWizardFinish() 
{
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(TRUE);
	if(m_strSalary.IsEmpty()){
		MessageBox("«Î—°‘Ò–ΩÀÆ∑∂Œß!");
		return FALSE;
	}
	return CPropertyPage::OnWizardFinish();
}
