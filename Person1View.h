// Person1View.h : interface of the CPerson1View class
//
/////////////////////////////////////////////////////////////////////////////
//{{AFX_INCLUDES()
#include "msflexgrid.h"
//}}AFX_INCLUDES

#if !defined(AFX_PERSON1VIEW_H__BDDB4EBE_F572_4162_BEE9_8E59187A751B__INCLUDED_)
#define AFX_PERSON1VIEW_H__BDDB4EBE_F572_4162_BEE9_8E59187A751B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Mydb.h"
#include "Mydb3.h"
class CPerson1View : public CFormView
{
	CDatabase mydatabase;
//	CDatabase mydatabase3;
	Mydb mySet;
	Mydb3 mySet3;
	
protected: // create from serialization only
	CPerson1View();
	DECLARE_DYNCREATE(CPerson1View)

public:
	//{{AFX_DATA(CPerson1View)
	enum { IDD = IDD_PERSON1_FORM };
	CMSFlexGrid	m_fg;
	//}}AFX_DATA

// Attributes
public:
	CPerson1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPerson1View)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPerson1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPerson1View)
	afx_msg void OnButton8();
	afx_msg void OnButton9();
	afx_msg void OnButton10();
	afx_msg void OnButton11();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	afx_msg void OnButton1();
	afx_msg void OnButton12();
	afx_msg void OnButton13();
	afx_msg void OnButton14();
	afx_msg void OnButton15();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Person1View.cpp
inline CPerson1Doc* CPerson1View::GetDocument()
   { return (CPerson1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PERSON1VIEW_H__BDDB4EBE_F572_4162_BEE9_8E59187A751B__INCLUDED_)
