// MFCDrawDoc.cpp : implementation of the CMFCDrawDoc class
//

#include "stdafx.h"
#include "MFCDraw.h"

#include "MFCDrawDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawDoc

IMPLEMENT_DYNCREATE(CMFCDrawDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCDrawDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCDrawDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawDoc construction/destruction

CMFCDrawDoc::CMFCDrawDoc()
{
	// TODO: add one-time construction code here

}

CMFCDrawDoc::~CMFCDrawDoc()
{
}

BOOL CMFCDrawDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCDrawDoc serialization

void CMFCDrawDoc::Serialize(CArchive& ar)
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
// CMFCDrawDoc diagnostics

#ifdef _DEBUG
void CMFCDrawDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCDrawDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawDoc commands
