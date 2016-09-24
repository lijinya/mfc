; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDialogModaless
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCDialog.h"
LastPage=0

ClassCount=7
Class1=CMFCDialogApp
Class2=CMFCDialogDoc
Class3=CMFCDialogView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_DIALOG_MODAL
Class5=CAboutDlg
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class6=CModalDlg
Class7=CDialogModaless
Resource4=IDD_DIALOG_MODALESS

[CLS:CMFCDialogApp]
Type=0
HeaderFile=MFCDialog.h
ImplementationFile=MFCDialog.cpp
Filter=N

[CLS:CMFCDialogDoc]
Type=0
HeaderFile=MFCDialogDoc.h
ImplementationFile=MFCDialogDoc.cpp
Filter=N

[CLS:CMFCDialogView]
Type=0
HeaderFile=MFCDialogView.h
ImplementationFile=MFCDialogView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=MFCDialog.cpp
ImplementationFile=MFCDialog.cpp
Filter=D
LastObject=CAboutDlg
BaseClass=CDialog
VirtualFilter=dWC

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_APP_ABOUT
Command17=ID_DLG_MODAL
Command18=ID_DLG_MODALESS
CommandCount=18

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG_MODAL]
Type=1
Class=CModalDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[DLG:IDD_DIALOG_MODALESS]
Type=1
Class=CDialogModaless
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816

[CLS:CModalDlg]
Type=0
HeaderFile=ModalDlg.h
ImplementationFile=ModalDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CModalDlg

[CLS:CDialogModaless]
Type=0
HeaderFile=DialogModaless.h
ImplementationFile=DialogModaless.cpp
BaseClass=CDialog
Filter=D
LastObject=CDialogModaless
VirtualFilter=dWC

