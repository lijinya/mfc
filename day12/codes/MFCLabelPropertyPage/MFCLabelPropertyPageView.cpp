// MFCLabelPropertyPageView.cpp : implementation of the CMFCLabelPropertyPageView class
//

#include "stdafx.h"
#include "MFCLabelPropertyPage.h"

#include "MFCLabelPropertyPageDoc.h"
#include "MFCLabelPropertyPageView.h"

#include "PageColor.h"
#include "PageWidth.h"
#include "LabelSheet.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView

IMPLEMENT_DYNCREATE(CMFCLabelPropertyPageView, CView)

BEGIN_MESSAGE_MAP(CMFCLabelPropertyPageView, CView)
	//{{AFX_MSG_MAP(CMFCLabelPropertyPageView)
	ON_COMMAND(ID_LABEL_PROP, OnLabelProp)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView construction/destruction

CMFCLabelPropertyPageView::CMFCLabelPropertyPageView()
{
	// TODO: add construction code here
	m_nLineWidth=1;
	m_LineColor=RGB(0,0,0);
}

CMFCLabelPropertyPageView::~CMFCLabelPropertyPageView()
{
}

BOOL CMFCLabelPropertyPageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView drawing

void CMFCLabelPropertyPageView::OnDraw(CDC* pDC)
{
	CMFCLabelPropertyPageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CPen pen(PS_SOLID,m_nLineWidth,m_LineColor);
	CObject *pOldPen=pDC->SelectObject(&pen);
	pDC->Rectangle(50,50,200,200);
	pDC->SelectObject(pOldPen);
	pen.DeleteObject();
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView printing

BOOL CMFCLabelPropertyPageView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCLabelPropertyPageView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCLabelPropertyPageView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView diagnostics

#ifdef _DEBUG
void CMFCLabelPropertyPageView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCLabelPropertyPageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCLabelPropertyPageDoc* CMFCLabelPropertyPageView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCLabelPropertyPageDoc)));
	return (CMFCLabelPropertyPageDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCLabelPropertyPageView message handlers

void CMFCLabelPropertyPageView::OnLabelProp() 
{
	// TODO: Add your command handler code here
	//创建和显示标签式属性页。
	CLabelSheet labelSheet("标签式");
	labelSheet.DoModal();
}
