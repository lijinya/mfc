// MFCDialogDoc.h : interface of the CMFCDialogDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCDIALOGDOC_H__5E63B332_8CBB_4FAC_ABB2_D071B36C9EB4__INCLUDED_)
#define AFX_MFCDIALOGDOC_H__5E63B332_8CBB_4FAC_ABB2_D071B36C9EB4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCDialogDoc : public CDocument
{
protected: // create from serialization only
	CMFCDialogDoc();
	DECLARE_DYNCREATE(CMFCDialogDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDialogDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCDialogDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCDialogDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDIALOGDOC_H__5E63B332_8CBB_4FAC_ABB2_D071B36C9EB4__INCLUDED_)
