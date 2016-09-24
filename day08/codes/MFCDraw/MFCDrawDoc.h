// MFCDrawDoc.h : interface of the CMFCDrawDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCDRAWDOC_H__5824F379_2B4C_48D4_A57F_AE524E50951F__INCLUDED_)
#define AFX_MFCDRAWDOC_H__5824F379_2B4C_48D4_A57F_AE524E50951F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCDrawDoc : public CDocument
{
protected: // create from serialization only
	CMFCDrawDoc();
	DECLARE_DYNCREATE(CMFCDrawDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCDrawDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCDrawDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCDrawDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDRAWDOC_H__5824F379_2B4C_48D4_A57F_AE524E50951F__INCLUDED_)
