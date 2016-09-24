// MFCLoginDoc.cpp : implementation of the CMFCLoginDoc class
//

#include "stdafx.h"
#include "MFCLogin.h"

#include "MFCLoginDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginDoc

IMPLEMENT_DYNCREATE(CMFCLoginDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCLoginDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCLoginDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginDoc construction/destruction

CMFCLoginDoc::CMFCLoginDoc()
{
	// TODO: add one-time construction code here

}

CMFCLoginDoc::~CMFCLoginDoc()
{
}

BOOL CMFCLoginDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCLoginDoc serialization

void CMFCLoginDoc::Serialize(CArchive& ar)
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
// CMFCLoginDoc diagnostics

#ifdef _DEBUG
void CMFCLoginDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCLoginDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginDoc commands
