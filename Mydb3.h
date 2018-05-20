#if !defined(AFX_MYDB3_H__C784BD00_68A9_4520_8CB9_5F741803328F__INCLUDED_)
#define AFX_MYDB3_H__C784BD00_68A9_4520_8CB9_5F741803328F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Mydb3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Mydb3 recordset
#include "afxdb.h"
class Mydb3 : public CRecordset
{
public:
	Mydb3(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Mydb3)

// Field/Param Data
	//{{AFX_FIELD(Mydb3, CRecordset)
	int		m_id;
	CString	m_column1;
	CString	m_column2;
	CString p2;
	CString p3;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Mydb3)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYDB3_H__C784BD00_68A9_4520_8CB9_5F741803328F__INCLUDED_)
