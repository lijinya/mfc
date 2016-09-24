// MFCMultipleDocumentDoc.cpp : implementation of the CMFCMultipleDocumentDoc class
//

#include "stdafx.h"
#include "MFCMultipleDocument.h"

#include "MFCMultipleDocumentDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentDoc

IMPLEMENT_DYNCREATE(CMFCMultipleDocumentDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCMultipleDocumentDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCMultipleDocumentDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentDoc construction/destruction

CMFCMultipleDocumentDoc::CMFCMultipleDocumentDoc()
{
	// TODO: add one-time construction code here

}

CMFCMultipleDocumentDoc::~CMFCMultipleDocumentDoc()
{
}

BOOL CMFCMultipleDocumentDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentDoc serialization

void CMFCMultipleDocumentDoc::Serialize(CArchive& ar)
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
// CMFCMultipleDocumentDoc diagnostics

#ifdef _DEBUG
void CMFCMultipleDocumentDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCMultipleDocumentDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentDoc commands
