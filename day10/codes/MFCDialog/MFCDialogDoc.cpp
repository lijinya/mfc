// MFCDialogDoc.cpp : implementation of the CMFCDialogDoc class
//

#include "stdafx.h"
#include "MFCDialog.h"

#include "MFCDialogDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogDoc

IMPLEMENT_DYNCREATE(CMFCDialogDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCDialogDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCDialogDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogDoc construction/destruction

CMFCDialogDoc::CMFCDialogDoc()
{
	// TODO: add one-time construction code here

}

CMFCDialogDoc::~CMFCDialogDoc()
{
}

BOOL CMFCDialogDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCDialogDoc serialization

void CMFCDialogDoc::Serialize(CArchive& ar)
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
// CMFCDialogDoc diagnostics

#ifdef _DEBUG
void CMFCDialogDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCDialogDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogDoc commands
