// MFCDCView.h : interface of the CMFCDCView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCDCVIEW_H__E970C65B_F2D7_4322_BB3A_ACE0DE6DF254__INCLUDED_)
#define AFX_MFCDCVIEW_H__E970C65B_F2D7_4322_BB3A_ACE0DE6DF254__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCDCView : public CView
{
protected: // create from serialization only
	CMFCDCView();
	DECLARE_DYNCREATE(CMFCDCView)

// Attributes
public:
	CMFCDCDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDCView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	HMETAFILE m_hMetaFile;
	virtual ~CMFCDCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCDCView)
	afx_msg void OnDcCdc();
	afx_msg void OnDcWindowdc();
	afx_msg void OnDcClientdc();
	afx_msg void OnPaint();
	afx_msg void OnDcCmetafile();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCDCView.cpp
inline CMFCDCDoc* CMFCDCView::GetDocument()
   { return (CMFCDCDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDCVIEW_H__E970C65B_F2D7_4322_BB3A_ACE0DE6DF254__INCLUDED_)
