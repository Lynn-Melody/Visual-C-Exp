
// Week8_Exp1_1View.cpp : CWeek8_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week8_Exp1_1.h"
#endif

#include "Week8_Exp1_1Doc.h"
#include "Week8_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek8_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek8_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek8_Exp1_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Dlag1, &CWeek8_Exp1_1View::OnDlag1)
END_MESSAGE_MAP()

// CWeek8_Exp1_1View 构造/析构

CWeek8_Exp1_1View::CWeek8_Exp1_1View()
{
	// TODO: 在此处添加构造代码
	dlg = new Dlg1;
	dlg->Create(IDD_DIALOG1);
}

CWeek8_Exp1_1View::~CWeek8_Exp1_1View()
{
}

BOOL CWeek8_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek8_Exp1_1View 绘制

void CWeek8_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek8_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek8_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek8_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek8_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek8_Exp1_1Doc* CWeek8_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek8_Exp1_1Doc)));
	return (CWeek8_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek8_Exp1_1View 消息处理程序


void CWeek8_Exp1_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		str = cfd.GetPathName();
		GetDC()->TextOutW(50, 50, str);

	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek8_Exp1_1View::OnDlag1()
{
	// TODO: 在此添加命令处理程序代码
	dlg->ShowWindow(1);
/*	dlg.DoModal();*/
	dlg->str = str;
	dlg->lbox.AddString(str);
}
