// MFCLabelPropertyPageDoc.cpp : implementation of the CMFCLabelPropertyPageDoc class
//

#include "stdafx.h"
#include "MFCLabelPropertyPage.h"

#include "MFCLabelPropertyPageDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageDoc

IMPLEMENT_DYNCREATE(CMFCLabelPropertyPageDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCLabelPropertyPageDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCLabelPropertyPageDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageDoc construction/destruction

CMFCLabelPropertyPageDoc::CMFCLabelPropertyPageDoc()
{
	// TODO: add one-time construction code here

}

CMFCLabelPropertyPageDoc::~CMFCLabelPropertyPageDoc()
{
}

BOOL CMFCLabelPropertyPageDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageDoc serialization

void CMFCLabelPropertyPageDoc::Serialize(CArchive& ar)
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
// CMFCLabelPropertyPageDoc diagnostics

#ifdef _DEBUG
void CMFCLabelPropertyPageDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCLabelPropertyPageDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageDoc commands
