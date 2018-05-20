// Person1Doc.cpp : implementation of the CPerson1Doc class
//

#include "stdafx.h"
#include "Person1.h"

#include "Person1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPerson1Doc

IMPLEMENT_DYNCREATE(CPerson1Doc, CDocument)

BEGIN_MESSAGE_MAP(CPerson1Doc, CDocument)
	//{{AFX_MSG_MAP(CPerson1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPerson1Doc construction/destruction

CPerson1Doc::CPerson1Doc()
{
	// TODO: add one-time construction code here

}

CPerson1Doc::~CPerson1Doc()
{
}

BOOL CPerson1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPerson1Doc serialization

void CPerson1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPerson1Doc diagnostics

#ifdef _DEBUG
void CPerson1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPerson1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPerson1Doc commands
