#if !defined(AFX_MYFORMVIEW_H__1C388CC1_6A7C_4DCC_8F8A_68437FCB7F02__INCLUDED_)
#define AFX_MYFORMVIEW_H__1C388CC1_6A7C_4DCC_8F8A_68437FCB7F02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// MyFormVIew.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CMyFormVIew form view

#ifndef __AFXEXT_H__
#include <afxext.h>
#endif

class CMyFormView : public CFormView
{
protected:
	CMyFormView();           // protected constructor used by dynamic creation
	DECLARE_DYNCREATE(CMyFormView)

// Form Data
public:
	//{{AFX_DATA(CMyFormVIew)
	enum { IDD = IDD_FRAMEVIEW };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyFormVIew)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CMyFormView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
	//{{AFX_MSG(CMyFormVIew)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYFORMVIEW_H__1C388CC1_6A7C_4DCC_8F8A_68437FCB7F02__INCLUDED_)
