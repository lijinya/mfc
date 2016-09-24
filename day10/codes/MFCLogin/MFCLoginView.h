// MFCLoginView.h : interface of the CMFCLoginView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCLOGINVIEW_H__47DCDF29_B9C4_43DF_8A69_6C85CBA402BE__INCLUDED_)
#define AFX_MFCLOGINVIEW_H__47DCDF29_B9C4_43DF_8A69_6C85CBA402BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCLoginView : public CView
{
protected: // create from serialization only
	CMFCLoginView();
	DECLARE_DYNCREATE(CMFCLoginView)

// Attributes
public:
	CMFCLoginDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCLoginView)
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
	virtual ~CMFCLoginView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCLoginView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCLoginView.cpp
inline CMFCLoginDoc* CMFCLoginView::GetDocument()
   { return (CMFCLoginDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCLOGINVIEW_H__47DCDF29_B9C4_43DF_8A69_6C85CBA402BE__INCLUDED_)
