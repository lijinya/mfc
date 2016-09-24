// MFCSingleDocumentView.h : interface of the CMFCSingleDocumentView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCSINGLEDOCUMENTVIEW_H__ACF0F934_A2A3_49D0_9C80_78DDEDB0FE2C__INCLUDED_)
#define AFX_MFCSINGLEDOCUMENTVIEW_H__ACF0F934_A2A3_49D0_9C80_78DDEDB0FE2C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCSingleDocumentView : public CView
{
protected: // create from serialization only
	CMFCSingleDocumentView();
	DECLARE_DYNCREATE(CMFCSingleDocumentView)

// Attributes
public:
	CMFCSingleDocumentDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCSingleDocumentView)
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
	virtual ~CMFCSingleDocumentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCSingleDocumentView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCSingleDocumentView.cpp
inline CMFCSingleDocumentDoc* CMFCSingleDocumentView::GetDocument()
   { return (CMFCSingleDocumentDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCSINGLEDOCUMENTVIEW_H__ACF0F934_A2A3_49D0_9C80_78DDEDB0FE2C__INCLUDED_)
