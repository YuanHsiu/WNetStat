// wnetstatDlg.h : header file
//

#if !defined(AFX_WNETSTATDLG_H__A00AFA6F_92E0_4F4C_83BB_A737BC1F23CE__INCLUDED_)
#define AFX_WNETSTATDLG_H__A00AFA6F_92E0_4F4C_83BB_A737BC1F23CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#include <fstream.h>


/////////////////////////////////////////////////////////////////////////////
// CWnetstatDlg dialog

class CWnetstatDlg : public CDialog
{
// Construction
public:
	CWnetstatDlg(CWnd* pParent = NULL);	// standard constructor
	~CWnetstatDlg()
	{
		//log.flush();
		//log.close();

		if(monitor_timer_id)
		{
			KillTimer(monitor_timer_id);
		}
	}
	void resolveAddress(unsigned long addr, char *buf, unsigned long bufSize, unsigned char isSrcAddress);
	void resolvePort(unsigned short port, char *buf, unsigned long bufSize, const char *proto);
	void check();
	BOOL SendMAPIEmail(char *subject, char *messagetext, char *to, char *from);
	void LoadSettings();

	CString log_str;
	CString protocolFilter;
	CString stateFilter;
	CString portFilter;
	CString ipFilter;
	UINT monitor_timer_id;
	DWORD numEntries;
	//ofstream log;

// Dialog Data
	//{{AFX_DATA(CWnetstatDlg)
	enum { IDD = IDD_WNETSTAT_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWnetstatDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWnetstatDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonCheckall();
	afx_msg void OnSelchangeFilterComboFilter();
	afx_msg void OnSelchangeProtocolComboFilter();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnCheckMonitor();
	afx_msg void OnButtonClear();
	afx_msg void OnButtonSave();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WNETSTATDLG_H__A00AFA6F_92E0_4F4C_83BB_A737BC1F23CE__INCLUDED_)
