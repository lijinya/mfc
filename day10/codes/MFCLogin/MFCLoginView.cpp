// MFCLoginView.cpp : implementation of the CMFCLoginView class
//

#include "stdafx.h"
#include "MFCLogin.h"

#include "MFCLoginDoc.h"
#include "MFCLoginView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView

IMPLEMENT_DYNCREATE(CMFCLoginView, CView)

BEGIN_MESSAGE_MAP(CMFCLoginView, CView)
	//{{AFX_MSG_MAP(CMFCLoginView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView construction/destruction

CMFCLoginView::CMFCLoginView()
{
	// TODO: add construction code here

}

CMFCLoginView::~CMFCLoginView()
{
}

BOOL CMFCLoginView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView drawing

void CMFCLoginView::OnDraw(CDC* pDC)
{
	CMFCLoginDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView printing

BOOL CMFCLoginView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCLoginView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCLoginView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView diagnostics

#ifdef _DEBUG
void CMFCLoginView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCLoginView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCLoginDoc* CMFCLoginView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCLoginDoc)));
	return (CMFCLoginDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCLoginView message handlers
