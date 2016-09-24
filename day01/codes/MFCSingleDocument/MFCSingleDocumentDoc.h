// MFCSingleDocumentDoc.h : interface of the CMFCSingleDocumentDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCSINGLEDOCUMENTDOC_H__D562D1E0_30C3_4321_82BE_E1CE2D5A1EF0__INCLUDED_)
#define AFX_MFCSINGLEDOCUMENTDOC_H__D562D1E0_30C3_4321_82BE_E1CE2D5A1EF0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCSingleDocumentDoc : public CDocument
{
protected: // create from serialization only
	CMFCSingleDocumentDoc();
	DECLARE_DYNCREATE(CMFCSingleDocumentDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCSingleDocumentDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCSingleDocumentDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCSingleDocumentDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCSINGLEDOCUMENTDOC_H__D562D1E0_30C3_4321_82BE_E1CE2D5A1EF0__INCLUDED_)
