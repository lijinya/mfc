// MFCDialogView.cpp : implementation of the CMFCDialogView class
//

#include "stdafx.h"
#include "MFCDialog.h"

#include "MFCDialogDoc.h"
#include "MFCDialogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView

IMPLEMENT_DYNCREATE(CMFCDialogView, CView)

BEGIN_MESSAGE_MAP(CMFCDialogView, CView)
	//{{AFX_MSG_MAP(CMFCDialogView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView construction/destruction

CMFCDialogView::CMFCDialogView()
{
	// TODO: add construction code here

}

CMFCDialogView::~CMFCDialogView()
{
}

BOOL CMFCDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView drawing

void CMFCDialogView::OnDraw(CDC* pDC)
{
	CMFCDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView printing

BOOL CMFCDialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCDialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCDialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView diagnostics

#ifdef _DEBUG
void CMFCDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCDialogDoc* CMFCDialogView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDialogDoc)));
	return (CMFCDialogDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDialogView message handlers
