// MFCLoginDoc.h : interface of the CMFCLoginDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCLOGINDOC_H__727BFA2A_B113_4926_B405_684B2EC9076B__INCLUDED_)
#define AFX_MFCLOGINDOC_H__727BFA2A_B113_4926_B405_684B2EC9076B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMFCLoginDoc : public CDocument
{
protected: // create from serialization only
	CMFCLoginDoc();
	DECLARE_DYNCREATE(CMFCLoginDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCLoginDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCLoginDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCLoginDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCLOGINDOC_H__727BFA2A_B113_4926_B405_684B2EC9076B__INCLUDED_)
