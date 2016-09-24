// MFCWizardPropertyPageDoc.cpp : implementation of the CMFCWizardPropertyPageDoc class
//

#include "stdafx.h"
#include "MFCWizardPropertyPage.h"

#include "MFCWizardPropertyPageDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageDoc

IMPLEMENT_DYNCREATE(CMFCWizardPropertyPageDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCWizardPropertyPageDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCWizardPropertyPageDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageDoc construction/destruction

CMFCWizardPropertyPageDoc::CMFCWizardPropertyPageDoc()
{
	// TODO: add one-time construction code here

}

CMFCWizardPropertyPageDoc::~CMFCWizardPropertyPageDoc()
{
}

BOOL CMFCWizardPropertyPageDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageDoc serialization

void CMFCWizardPropertyPageDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageDoc diagnostics

#ifdef _DEBUG
void CMFCWizardPropertyPageDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCWizardPropertyPageDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCWizardPropertyPageDoc commands
