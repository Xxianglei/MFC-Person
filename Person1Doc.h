// Person1Doc.h : interface of the CPerson1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON1DOC_H__A46D9D43_886F_416F_B561_47682E814085__INCLUDED_)
#define AFX_PERSON1DOC_H__A46D9D43_886F_416F_B561_47682E814085__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPerson1Doc : public CDocument
{
protected: // create from serialization only
	CPerson1Doc();
	DECLARE_DYNCREATE(CPerson1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPerson1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPerson1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPerson1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PERSON1DOC_H__A46D9D43_886F_416F_B561_47682E814085__INCLUDED_)
