// Person1.h : main header file for the PERSON1 application
//

#if !defined(AFX_PERSON1_H__16AE75A1_13A6_48CD_ACA7_CF12F8847DA1__INCLUDED_)
#define AFX_PERSON1_H__16AE75A1_13A6_48CD_ACA7_CF12F8847DA1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPerson1App:
// See Person1.cpp for the implementation of this class
//

class CPerson1App : public CWinApp
{
public:
	CPerson1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPerson1App)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPerson1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PERSON1_H__16AE75A1_13A6_48CD_ACA7_CF12F8847DA1__INCLUDED_)
