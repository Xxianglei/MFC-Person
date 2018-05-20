; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=Mydb3
LastTemplate=CRecordset
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Person1.h"
LastPage=0

ClassCount=8
Class1=CPerson1App
Class2=CPerson1Doc
Class3=CPerson1View
Class4=CMainFrame

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Class5=CAboutDlg
Class6=Mydb
Class7=Mydb2
Class8=Mydb3
Resource3=IDD_PERSON1_FORM

[CLS:CPerson1App]
Type=0
HeaderFile=Person1.h
ImplementationFile=Person1.cpp
Filter=N
BaseClass=CWinApp
VirtualFilter=AC

[CLS:CPerson1Doc]
Type=0
HeaderFile=Person1Doc.h
ImplementationFile=Person1Doc.cpp
Filter=N

[CLS:CPerson1View]
Type=0
HeaderFile=Person1View.h
ImplementationFile=Person1View.cpp
Filter=D
BaseClass=CFormView
VirtualFilter=VWC
LastObject=CPerson1View


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=CMainFrame




[CLS:CAboutDlg]
Type=0
HeaderFile=Person1.cpp
ImplementationFile=Person1.cpp
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
Command16=ID_APP_ABOUT
CommandCount=16

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

[DLG:IDD_PERSON1_FORM]
Type=1
Class=CPerson1View
ControlCount=39
Control1=IDC_STATIC,static,1342308865
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_EDIT2,edit,1350631552
Control4=IDC_EDIT3,edit,1350631552
Control5=IDC_EDIT4,edit,1350631552
Control6=IDC_EDIT5,edit,1350631552
Control7=IDC_EDIT6,edit,1350631552
Control8=IDC_EDIT7,edit,1350631552
Control9=IDC_STATIC,static,1342308865
Control10=IDC_STATIC,static,1342308865
Control11=IDC_STATIC,static,1342308865
Control12=IDC_STATIC,static,1342308865
Control13=IDC_STATIC,static,1342308865
Control14=IDC_STATIC,static,1342308865
Control15=IDC_STATIC,static,1342308865
Control16=IDC_BUTTON2,button,1342242816
Control17=IDC_BUTTON3,button,1342242816
Control18=IDC_BUTTON4,button,1342242816
Control19=IDC_BUTTON5,button,1342242816
Control20=IDC_BUTTON6,button,1342242816
Control21=IDC_BUTTON7,button,1342242816
Control22=IDC_MSFLEXGRID1,{6262D3A0-531B-11CF-91F6-C2863C385E30},1342242816
Control23=IDC_BUTTON8,button,1342242816
Control24=IDC_BUTTON9,button,1342242816
Control25=IDC_BUTTON10,button,1342242816
Control26=IDC_BUTTON11,button,1342242816
Control27=IDC_STATIC,static,1342308865
Control28=IDC_EDIT8,edit,1350631552
Control29=IDC_BUTTON1,button,1342242816
Control30=IDC_STATIC,static,1342308865
Control31=IDC_EDIT9,edit,1350631552
Control32=IDC_BUTTON12,button,1342242816
Control33=IDC_BUTTON13,button,1342242816
Control34=IDC_BUTTON14,button,1342242816
Control35=IDC_BUTTON15,button,1342242816
Control36=IDC_STATIC,static,1342308865
Control37=IDC_STATIC,static,1342308865
Control38=IDC_STATIC,static,1342308352
Control39=IDC_STATIC,static,1342308352

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

[CLS:Mydb]
Type=0
HeaderFile=Mydb.h
ImplementationFile=Mydb.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:Mydb]
DB=1
DBType=ODBC
ColumnCount=8
Column1=[id], 5, 2
Column2=[姓名], 12, 20
Column3=[性别], 12, 10
Column4=[出生日期], 12, 100
Column5=[电话号码], 12, 100
Column6=[身高], 7, 4
Column7=[体重], 7, 4
Column8=[技能], 12, 100

[CLS:Mydb2]
Type=0
HeaderFile=Mydb2.h
ImplementationFile=Mydb2.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:Mydb2]
DB=1
DBType=ODBC
ColumnCount=0

[CLS:Mydb3]
Type=0
HeaderFile=Mydb3.h
ImplementationFile=Mydb3.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:Mydb3]
DB=1
DBType=ODBC
ColumnCount=2
Column1=[id], 5, 2
Column2=[求职意向], 12, 100

