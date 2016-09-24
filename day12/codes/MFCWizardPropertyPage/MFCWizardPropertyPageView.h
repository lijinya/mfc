// MFCWizardPropertyPageView.h : interface of the CMFCWizardPropertyPageView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCWIZARDPROPERTYPAGEVIEW_H__DD31DFF3_110D_4D54_8435_7817850F914B__INCLUDED_)
#define AFX_MFCWIZARDPROPERTYPAGEVIEW_H__DD31DFF3_110D_4D54_8435_7817850F914B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCWizardPropertyPageView : public CView
{
protected: // create from serialization only
	CMFCWizardPropertyPageView();
	DECLARE_DYNCREATE(CMFCWizardPropertyPageView)

// Attributes
public:
	CMFCWizardPropertyPageDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCWizardPropertyPageView)
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
	CString m_strCity;
	virtual ~CMFCWizardPropertyPageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCWizardPropertyPageView)
	afx_msg void OnWizard();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CString m_strSalary;
	BOOL m_bFlag[4];
	int m_nCareer;
};

#ifndef _DEBUG  // debug version in MFCWizardPropertyPageView.cpp
inline CMFCWizardPropertyPageDoc* CMFCWizardPropertyPageView::GetDocument()
   { return (CMFCWizardPropertyPageDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCWIZARDPROPERTYPAGEVIEW_H__DD31DFF3_110D_4D54_8435_7817850F914B__INCLUDED_)
