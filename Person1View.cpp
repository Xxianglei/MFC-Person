// Person1View.cpp : implementation of the CPerson1View class
//

#include "stdafx.h"
#include "Person1.h"

#include "Person1Doc.h"
#include "Person1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPerson1View

IMPLEMENT_DYNCREATE(CPerson1View, CFormView)

BEGIN_MESSAGE_MAP(CPerson1View, CFormView)
	//{{AFX_MSG_MAP(CPerson1View)
	ON_BN_CLICKED(IDC_BUTTON8, OnButton8)
	ON_BN_CLICKED(IDC_BUTTON9, OnButton9)
	ON_BN_CLICKED(IDC_BUTTON10, OnButton10)
	ON_BN_CLICKED(IDC_BUTTON11, OnButton11)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON12, OnButton12)
	ON_BN_CLICKED(IDC_BUTTON13, OnButton13)
	ON_BN_CLICKED(IDC_BUTTON14, OnButton14)
	ON_BN_CLICKED(IDC_BUTTON15, OnButton15)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPerson1View construction/destruction

CPerson1View::CPerson1View()
	: CFormView(CPerson1View::IDD)
{
	//{{AFX_DATA_INIT(CPerson1View)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// TODO: add construction code here
	if(mydatabase.Open(_T("p1"))){
    mySet.m_pDatabase=&mydatabase;
	mySet3.m_pDatabase=&mydatabase;
    mySet.Open();

   // mySet3.Open();
	}

	

}

CPerson1View::~CPerson1View()
{
}

void CPerson1View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPerson1View)
	DDX_Control(pDX, IDC_MSFLEXGRID1, m_fg);
	//}}AFX_DATA_MAP
}

BOOL CPerson1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CPerson1View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
     this->m_fg.SetTextMatrix(0,0,"姓名");
         this->m_fg.SetTextMatrix(0,1,"性别");

          this->m_fg.SetTextMatrix(0,2,"出生日期");
		  this->m_fg.SetTextMatrix(0,3,"电话号码");
		  this->m_fg.SetTextMatrix(0,4,"身高");
		  this->m_fg.SetTextMatrix(0,5,"体重");
		  this->m_fg.SetTextMatrix(0,6,"技能");
}

/////////////////////////////////////////////////////////////////////////////
// CPerson1View printing

BOOL CPerson1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	
	return DoPreparePrinting(pInfo);
}

void CPerson1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPerson1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CPerson1View::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CPerson1View diagnostics

#ifdef _DEBUG
void CPerson1View::AssertValid() const
{
	CFormView::AssertValid();
}

void CPerson1View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CPerson1Doc* CPerson1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPerson1Doc)));
	return (CPerson1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPerson1View message handlers

void CPerson1View::OnButton8() 
{

	this->UpdateData(true);
	CString s1,s2,s3,s4,s7,s5,s6,s8;
	int j8;
	mySet.AddNew();
	this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
		this->GetDlgItem(IDC_EDIT2)->GetWindowText(s2);
		this->GetDlgItem(IDC_EDIT3)->GetWindowText(s3);
		this->GetDlgItem(IDC_EDIT4)->GetWindowText(s4);
		this->GetDlgItem(IDC_EDIT5)->GetWindowText(s5);
		this->GetDlgItem(IDC_EDIT6)->GetWindowText(s6);		
		this->GetDlgItem(IDC_EDIT7)->GetWindowText(s7);
		this->GetDlgItem(IDC_EDIT8)->GetWindowText(s8);
		j8=atoi(s8);
		if(s8.IsEmpty()||s7.IsEmpty()||s6.IsEmpty()||s5.IsEmpty()||s4.IsEmpty()||s3.IsEmpty()||s2.IsEmpty()||s1.IsEmpty()){
         MessageBox("您输入信息不完整!"); 
		}
		else{ 
		mySet.m_id=j8;
		mySet.m_column1=s1;
		mySet.m_column2=s2;
		mySet.m_column3=s3;
		mySet.m_column4=s4;
		mySet.m_column5=s5;
		mySet.m_column6=s6;
		mySet.m_column7=s7;
        MessageBox("添加信息成功!");
		}
		mySet.Update();
	    mySet.Requery();
	
	
}

void CPerson1View::OnButton9() 
{  
    mySet.Close();
   	mySet.Open();
   CString s1;
   CString m_e1;
   this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
   if(s1.GetLength()!=0){
   mySet.m_strFilter="姓名=?";
   mySet.p1=s1;
   m_e1=mySet.p1;
   try{
   mySet.Delete();
   }catch(CDBException *e){
   AfxMessageBox("删除错误!");
   e->Delete();
   return ;
   }
   }
   else{
   MessageBox("你输入的内容是空!");
   }
   if(mySet.IsEOF()){  
    mySet.Requery();
    mySet.MoveFirst();
   }else
   { MessageBox("删除"+m_e1+"成功!");
   }
}

void CPerson1View::OnButton10() 
{
	CString s1,s2,s3,s4,s7,s5,s6,s8;

	int j8;
	//mySet.MoveFirst();
    mySet.Edit();
	this->UpdateData(TRUE);
    this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
		this->GetDlgItem(IDC_EDIT2)->GetWindowText(s2);
		this->GetDlgItem(IDC_EDIT3)->GetWindowText(s3);
		this->GetDlgItem(IDC_EDIT4)->GetWindowText(s4);
		this->GetDlgItem(IDC_EDIT5)->GetWindowText(s5);
		this->GetDlgItem(IDC_EDIT6)->GetWindowText(s6);		
		this->GetDlgItem(IDC_EDIT7)->GetWindowText(s7);
		this->GetDlgItem(IDC_EDIT8)->GetWindowText(s8);
		j8=atoi(s8);
		if(s8.IsEmpty()||s7.IsEmpty()||s6.IsEmpty()||s5.IsEmpty()||s4.IsEmpty()||s3.IsEmpty()||s2.IsEmpty()||s1.IsEmpty()){
         MessageBox("您输入信息不完整!"); 
		}
		else{ 
        mySet.m_id=j8;
		mySet.m_column1=s1;
		mySet.m_column2=s2;
		mySet.m_column3=s3;
		mySet.m_column4=s4;
		mySet.m_column5=s5;
		mySet.m_column6=s6;
		mySet.m_column7=s7;
        MessageBox("修改信息成功!");
		mySet.Update();
		}	
}

void CPerson1View::OnButton11() 
{
	
    mySet.Close();
	   mySet.Open();
   CString s1;
   this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
   if(s1.GetLength()!=0){
   mySet.m_strFilter="姓名=?";
   mySet.p1=s1;

    //下面是添加一行数据
   if(mySet.m_column1.IsEmpty()){
	   MessageBox("数据库里没有该信息!");
   }
   else{
	this->m_fg.SetTextMatrix(1,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(1,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(1,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(1,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(1,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(1,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(1,6,mySet.m_column7);	
	   MessageBox("查询成功!");
   }
   }
   else{
    MessageBox("你还没输入查找条件!");
   }
	
}

void CPerson1View::OnButton2() 
{

	mySet.Close();
    mySet.m_strFilter="性别='男'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
	
   	mySet.MoveFirst();
    CString STemp;
	m_fg.SetRows(a+1);                 //设置行数
	for(int i=1;i<=a;i++){	
	this->m_fg.SetTextMatrix(i,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(i,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(i,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(i,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(i,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(i,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(i,6,mySet.m_column7);	
	// STemp.Format( _T("%d"),i );
   // MessageBox( STemp );
    if(!mySet.IsEOF( )){
	mySet.MoveNext();
	}
	else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
	

}

void CPerson1View::OnButton3() 
{
	// TODO: Add your control notification handler code here
	
	mySet.Close();
    mySet.m_strFilter="性别='女'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}

		m_fg.SetRows(a+1);    
  //  for(int b=a;b>=1;b--) 
	//this->m_fg.RemoveItem(b);
    //清空字段名称
	//this->m_fg.Clear();
    mySet.MoveFirst();
	for(int i=1;i<=a;i++){
	this->m_fg.SetTextMatrix(i,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(i,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(i,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(i,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(i,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(i,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(i,6,mySet.m_column7);	
	if(!mySet.IsEOF( )){
	mySet.MoveNext();
	}else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
}

void CPerson1View::OnButton4() 
{
	mySet.Close();
    mySet.m_strFilter="身高>='165'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
		m_fg.SetRows(a+1);    
  //  for(int b=a;b>=1;b--) 
	//this->m_fg.RemoveItem(b);
    //清空字段名称
	//this->m_fg.Clear();
    mySet.MoveFirst();
	for(int i=1;i<=a;i++){
	this->m_fg.SetTextMatrix(i,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(i,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(i,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(i,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(i,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(i,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(i,6,mySet.m_column7);	
    

	if(!mySet.IsEOF( )){
	mySet.MoveNext();
	}else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
	
}

void CPerson1View::OnButton5() 
{
	// TODO: Add your control notification handler code here
	mySet.Close();
	mySet.m_strFilter="身高>='0'";
    mySet.m_strSort="id";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
	m_fg.SetRows(a+1); 

    mySet.MoveFirst();
	for(int i=1;i<=a;i++){
	this->m_fg.SetTextMatrix(i,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(i,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(i,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(i,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(i,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(i,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(i,6,mySet.m_column7);	
    

	if(!mySet.IsEOF( )){
	mySet.MoveNext();
	}else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
}

void CPerson1View::OnButton6() 
{
	// TODO: Add your control notification handler code here
	mySet.Close();
    mySet.m_strFilter="性别='男'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
	CString temp;
	temp.Format("%d",a);
	MessageBox("男性共有"+temp+"人");
	this->UpdateData(false);
}

void CPerson1View::OnButton7() 
{
	// TODO: Add your control notification handler code here
	mySet.Close();
    mySet.m_strFilter="身高>='0'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
		m_fg.SetRows(a+1);    
  //  for(int b=a;b>=1;b--) 
	//this->m_fg.RemoveItem(b);
    //清空字段名称
	//this->m_fg.Clear();
    mySet.MoveFirst();
	for(int i=1;i<=a;i++){
	this->m_fg.SetTextMatrix(i,0,mySet.m_column1);	
	this->m_fg.SetTextMatrix(i,1,mySet.m_column2);	
	this->m_fg.SetTextMatrix(i,2,mySet.m_column3);	
	this->m_fg.SetTextMatrix(i,3,mySet.m_column4);	
	this->m_fg.SetTextMatrix(i,4,mySet.m_column5);
	this->m_fg.SetTextMatrix(i,5,mySet.m_column6);
	this->m_fg.SetTextMatrix(i,6,mySet.m_column7);	
    

	if(!mySet.IsEOF( )){
	mySet.MoveNext();
	}else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
	CString temp;
	temp.Format("%d",a);
	MessageBox("目前共有"+temp+"人");
}

void CPerson1View::OnButton1() 
{
    // TODO: Add extra validation here

    //创建Excel文件
    CDatabase DB;
    //Excel安装驱动
    CString StrDriver = "MICROSOFT EXCEL DRIVER (*.XLS)";

    //要建立的Execel文件
    CString StrExcelFile = "d:\\Person.xls";
    CString StrSQL;
   if (-1!=GetFileAttributes("d:\\Person.xls"))    //如果文件夹存在
     MessageBox("该文件已经存在!");
       else{
       StrSQL.Format("DRIVER={%s};DSN='';FIRSTROWHASNameS=1;READONLY=FALSE;CREATE_DB=%s;DBQ=%s",StrDriver,StrExcelFile,StrExcelFile);
		
    TRY
    {
	
        //创建Excel表格文件
     DB.OpenEx(StrSQL, CDatabase::noOdbcDialog);

        //创建表结构，字段名不能是Index
     StrSQL = "CREATE TABLE Person(姓名 TEXT,  性别 TEXT,  生日 TEXT,  电话 TEXT,  身高 TEXT,  体重 TEXT,  技能 TEXT)";
     DB.ExecuteSQL(StrSQL);

	mySet.Close();
    mySet.m_strFilter="身高>='0'";
	mySet.Open();
	mySet.MoveFirst();
	int a;
	while(!mySet.IsEOF( )){
    mySet.MoveNext( );
    a=mySet.GetRecordCount();
	}
		m_fg.SetRows(a+1);    
  //  for(int b=a;b>=1;b--) 
	//this->m_fg.RemoveItem(b);
    //清空字段名称
	//this->m_fg.Clear();
    mySet.MoveFirst();
	for(int i=1;i<=a;i++){
	if(!mySet.IsEOF( )){
    StrSQL.Format("INSERT INTO Person(姓名,性别,生日,电话,身高,体重,技能) VALUES ('%s', '%s', '%s', '%s', '%s', '%s', '%s')", mySet.m_column1, mySet.m_column2,mySet.m_column3,mySet.m_column4,mySet.m_column5,mySet.m_column6,mySet.m_column7);
    DB.ExecuteSQL(StrSQL);
	mySet.MoveNext();

	}else{
		mySet.MoveFirst();
	}
		this->UpdateData(false);
	}
      
        //关闭数据库
        DB.Close();
		
    }
    CATCH(CDBException,  e)
    {
        AfxMessageBox("创建错误：" + e->m_strError);
    }
    END_CATCH;
    MessageBox("创建导出成功！");
}
}

void CPerson1View::OnButton12() 
{
   
   mySet3.Close();
   CString s1;
   this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
   if(s1.GetLength()!=0){
   mySet3.m_strFilter="姓名=?";
   mySet3.p2=s1;
   mySet3.Open();

    //下面是添加一行数据
   MessageBox(mySet3.m_column2+"");	
   mySet3.MoveFirst();
   this->UpdateData(false);
   }
   else{
    MessageBox("你还没输入查找条件!");
   }
}

void CPerson1View::OnButton13() 
{
   mySet3.Close();
   	mySet3.Open();
  //  mySet3.MoveFirst();
   CString s1;
   this->GetDlgItem(IDC_EDIT9)->GetWindowText(s1);
   if(s1.GetLength()!=0){
   mySet3.m_strFilter="岗位=?";
   mySet3.p3=s1;
   try{
   mySet3.Delete();
   }catch(CDBException *e){
   AfxMessageBox("删除错误!");
   e->Delete();
   return ;
   }
   if(!mySet3.IsEOF()){   
    MessageBox("删除"+s1+"岗位成功!");
   }else{
    mySet3.Requery();
    mySet3.MoveFirst();
   }
   }
   else{
    MessageBox("你还没输入查找条件!");
   }
   
  	

 
}

void CPerson1View::OnButton14() 
{
	// TODO: Add your control notification handler code here
	//mySet3.Close();
    mySet3.Open();
    CString s1,s2;
    this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
    this->GetDlgItem(IDC_EDIT9)->GetWindowText(s2);
	if(s1.IsEmpty()||s2.IsEmpty()){
		 MessageBox("您输入信息不完整!"); 

	}else{
	try{
	mySet3.Edit();
	this->UpdateData(true);
	mySet3.m_column1=s1;
	mySet3.m_column2=s2;
	mySet3.Update();
	MessageBox("修改信息成功!");
	
	}catch(CDBException *e){
     AfxMessageBox("修改失败!");
     e->Delete();
     return ;
	}
	}
}

void CPerson1View::OnButton15() 
{
	// TODO: Add your control notification handler code here
	mySet3.Close();
	mySet3.Open();
	this->UpdateData(true);
	CString s1,s2,s8;
	int j8;
	mySet3.AddNew();
	this->GetDlgItem(IDC_EDIT1)->GetWindowText(s1);
	this->GetDlgItem(IDC_EDIT9)->GetWindowText(s2);
	this->GetDlgItem(IDC_EDIT8)->GetWindowText(s8);
		j8=atoi(s8);
		if(s8.IsEmpty()||s2.IsEmpty()||s1.IsEmpty()){
         MessageBox("您输入信息不完整!"); 
		}
		else{ 
		mySet3.m_id=j8;
		mySet3.m_column1=s1;
		mySet3.m_column2=s2;

        MessageBox("添加信息成功!");
		}
		mySet3.Update();
	    mySet3.Requery();
}
