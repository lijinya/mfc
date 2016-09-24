#if !defined(AFX_PAGEHOBBY_H__AD091D20_5633_4CC1_A30B_4D6DA7FB5AF4__INCLUDED_)
#define AFX_PAGEHOBBY_H__AD091D20_5633_4CC1_A30B_4D6DA7FB5AF4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageHobby.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageHobby dialog

class CPageHobby : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageHobby)

// Construction
public:
	CPageHobby();
	~CPageHobby();

// Dialog Data
	//{{AFX_DATA(CPageHobby)
	enum { IDD = IDD_PROPPAGE_HOBBIES };
	BOOL	m_bMountain;
	BOOL	m_bProgramming;
	BOOL	m_bSwim;
	BOOL	m_bTravel;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageHobby)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageHobby)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGEHOBBY_H__AD091D20_5633_4CC1_A30B_4D6DA7FB5AF4__INCLUDED_)
