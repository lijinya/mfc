// MFCLabelPropertyPageDoc.h : interface of the CMFCLabelPropertyPageDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCLABELPROPERTYPAGEDOC_H__9F5DE9E2_296B_4253_BAF8_D1C0504D33C3__INCLUDED_)
#define AFX_MFCLABELPROPERTYPAGEDOC_H__9F5DE9E2_296B_4253_BAF8_D1C0504D33C3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCLabelPropertyPageDoc : public CDocument
{
protected: // create from serialization only
	CMFCLabelPropertyPageDoc();
	DECLARE_DYNCREATE(CMFCLabelPropertyPageDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCLabelPropertyPageDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCLabelPropertyPageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCLabelPropertyPageDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCLABELPROPERTYPAGEDOC_H__9F5DE9E2_296B_4253_BAF8_D1C0504D33C3__INCLUDED_)
