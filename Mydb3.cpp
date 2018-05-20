// Mydb3.cpp : implementation file
//

#include "stdafx.h"
#include "Person1.h"
#include "Mydb3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Mydb3

IMPLEMENT_DYNAMIC(Mydb3, CRecordset)

Mydb3::Mydb3(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(Mydb3)
	m_id = 0;
	m_column1 = _T("");
	m_column2 = _T("");
	p2= _T("");
	p3= _T("");
    m_nParams =1;
	m_nFields = 5;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString Mydb3::GetDefaultConnect()
{
	return _T("ODBC;DSN=p1");
}

CString Mydb3::GetDefaultSQL()
{
	return _T("[people]");
}

void Mydb3::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(Mydb3)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Int(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[姓名]"), m_column1);
	RFX_Text(pFX, _T("[岗位]"), m_column2);
	pFX->SetFieldType(CFieldExchange::param);
	RFX_Text(pFX, _T("[姓名]"), p2);
	pFX->SetFieldType(CFieldExchange::param);
	RFX_Text(pFX, _T("[岗位]"), p3);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// Mydb3 diagnostics

#ifdef _DEBUG
void Mydb3::AssertValid() const
{
	CRecordset::AssertValid();
}

void Mydb3::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
