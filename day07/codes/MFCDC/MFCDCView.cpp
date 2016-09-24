// MFCDCView.cpp : implementation of the CMFCDCView class
//

#include "stdafx.h"
#include "MFCDC.h"

#include "MFCDCDoc.h"
#include "MFCDCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView

IMPLEMENT_DYNCREATE(CMFCDCView, CView)

BEGIN_MESSAGE_MAP(CMFCDCView, CView)
	//{{AFX_MSG_MAP(CMFCDCView)
	ON_COMMAND(ID_DC_CDC, OnDcCdc)
	ON_COMMAND(ID_DC_WINDOWDC, OnDcWindowdc)
	ON_COMMAND(ID_DC_CLIENTDC, OnDcClientdc)
	ON_WM_PAINT()
	ON_COMMAND(ID_DC_CMETAFILE, OnDcCmetafile)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView construction/destruction

CMFCDCView::CMFCDCView()
{
	// TODO: add construction code here
	m_hMetaFile=NULL;
}

CMFCDCView::~CMFCDCView()
{
	if(m_hMetaFile){
		::DeleteMetaFile(m_hMetaFile);
	}	
}

BOOL CMFCDCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView drawing

void CMFCDCView::OnDraw(CDC* pDC)
{
	CMFCDCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView printing

BOOL CMFCDCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFCDCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFCDCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView diagnostics

#ifdef _DEBUG
void CMFCDCView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCDCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCDCDoc* CMFCDCView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCDCDoc)));
	return (CMFCDCDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCDCView message handlers

void CMFCDCView::OnDcCdc() 
{
	// TODO: Add your command handler code here
	CDC dc;
	dc.CreateDC("DISPLAY",NULL,NULL,NULL);
	dc.TextOut(200,200,"hello cdc");
	dc.DeleteDC();
}

void CMFCDCView::OnDcWindowdc() 
{
	// TODO: Add your command handler code here
	CWindowDC dc(AfxGetMainWnd());	//自动调用父类创建dc函数
	dc.TextOut(100,100,"hello CWindowDC");
	//不用释放  父类析构时释放
}

void CMFCDCView::OnDcClientdc() 
{
	// TODO: Add your command handler code here
	CClientDC dc(this);
	dc.TextOut(100,100,"hello CClientDC");
}

void CMFCDCView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	dc.TextOut(100,100,"hello CPaintDC");
	if(m_hMetaFile){
		dc.PlayMetaFile(m_hMetaFile);
	}
	// Do not call CView::OnPaint() for painting messages
}

void CMFCDCView::OnDcCmetafile() 
{
	// TODO: Add your command handler code here
	//1 创建
	CMetaFileDC dcMeta;
	dcMeta.Create();
	//绘制
	dcMeta.TextOut(200,200,"hello CMetaFileDC");
	dcMeta.MoveTo(300,300);
	dcMeta.LineTo(400,400);
	m_hMetaFile=dcMeta.Close();
	CClientDC dc(this);
	dc.PlayMetaFile(m_hMetaFile);
	//可以使用多次
	//删除放在析构函数里面
}
