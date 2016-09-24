// MFCLabelPropertyPageView.h : interface of the CMFCLabelPropertyPageView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCLABELPROPERTYPAGEVIEW_H__CA2B4D0E_0201_4D02_B274_E43FFC4FDBAD__INCLUDED_)
#define AFX_MFCLABELPROPERTYPAGEVIEW_H__CA2B4D0E_0201_4D02_B274_E43FFC4FDBAD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "MFCLabelPropertyPageDoc.h"

class CMFCLabelPropertyPageView : public CView
{
protected: // create from serialization only
	CMFCLabelPropertyPageView();
	DECLARE_DYNCREATE(CMFCLabelPropertyPageView)

// Attributes
public:
	CMFCLabelPropertyPageDoc* GetDocument();
	UINT m_nLineWidth;
	COLORREF m_LineColor;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCLabelPropertyPageView)
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
	virtual ~CMFCLabelPropertyPageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCLabelPropertyPageView)
	afx_msg void OnLabelProp();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCLabelPropertyPageView.cpp
inline CMFCLabelPropertyPageDoc* CMFCLabelPropertyPageView::GetDocument()
   { return (CMFCLabelPropertyPageDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCLABELPROPERTYPAGEVIEW_H__CA2B4D0E_0201_4D02_B274_E43FFC4FDBAD__INCLUDED_)
