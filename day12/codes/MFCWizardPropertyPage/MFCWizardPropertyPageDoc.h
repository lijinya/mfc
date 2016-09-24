// MFCWizardPropertyPageDoc.h : interface of the CMFCWizardPropertyPageDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCWIZARDPROPERTYPAGEDOC_H__A9B64967_FD88_48B3_959C_7AFD522D8C87__INCLUDED_)
#define AFX_MFCWIZARDPROPERTYPAGEDOC_H__A9B64967_FD88_48B3_959C_7AFD522D8C87__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCWizardPropertyPageDoc : public CDocument
{
protected: // create from serialization only
	CMFCWizardPropertyPageDoc();
	DECLARE_DYNCREATE(CMFCWizardPropertyPageDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCWizardPropertyPageDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCWizardPropertyPageDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCWizardPropertyPageDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCWIZARDPROPERTYPAGEDOC_H__A9B64967_FD88_48B3_959C_7AFD522D8C87__INCLUDED_)
