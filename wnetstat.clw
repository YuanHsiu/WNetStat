; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CWnetstatDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "wnetstat.h"

ClassCount=4
Class1=CWnetstatApp
Class2=CWnetstatDlg

ResourceCount=3
Resource2=IDR_MAINFRAME
Resource3=IDD_WNETSTAT_DIALOG

[CLS:CWnetstatApp]
Type=0
HeaderFile=wnetstat.h
ImplementationFile=wnetstat.cpp
Filter=N

[CLS:CWnetstatDlg]
Type=0
HeaderFile=wnetstatDlg.h
ImplementationFile=wnetstatDlg.cpp
Filter=W
BaseClass=CDialog
VirtualFilter=dWC



[DLG:IDD_WNETSTAT_DIALOG]
Type=1
Class=CWnetstatDlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDC_EDIT_STATS,edit,1353779204
Control3=IDC_BUTTON_CHECK,button,1342242816
Control4=IDC_CHECK_RESOLVE,button,1342242819
Control5=IDC_COMBO_FILTER,combobox,1344339971
Control6=IDC_STATIC,static,1342308352
Control7=IDC_COMBO_PROTOCOL,combobox,1344339971
Control8=IDC_STATIC,static,1342308352
Control9=IDC_CHECK_MONITOR,button,1342242819
Control10=IDC_BUTTON_CLEAR,button,1342242816
Control11=IDC_STATIC,static,1342308352
Control12=IDC_COMBO_PORTFILTER,combobox,1344339971
Control13=IDC_STATIC,static,1342308352
Control14=IDC_COMBO_IPFILTER,combobox,1344339971
Control15=IDC_CHECK_SENDEMAIL,button,1342242819
Control16=IDC_EDIT_EMAILADDRESS,edit,1350631552

