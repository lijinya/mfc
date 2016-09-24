// MFCSingleDocumentView.cpp : implementation of the CMFCSingleDocumentView class
//

#include "stdafx.h"
#include "MFCSingleDocument.h"

#include "MFCSingleDocumentDoc.h"
#include "MFCSingleDocumentView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView

IMPLEMENT_DYNCREATE(CMFCSingleDocumentView, CView)

BEGIN_MESSAGE_MAP(CMFCSingleDocumentView, CView)
	//{{AFX_MSG_MAP(CMFCSingleDocumentView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView construction/destruction

CMFCSingleDocumentView::CMFCSingleDocumentView()
{
	// TODO: add construction code here

}

CMFCSingleDocumentView::~CMFCSingleDocumentView()
{
}

BOOL CMFCSingleDocumentView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView drawing

void CMFCSingleDocumentView::OnDraw(CDC* pDC)
{
	CMFCSingleDocumentDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView printing

BOOL CMFCSingleDocumentView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCSingleDocumentView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCSingleDocumentView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView diagnostics

#ifdef _DEBUG
void CMFCSingleDocumentView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCSingleDocumentView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCSingleDocumentDoc* CMFCSingleDocumentView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCSingleDocumentDoc)));
	return (CMFCSingleDocumentDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCSingleDocumentView message handlers
