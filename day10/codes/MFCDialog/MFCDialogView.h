// MFCDialogView.h : interface of the CMFCDialogView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCDIALOGVIEW_H__4E579279_9E41_47C0_93F6_4024512D54C6__INCLUDED_)
#define AFX_MFCDIALOGVIEW_H__4E579279_9E41_47C0_93F6_4024512D54C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCDialogView : public CView
{
protected: // create from serialization only
	CMFCDialogView();
	DECLARE_DYNCREATE(CMFCDialogView)

// Attributes
public:
	CMFCDialogDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDialogView)
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
	virtual ~CMFCDialogView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCDialogView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFCDialogView.cpp
inline CMFCDialogDoc* CMFCDialogView::GetDocument()
   { return (CMFCDialogDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDIALOGVIEW_H__4E579279_9E41_47C0_93F6_4024512D54C6__INCLUDED_)
