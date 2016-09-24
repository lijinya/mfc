// MFCMultipleDocumentDoc.h : interface of the CMFCMultipleDocumentDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCMULTIPLEDOCUMENTDOC_H__6E042C0D_7C1D_4F48_AE62_3F162D01F462__INCLUDED_)
#define AFX_MFCMULTIPLEDOCUMENTDOC_H__6E042C0D_7C1D_4F48_AE62_3F162D01F462__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCMultipleDocumentDoc : public CDocument
{
protected: // create from serialization only
	CMFCMultipleDocumentDoc();
	DECLARE_DYNCREATE(CMFCMultipleDocumentDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCMultipleDocumentDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCMultipleDocumentDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCMultipleDocumentDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCMULTIPLEDOCUMENTDOC_H__6E042C0D_7C1D_4F48_AE62_3F162D01F462__INCLUDED_)
