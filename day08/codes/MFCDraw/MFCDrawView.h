// MFCDrawView.h : interface of the CMFCDrawView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCDRAWVIEW_H__1CF1C01C_B64E_4F1F_BF73_FCF75510D6CE__INCLUDED_)
#define AFX_MFCDRAWVIEW_H__1CF1C01C_B64E_4F1F_BF73_FCF75510D6CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCDrawView : public CView
{
protected: // create from serialization only
	CMFCDrawView();
	DECLARE_DYNCREATE(CMFCDrawView)

// Attributes
public:
	CMFCDrawDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDrawView)
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
	UINT m_nDrawType;
	CPoint m_ptEnd;
	CPoint m_ptBegin;
	virtual ~CMFCDrawView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCDrawView)
	afx_msg void OnDcCpen();
	afx_msg void OnDcGdibrush();
	afx_msg void OnDcGdifont();
	afx_msg void OnDcGdipen();
	afx_msg void OnGdiBmp();
	afx_msg void OnGdiRgn();
	afx_msg void OnGdiLine();
	afx_msg void OnGdiEllipse();
	afx_msg void OnGdiRect();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCDrawView.cpp
inline CMFCDrawDoc* CMFCDrawView::GetDocument()
   { return (CMFCDrawDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDRAWVIEW_H__1CF1C01C_B64E_4F1F_BF73_FCF75510D6CE__INCLUDED_)
