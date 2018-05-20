// Mydb.cpp : implementation file
//

#include "stdafx.h"
#include "Person1.h"
#include "Mydb.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Mydb

IMPLEMENT_DYNAMIC(Mydb, CRecordset)

Mydb::Mydb(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(Mydb)

	m_id = 0;
	m_column1 = _T("");
	m_column2 = _T("");
	m_column3 = _T("");
	m_column4 = _T("");
	m_column5 = _T("");
	m_column6 = _T("");
	m_column7 = _T("");
	m_nFields = 8;
	p1= _T("");
    m_nParams =1;
		//}}AFX_FIELD_INIT

	m_nDefaultType = snapshot;
}


CString Mydb::GetDefaultConnect()
{
	return _T("ODBC;DSN=p1");
}

CString Mydb::GetDefaultSQL()
{
	return _T("[details]");
}

void Mydb::DoFieldExchange(CFieldExchange* pFX)
{

	//{{AFX_FIELD_MAP(Mydb)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Int(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[姓名]"), m_column1);
	RFX_Text(pFX, _T("[性别]"), m_column2);
	RFX_Text(pFX, _T("[出生日期]"), m_column3);
	RFX_Text(pFX, _T("[电话号码]"), m_column4);
	RFX_Text(pFX, _T("[身高]"), m_column5);
	RFX_Text(pFX, _T("[体重]"), m_column6);
	RFX_Text(pFX, _T("[技能]"), m_column7);
   	pFX->SetFieldType(CFieldExchange::param);
	RFX_Text(pFX, _T("[姓名]"), p1);
	//}}AFX_FIELD_MAP

}

/////////////////////////////////////////////////////////////////////////////
// Mydb diagnostics

#ifdef _DEBUG
void Mydb::AssertValid() const
{
	CRecordset::AssertValid();
}

void Mydb::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
