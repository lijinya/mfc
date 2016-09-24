// MFCDCDoc.cpp : implementation of the CMFCDCDoc class
//

#include "stdafx.h"
#include "MFCDC.h"

#include "MFCDCDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDCDoc

IMPLEMENT_DYNCREATE(CMFCDCDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCDCDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCDCDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDCDoc construction/destruction

CMFCDCDoc::CMFCDCDoc()
{
	// TODO: add one-time construction code here

}

CMFCDCDoc::~CMFCDCDoc()
{
}

BOOL CMFCDCDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCDCDoc serialization

void CMFCDCDoc::Serialize(CArchive& ar)
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
// CMFCDCDoc diagnostics

#ifdef _DEBUG
void CMFCDCDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCDCDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDCDoc commands
