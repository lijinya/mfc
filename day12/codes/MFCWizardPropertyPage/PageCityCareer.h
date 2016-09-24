#if !defined(AFX_PAGECITYCAREER_H__DF5B4F9E_2A46_4BAE_98F5_9ACE1078D24C__INCLUDED_)
#define AFX_PAGECITYCAREER_H__DF5B4F9E_2A46_4BAE_98F5_9ACE1078D24C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// PageCityCareer.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CPageCityCareer dialog

class CPageCityCareer : public CPropertyPage
{
	DECLARE_DYNCREATE(CPageCityCareer)

// Construction
public:
	CPageCityCareer();
	~CPageCityCareer();

// Dialog Data
	//{{AFX_DATA(CPageCityCareer)
	enum { IDD = IDD_PROPPAGE_CITY_CAREER };
	CListBox	m_wndCity;
	CString	m_strCity;
	int		m_nCareer;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CPageCityCareer)
	public:
	virtual BOOL OnSetActive();
	virtual LRESULT OnWizardNext();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType = adjustBorder);
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CPageCityCareer)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PAGECITYCAREER_H__DF5B4F9E_2A46_4BAE_98F5_9ACE1078D24C__INCLUDED_)
