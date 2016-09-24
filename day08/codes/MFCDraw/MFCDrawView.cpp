// MFCDrawView.cpp : implementation of the CMFCDrawView class
//

#include "stdafx.h"
#include "MFCDraw.h"

#include "MFCDrawDoc.h"
#include "MFCDrawView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView

IMPLEMENT_DYNCREATE(CMFCDrawView, CView)

BEGIN_MESSAGE_MAP(CMFCDrawView, CView)
	//{{AFX_MSG_MAP(CMFCDrawView)
	ON_COMMAND(ID_DC_CPEN, OnDcCpen)
	ON_COMMAND(ID_DC_GDIBRUSH, OnDcGdibrush)
	ON_COMMAND(ID_DC_GDIFONT, OnDcGdifont)
	ON_COMMAND(ID_DC_GDIPEN, OnDcGdipen)
	ON_COMMAND(ID_GDI_BMP, OnGdiBmp)
	ON_COMMAND(ID_GDI_RGN, OnGdiRgn)
	ON_COMMAND(ID_GDI_LINE, OnGdiLine)
	ON_COMMAND(ID_GDI_ELLIPSE, OnGdiEllipse)
	ON_COMMAND(ID_GDI_RECT, OnGdiRect)
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView construction/destruction

CMFCDrawView::CMFCDrawView()
{
	// TODO: add construction code here
//	m_ptBegin;
	m_nDrawType=0;
}

CMFCDrawView::~CMFCDrawView()
{
}

BOOL CMFCDrawView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView drawing

void CMFCDrawView::OnDraw(CDC* pDC)
{
	CMFCDrawDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView printing

BOOL CMFCDrawView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCDrawView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCDrawView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView diagnostics

#ifdef _DEBUG
void CMFCDrawView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCDrawView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCDrawDoc* CMFCDrawView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDrawDoc)));
	return (CMFCDrawDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDrawView message handlers

void CMFCDrawView::OnDcCpen() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	CPen pen(PS_SOLID,5,RGB(255,0,0));
	CPen *pOldPen=dc.SelectObject(&pen);
	dc.Rectangle(50,50,150,200);
	dc.SelectObject(pOldPen);
	pen.DeleteObject();
}

void CMFCDrawView::OnDcGdibrush() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	CBitmap bitMap;
	bitMap.LoadBitmap(IDB_BITMAP1);
//	CBrush brush(HS_BDIAGONAL,RGB(0,255,0));
	CBrush brush(&bitMap);
	CBrush *pOldBrush=dc.SelectObject(&brush);
	RECT rect={100,100,250,200};
	dc.FillRect(&rect,&brush);
	dc.SelectObject(&pOldBrush);
	brush.DeleteObject();
}

void CMFCDrawView::OnDcGdifont() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	CFont font;
	font.CreatePointFont(500,"黑体");
	CFont *pOldFont=dc.SelectObject(&font);
	dc.TextOut(100,100,"hello CFont");
	dc.SelectObject(pOldFont);
	font.DeleteObject();
}

void CMFCDrawView::OnDcGdipen() 
{
	// TODO: Add your command handler code here
	
}

void CMFCDrawView::OnGdiBmp() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	//无法直接把位图选入dc,位图大小不固定。
	CBitmap bmp;
	bmp.LoadBitmap(IDB_BITMAP2);
	//创建兼容dc
	CDC dcBmp;
	dcBmp.CreateCompatibleDC(&dc);
	//将位图选入兼容dc
	CBitmap*pOldBmp=dcBmp.SelectObject(&bmp);
	//将位图从兼容dc向当前dc拷贝
/*	dc.BitBlt(
		0,0,
		253,200,
		&dcBmp,
		0,0,
		SRCCOPY
		);	*/
	CRect rcClient;
	GetClientRect(&rcClient);
	dc.StretchBlt(
		0,0,
		rcClient.Width(),rcClient.Height(),
		&dcBmp,
		0,0,
		253,200,
		SRCCOPY
		);
	dcBmp.SelectObject(pOldBmp);
	dcBmp.DeleteDC();
	bmp.DeleteObject();
}

void CMFCDrawView::OnGdiRgn() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	CBrush brush(RGB(255,0,0));
	CBrush* pOldBrush=dc.SelectObject(&brush);
	CRgn rgn1,rgn2,rgn3;
	rgn1.CreateRectRgn(100,100,300,200);
	rgn2.CreateEllipticRgn(150,150,300,250);
	rgn2.CombineRgn(&rgn1,&rgn2,RGN_DIFF);
	dc.FillRgn(&rgn2,&brush);
	dc.SelectObject(pOldBrush);
	brush.DeleteObject();
	AfxGetMainWnd()->SetWindowRgn(rgn1,TRUE);	//制作不规则窗口 按钮
	//CWnd::SetWindowRgn
}

void CMFCDrawView::OnGdiLine() 
{
	// TODO: Add your command handler code here
	m_nDrawType=0;
	m_ptBegin=0;
	m_ptEnd=0;
}

void CMFCDrawView::OnGdiEllipse() 
{
	// TODO: Add your command handler code here
	m_nDrawType=2;
}

void CMFCDrawView::OnGdiRect() 
{
	// TODO: Add your command handler code here
	m_nDrawType=1;
}

void CMFCDrawView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptEnd=point;
	CClientDC dc(this);
	switch(m_nDrawType){
		case 0:{
					dc.MoveTo(m_ptBegin.x,m_ptBegin.y);
					dc.LineTo(m_ptEnd.x,m_ptEnd.y);
				break;
			   }
		case 1:{
					dc.Rectangle(m_ptBegin.x,m_ptBegin.y,m_ptEnd.x,
						m_ptEnd.y);	
					break;
			   }
		case 2:{
					dc.Ellipse(m_ptBegin.x,m_ptBegin.y,m_ptEnd.x,
						m_ptEnd.y);
					break;
			   }
	}
	CView::OnLButtonUp(nFlags, point);
}

void CMFCDrawView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	m_ptBegin=point;
	CView::OnLButtonDown(nFlags, point);
}
