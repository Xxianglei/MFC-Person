#if !defined(AFX_MYDB_H__FE48C7EE_B60F_43D2_80D0_204B80BAD711__INCLUDED_)
#define AFX_MYDB_H__FE48C7EE_B60F_43D2_80D0_204B80BAD711__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Mydb.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Mydb recordset
#include "afxdb.h"
class Mydb : public CRecordset
{
public:
	Mydb(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(Mydb)

// Field/Param Data
	//{{AFX_FIELD(Mydb, CRecordset)
	int		m_id;
	CString	m_column1;
	CString	m_column2;
	CString	m_column3;
	CString	m_column4;
	CString	m_column5;
	CString	m_column6;
	CString	m_column7;
	CString p1;
    CRecordset::m_nParams;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Mydb)
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

#endif // !defined(AFX_MYDB_H__FE48C7EE_B60F_43D2_80D0_204B80BAD711__INCLUDED_)
