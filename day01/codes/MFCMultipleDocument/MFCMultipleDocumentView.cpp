// MFCMultipleDocumentView.cpp : implementation of the CMFCMultipleDocumentView class
//

#include "stdafx.h"
#include "MFCMultipleDocument.h"

#include "MFCMultipleDocumentDoc.h"
#include "MFCMultipleDocumentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView

IMPLEMENT_DYNCREATE(CMFCMultipleDocumentView, CView)

BEGIN_MESSAGE_MAP(CMFCMultipleDocumentView, CView)
	//{{AFX_MSG_MAP(CMFCMultipleDocumentView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView construction/destruction

CMFCMultipleDocumentView::CMFCMultipleDocumentView()
{
	// TODO: add construction code here

}

CMFCMultipleDocumentView::~CMFCMultipleDocumentView()
{
}

BOOL CMFCMultipleDocumentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView drawing

void CMFCMultipleDocumentView::OnDraw(CDC* pDC)
{
	CMFCMultipleDocumentDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView printing

BOOL CMFCMultipleDocumentView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCMultipleDocumentView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCMultipleDocumentView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView diagnostics

#ifdef _DEBUG
void CMFCMultipleDocumentView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCMultipleDocumentView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCMultipleDocumentDoc* CMFCMultipleDocumentView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCMultipleDocumentDoc)));
	return (CMFCMultipleDocumentDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCMultipleDocumentView message handlers
