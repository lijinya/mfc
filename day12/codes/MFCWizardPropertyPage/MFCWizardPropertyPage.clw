; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPageSalary
LastTemplate=CPropertySheet
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFCWizardPropertyPage.h"
LastPage=0

ClassCount=9
Class1=CMFCWizardPropertyPageApp
Class2=CMFCWizardPropertyPageDoc
Class3=CMFCWizardPropertyPageView
Class4=CMainFrame

ResourceCount=5
Resource1=IDD_PROPPAGE_HOBBIES
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Resource3=IDD_PROPPAGE_CITY_CAREER
Resource4=IDD_ABOUTBOX
Class6=CPageCityCareer
Class7=CPageHobby
Class8=CPageSalary
Class9=CWizardSheet
Resource5=IDD_PROPPAGE_SALARY

[CLS:CMFCWizardPropertyPageApp]
Type=0
HeaderFile=MFCWizardPropertyPage.h
ImplementationFile=MFCWizardPropertyPage.cpp
Filter=N

[CLS:CMFCWizardPropertyPageDoc]
Type=0
HeaderFile=MFCWizardPropertyPageDoc.h
ImplementationFile=MFCWizardPropertyPageDoc.cpp
Filter=N

[CLS:CMFCWizardPropertyPageView]
Type=0
HeaderFile=MFCWizardPropertyPageView.h
ImplementationFile=MFCWizardPropertyPageView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CMFCWizardPropertyPageView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=MFCWizardPropertyPage.cpp
ImplementationFile=MFCWizardPropertyPage.cpp
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
Command16=IDC_WIZARD
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

[DLG:IDD_PROPPAGE_CITY_CAREER]
Type=1
Class=CPageCityCareer
ControlCount=6
Control1=IDC_RADIO_PROGRAMER,button,1342308361
Control2=IDC_RADIO_ATHLETE,button,1342177289
Control3=IDC_RADIO_OFFICIAL,button,1342177289
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,static,1342308352
Control6=IDC_LIST_CITY,listbox,1352728835

[DLG:IDD_PROPPAGE_HOBBIES]
Type=1
Class=CPageHobby
ControlCount=4
Control1=IDC_CHECK_PROGRAMMING,button,1342242819
Control2=IDC_CHECK_TRAVEL,button,1342242819
Control3=IDC_CHECK_MOUNTAIN,button,1342242819
Control4=IDC_CHECK_SWIM,button,1342242819

[DLG:IDD_PROPPAGE_SALARY]
Type=1
Class=CPageSalary
ControlCount=1
Control1=IDC_COMBO_SALARY,combobox,1344339970

[CLS:CPageCityCareer]
Type=0
HeaderFile=PageCityCareer.h
ImplementationFile=PageCityCareer.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=IDC_RADIO_OFFICIAL
VirtualFilter=idWC

[CLS:CPageHobby]
Type=0
HeaderFile=PageHobby.h
ImplementationFile=PageHobby.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CPageHobby
VirtualFilter=idWC

[CLS:CPageSalary]
Type=0
HeaderFile=PageSalary.h
ImplementationFile=PageSalary.cpp
BaseClass=CPropertyPage
Filter=D
LastObject=CPageSalary
VirtualFilter=idWC

[CLS:CWizardSheet]
Type=0
HeaderFile=WizardSheet.h
ImplementationFile=WizardSheet.cpp
BaseClass=CPropertySheet
Filter=W
LastObject=CWizardSheet

