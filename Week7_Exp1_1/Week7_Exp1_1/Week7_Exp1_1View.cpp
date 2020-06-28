
// Week7_Exp1_1View.cpp : CWeek7_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_Exp1_1.h"
#endif

#include "Week7_Exp1_1Doc.h"
#include "Week7_Exp1_1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek7_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp1_1View, CView)
	ON_COMMAND(ID_ShowDlg, &CWeek7_Exp1_1View::OnShowdlg)
END_MESSAGE_MAP()

// CWeek7_Exp1_1View 构造/析构

CWeek7_Exp1_1View::CWeek7_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek7_Exp1_1View::~CWeek7_Exp1_1View()
{
}

BOOL CWeek7_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp1_1View 绘制

void CWeek7_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek7_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp1_1Doc* CWeek7_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp1_1Doc)));
	return (CWeek7_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp1_1View 消息处理程序


void CWeek7_Exp1_1View::OnShowdlg()
{
	MyDlg dlg;
	dlg.DoModal();
	GetDC()->TextOutW(350, 200, _T("你已退出对话框"));
	// TODO: 在此添加命令处理程序代码
}
