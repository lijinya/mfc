// MFCTreeDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MFCTree.h"
#include "MFCTreeDlg.h"

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
// CMFCTreeDlg dialog

CMFCTreeDlg::CMFCTreeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMFCTreeDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMFCTreeDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCTreeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMFCTreeDlg)
	DDX_Control(pDX, IDC_COMBO_STYLE, m_wndStyle);
	DDX_Control(pDX, IDC_LIST, m_wndList);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMFCTreeDlg, CDialog)
	//{{AFX_MSG_MAP(CMFCTreeDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMBO_STYLE, OnSelchangeComboStyle)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST, OnDblclkList)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCTreeDlg message handlers

BOOL CMFCTreeDlg::OnInitDialog()
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
	m_wndStyle.SetCurSel(3);
	InitListCtrl();
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCTreeDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMFCTreeDlg::OnPaint() 
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
HCURSOR CMFCTreeDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMFCTreeDlg::InitListCtrl()
{
	m_ilNormal.Create(IDB_NORMAL,18,2,RGB(0,0,0));
	m_ilSmall.Create(IDB_SMALL,18,2,RGB(0,0,0));
	m_wndList.SetImageList(&m_ilSmall,LVSIL_SMALL);
	m_wndList.SetImageList(&m_ilNormal,LVSIL_NORMAL);
	//添加控件的列
	m_wndList.InsertColumn(0,"名称",LVCFMT_LEFT,100);
	m_wndList.InsertColumn(1,"大小",LVCFMT_LEFT,100);
	m_wndList.InsertColumn(2,"类型",LVCFMT_LEFT,100);
	m_wndList.InsertColumn(3,"修改日期",LVCFMT_LEFT,100);
	m_wndList.InsertItem(0,"文件1",0);
	m_wndList.SetItemText(0,1,"453字节");
	m_wndList.SetItemText(0,3,"2014-6-17");

	//设置控件背景图片
	m_wndList.SetBkImage("f:\\images.bmp");
	//设置透明背景
	m_wndList.SetTextBkColor(CLR_NONE);

	ShowData("c:");
}

void CMFCTreeDlg::ShowData(CString strPath)
{
	//清空数据
	m_wndList.DeleteAllItems();
	m_strListPath.RemoveAll();
	CFileFind find;
	int nItem=0;
	BOOL bRet=find.FindFile(strPath+"\\*.*");
	CTime time;
	CString strTime;
	while(bRet){
		bRet=find.FindNextFile();
		CString strName=find.GetFileName();
		find.GetLastWriteTime(time);
		strTime=time.Format("%Y-%m-%d %H:%M:%S");
		if(find.IsDirectory()){
			m_wndList.InsertItem(nItem,strName,0);
			m_wndList.SetItemText(nItem,2,"文件夹");
			
		}else{
			m_wndList.InsertItem(nItem,strName,1);
			DWORD nLen=find.GetLength();
			CString strLen;
			strLen.Format("%dKB",nLen);
			m_wndList.SetItemText(nItem,1,strLen);
		}
		m_wndList.SetItemText(nItem,3,strTime);
		//保存文件路径
		//
	//	CString *pPath=new CString;
		//设置附加数据
	//	*pPath=find.GetFilePath();
//		m_wndList.SetItemData(nItem,(DWORD)pPath);

		//添加数据项
		m_strListPath.AddTail(find.GetFilePath());
		++nItem;
	}
	find.Close();
}

void CMFCTreeDlg::OnSelchangeComboStyle() 
{
	// TODO: Add your control notification handler code here
	int nSel=m_wndStyle.GetCurSel();
	//修改列表控件的显示方式.
	//ModifyStyle 参数1 要移除的,参数二 要添加的 参数三 默认值
	switch(nSel){
		case 0:
			//图标
			m_wndList.ModifyStyle(LVS_SMALLICON|LVS_LIST|LVS_REPORT,
				LVS_ICON);
			break;
		case 1:
			//小图标
			m_wndList.ModifyStyle(LVS_ICON|LVS_LIST|LVS_REPORT,
			LVS_SMALLICON);
			break;
		case 2:
			//列表
			m_wndList.ModifyStyle(LVS_ICON|LVS_SMALLICON|LVS_REPORT,
			LVS_LIST);
			break;
		case 3:
			//报表
			m_wndList.ModifyStyle(LVS_ICON|LVS_SMALLICON|LVS_LIST,
				LVS_REPORT
			);
			break;
	}
}

void CMFCTreeDlg::OnDblclkList(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	//NMITEMACTIVE
	LPNMITEMACTIVATE pActiveItem=(LPNMITEMACTIVATE)pNMHDR;
	int nItem=pActiveItem->iItem;
	if(-1==nItem){
		return;
	}
//	CString *pPath=(CString*)m_wndList.GetItemData(nItem);
//	ShowData(*pPath);

	//FindIndex 转换索引成值位置
	CString strPath=m_strListPath.GetAt(m_strListPath.FindIndex(nItem));
	ShowData(strPath);
	*pResult = 0;
}
