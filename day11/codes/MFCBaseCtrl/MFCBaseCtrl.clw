; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CComCtrlDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCBaseCtrl.h"

ClassCount=4
Class1=CMFCBaseCtrlApp
Class2=CMFCBaseCtrlDlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MFCBASECTRL_DIALOG
Class4=CComCtrlDlg
Resource4=IDD_DIALOG_COMMON_CTRL

[CLS:CMFCBaseCtrlApp]
Type=0
HeaderFile=MFCBaseCtrl.h
ImplementationFile=MFCBaseCtrl.cpp
Filter=N

[CLS:CMFCBaseCtrlDlg]
Type=0
HeaderFile=MFCBaseCtrlDlg.h
ImplementationFile=MFCBaseCtrlDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CMFCBaseCtrlDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=MFCBaseCtrlDlg.h
ImplementationFile=MFCBaseCtrlDlg.cpp
Filter=D
LastObject=IDC_BUTTON_ALL_TO_LEFT

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=6
Control1=IDC_LIST_LEFT,listbox,1352728835
Control2=IDC_BUTTON_TO_RIGHT,button,1342242816
Control3=IDC_BUTTON_ALL_TO_RIGHT,button,1342242816
Control4=IDC_BUTTON_TO_LEFT,button,1342242816
Control5=IDC_BUTTON_ALL_TO_LEFT,button,1342242816
Control6=IDC_LIST_RIGHT2,listbox,1352728835

[DLG:IDD_MFCBASECTRL_DIALOG]
Type=1
Class=CMFCBaseCtrlDlg
ControlCount=15
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,static,1342177283
Control3=IDC_STATIC,static,1342308352
Control4=IDC_FILEPATH,edit,1350631552
Control5=IDC_FILEOPEN,button,1342242816
Control6=IDC_ANIMATE,SysAnimate32,1350631426
Control7=IDC_STATIC,static,1342308352
Control8=IDC_LIST_FILENAMES,listbox,1352728835
Control9=IDC_CHECK_REPLAY,button,1342242819
Control10=IDC_COMBO_PLAYCOUNT,combobox,1344339970
Control11=IDC_RADIO_PLAY,button,1342177289
Control12=IDC_RADIO_PAUSE,button,1342177289
Control13=IDC_STATIC,static,1342177296
Control14=IDC_HOTKEY_SETUP,msctls_hotkey32,1350631424
Control15=IDC_BUTTON_SETUP,button,1342242816

[DLG:IDD_DIALOG_COMMON_CTRL]
Type=1
Class=CComCtrlDlg
ControlCount=2
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_SPIN1,msctls_updown32,1342177334

[CLS:CComCtrlDlg]
Type=0
HeaderFile=ComCtrlDlg.h
ImplementationFile=ComCtrlDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CComCtrlDlg

