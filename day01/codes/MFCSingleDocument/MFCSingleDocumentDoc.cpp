// MFCSingleDocumentDoc.cpp : implementation of the CMFCSingleDocumentDoc class
//

#include "stdafx.h"
#include "MFCSingleDocument.h"

#include "MFCSingleDocumentDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentDoc

IMPLEMENT_DYNCREATE(CMFCSingleDocumentDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCSingleDocumentDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCSingleDocumentDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentDoc construction/destruction

CMFCSingleDocumentDoc::CMFCSingleDocumentDoc()
{
	// TODO: add one-time construction code here

}

CMFCSingleDocumentDoc::~CMFCSingleDocumentDoc()
{
}

BOOL CMFCSingleDocumentDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentDoc serialization

void CMFCSingleDocumentDoc::Serialize(CArchive& ar)
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
// CMFCSingleDocumentDoc diagnostics

#ifdef _DEBUG
void CMFCSingleDocumentDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCSingleDocumentDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentDoc commands
