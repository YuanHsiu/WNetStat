// wnetstat.h : main header file for the WNETSTAT application
//

#if !defined(AFX_WNETSTAT_H__F99DAF31_A66F_40BB_B4C2_AB3128E5AE22__INCLUDED_)
#define AFX_WNETSTAT_H__F99DAF31_A66F_40BB_B4C2_AB3128E5AE22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWnetstatApp:
// See wnetstat.cpp for the implementation of this class
//

class CWnetstatApp : public CWinApp
{
public:
	CWnetstatApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWnetstatApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWnetstatApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WNETSTAT_H__F99DAF31_A66F_40BB_B4C2_AB3128E5AE22__INCLUDED_)
