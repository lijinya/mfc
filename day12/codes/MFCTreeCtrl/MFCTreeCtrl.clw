; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMFCTreeCtrlDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCTreeCtrl.h"

ClassCount=3
Class1=CMFCTreeCtrlApp
Class2=CMFCTreeCtrlDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MFCTREECTRL_DIALOG

[CLS:CMFCTreeCtrlApp]
Type=0
HeaderFile=MFCTreeCtrl.h
ImplementationFile=MFCTreeCtrl.cpp
Filter=N

[CLS:CMFCTreeCtrlDlg]
Type=0
HeaderFile=MFCTreeCtrlDlg.h
ImplementationFile=MFCTreeCtrlDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_TREE1

[CLS:CAboutDlg]
Type=0
HeaderFile=MFCTreeCtrlDlg.h
ImplementationFile=MFCTreeCtrlDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MFCTREECTRL_DIALOG]
Type=1
Class=CMFCTreeCtrlDlg
ControlCount=1
Control1=IDC_TREE1,SysTreeView32,1350631431

