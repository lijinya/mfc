// MFCBaseCtrlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCBaseCtrl.h"
#include "MFCBaseCtrlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCBaseCtrlDlg dialog

CMFCBaseCtrlDlg::CMFCBaseCtrlDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCBaseCtrlDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMFCBaseCtrlDlg)
	m_strFilePath = _T("");
	m_strFilenames = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCBaseCtrlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMFCBaseCtrlDlg)
	DDX_Control(pDX, IDC_HOTKEY_SETUP, m_wndHotKey);
	DDX_Control(pDX, IDC_CHECK_REPLAY, m_wndReplay);
	DDX_Control(pDX, IDC_COMBO_PLAYCOUNT, m_wndPlayCount);
	DDX_Control(pDX, IDC_LIST_FILENAMES, m_wndFilenames);
	DDX_Control(pDX, IDC_ANIMATE, m_wndAnimate);
	DDX_Text(pDX, IDC_FILEPATH, m_strFilePath);
	DDX_LBString(pDX, IDC_LIST_FILENAMES, m_strFilenames);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMFCBaseCtrlDlg, CDialog)
	//{{AFX_MSG_MAP(CMFCBaseCtrlDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_FILEOPEN, OnFileopen)
	ON_LBN_DBLCLK(IDC_LIST_FILENAMES, OnDblclkListFilenames)
	ON_BN_CLICKED(IDC_CHECK_REPLAY, OnCheckReplay)
	ON_BN_CLICKED(IDC_RADIO_PLAY, OnRadioPlay)
	ON_BN_CLICKED(IDC_RADIO_PAUSE, OnRadioPause)
	ON_BN_CLICKED(IDC_BUTTON_SETUP, OnButtonSetup)
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCBaseCtrlDlg message handlers

BOOL CMFCBaseCtrlDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	m_wndPlayCount.EnableWindow(FALSE);
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCBaseCtrlDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCBaseCtrlDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCBaseCtrlDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMFCBaseCtrlDlg::OnFileopen() 
{
	// TODO: Add your control notification handler code here
	//1.弹出文件打开对话框.使用户选择视频文件。
	CHAR  szFilter[]="视频文件(*.avi)|*.avi|所有文件(*.*)|*.*||";
	CFileDialog dlg(TRUE,NULL,NULL,OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT
		,szFilter,NULL);	//TRUE 打开文件对话框   FALSE 另存为文件对话框.
	
	//点击打开 返IDOK  
	if(dlg.DoModal()!=IDOK)
		return;
	//2.如果用户选择并确认视频文件，在编辑框控件中显示播放动画。
	m_strFilePath=dlg.GetPathName();
	
	//3 在动画播放控件中显示文件名称。
//	m_wndAnimate.Open(m_strFilePath);
//	m_wndAnimate.Play(0,-1,1);		//-1 无限次播放
	OnPlayAnimate();
	//4 在文件列表中显示文件名称。
	CString strName=dlg.GetFileName();
	int nItem=0;
	if(LB_ERR==m_wndFilenames.FindString(-1,strName)){
		nItem=m_wndFilenames.AddString(strName);
		CString *pStr=new CString;
		*pStr=m_strFilePath;
		m_wndFilenames.SetItemData(nItem,(DWORD)pStr);
//		delete pStr;
//		pStr=NULL;
	}
	UpdateData(FALSE);
}

void CMFCBaseCtrlDlg::OnDblclkListFilenames() 
{
	// TODO: Add your control notification handler code here
	int nSel=m_wndFilenames.GetCurSel();	//返回光标选择项的索引.
	CString *pPath=(CString*)m_wndFilenames.GetItemData(nSel);
	m_strFilePath=*pPath;		//赋值
//	AfxMessageBox(*pPath);
//	m_wndAnimate.Open((LPCTSTR)pPath);
//	m_wndAnimate.Play(0,-1,1);		//-1 无限次播放
	OnPlayAnimate();
	UpdateData(FALSE);		//显示在编辑框上。
//	delete pPath;		//貌似有问题 delete
//	pPath=NULL;
}

void CMFCBaseCtrlDlg::OnPlayAnimate()
{
	int nRepeat=0;
	if(!m_wndReplay.GetCheck()){
		nRepeat=1;
	}else{
		int nSel=m_wndPlayCount.GetCurSel();
		switch(nSel){
		case 0:
			nRepeat=-1;
		case 1:
			nRepeat=1;
		case 2:
			nRepeat=2;
		case 3:
			nRepeat=3;
		case 4:
			nRepeat=4;
		case 5:
			nRepeat=5;
		case 6:
			nRepeat=6;	
		}
	}
	m_wndAnimate.Open(m_strFilePath);
	m_wndAnimate.Play(0,-1,nRepeat);		//-1 无限次播放
//	UpdateData(FALSE);
}

void CMFCBaseCtrlDlg::OnCheckReplay() 
{
	// TODO: Add your control notification handler code here
	if(m_wndReplay.GetCheck()){
		m_wndPlayCount.EnableWindow(TRUE);
	}else{
		m_wndPlayCount.EnableWindow(FALSE);
	}
}

void CMFCBaseCtrlDlg::OnRadioPlay() 
{
	// TODO: Add your control notification handler code here
	OnPlayAnimate();
}

void CMFCBaseCtrlDlg::OnRadioPause() 
{
	// TODO: Add your control notification handler code here
	m_wndAnimate.Stop();
}

void CMFCBaseCtrlDlg::OnButtonSetup() 
{
	// TODO: Add your control notification handler code here
	DWORD nHotKey=m_wndHotKey.GetHotKey();
	SendMessage(WM_SETHOTKEY,nHotKey);		//通过热键将其设置为顶层窗口
}

void CMFCBaseCtrlDlg::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CDialog::PostNcDestroy();
}

void CMFCBaseCtrlDlg::CalcWindowRect(LPRECT lpClientRect, UINT nAdjustType) 
{
	// TODO: Add your specialized code here and/or call the base class
	//释放堆内存

	CDialog::CalcWindowRect(lpClientRect, nAdjustType);
}

void CMFCBaseCtrlDlg::OnClose() 
{
	// TODO: Add your message handler code here and/or call default
	for(int i=0;i<m_wndFilenames.GetCount();++i){
		CString *pPath=(CString*)m_wndFilenames.GetItemData(i);
		delete pPath;
	}
	CDialog::OnClose();
}
