// MFCMultipleDocumentView.h : interface of the CMFCMultipleDocumentView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCMULTIPLEDOCUMENTVIEW_H__0CA8AF39_53B6_4BD5_B374_C49EEF995F3A__INCLUDED_)
#define AFX_MFCMULTIPLEDOCUMENTVIEW_H__0CA8AF39_53B6_4BD5_B374_C49EEF995F3A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCMultipleDocumentView : public CView
{
protected: // create from serialization only
	CMFCMultipleDocumentView();
	DECLARE_DYNCREATE(CMFCMultipleDocumentView)

// Attributes
public:
	CMFCMultipleDocumentDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCMultipleDocumentView)
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
	virtual ~CMFCMultipleDocumentView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCMultipleDocumentView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCMultipleDocumentView.cpp
inline CMFCMultipleDocumentDoc* CMFCMultipleDocumentView::GetDocument()
   { return (CMFCMultipleDocumentDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCMULTIPLEDOCUMENTVIEW_H__0CA8AF39_53B6_4BD5_B374_C49EEF995F3A__INCLUDED_)
