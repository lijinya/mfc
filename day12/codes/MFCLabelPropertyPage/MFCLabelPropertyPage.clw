; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPageWidth
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCLabelPropertyPage.h"
LastPage=0

ClassCount=8
Class1=CMFCLabelPropertyPageApp
Class2=CMFCLabelPropertyPageDoc
Class3=CMFCLabelPropertyPageView
Class4=CMainFrame

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Resource3=IDD_PROPPAGE_LABEL_COLOR
Class6=CPageColor
Class7=CPageWidth
Class8=CLabelSheet
Resource4=IDD_PROPPAGE_LABEL_WIDTH

[CLS:CMFCLabelPropertyPageApp]
Type=0
HeaderFile=MFCLabelPropertyPage.h
ImplementationFile=MFCLabelPropertyPage.cpp
Filter=N

[CLS:CMFCLabelPropertyPageDoc]
Type=0
HeaderFile=MFCLabelPropertyPageDoc.h
ImplementationFile=MFCLabelPropertyPageDoc.cpp
Filter=N

[CLS:CMFCLabelPropertyPageView]
Type=0
HeaderFile=MFCLabelPropertyPageView.h
ImplementationFile=MFCLabelPropertyPageView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=IDC_COLOR


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=MFCLabelPropertyPage.cpp
ImplementationFile=MFCLabelPropertyPage.cpp
Filter=D

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
Command16=ID_LABEL_PROP
Command17=ID_APP_ABOUT
CommandCount=17

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

[DLG:IDD_PROPPAGE_LABEL_COLOR]
Type=1
Class=CPageColor
ControlCount=1
Control1=IDC_COLOR,button,1342243584

[DLG:IDD_PROPPAGE_LABEL_WIDTH]
Type=1
Class=CPageWidth
ControlCount=1
Control1=IDC_LINE_WIDTH,edit,1350631552

[CLS:CPageColor]
Type=0
HeaderFile=PageColor.h
ImplementationFile=PageColor.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CPageColor
VirtualFilter=idWC

[CLS:CPageWidth]
Type=0
HeaderFile=PageWidth.h
ImplementationFile=PageWidth.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=IDC_LINE_WIDTH
VirtualFilter=idWC

[CLS:CLabelSheet]
Type=0
HeaderFile=LabelSheet.h
ImplementationFile=LabelSheet.cpp
BaseClass=CPropertySheet
Filter=W
LastObject=CLabelSheet

