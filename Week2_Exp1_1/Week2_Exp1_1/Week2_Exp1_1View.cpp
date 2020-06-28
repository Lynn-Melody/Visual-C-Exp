
// Week2_Exp1_1View.cpp : CWeek2_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week2_Exp1_1.h"
#endif

#include "Week2_Exp1_1Doc.h"
#include "Week2_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek2_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp1_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_Exp1_1View 构造/析构

CWeek2_Exp1_1View::CWeek2_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek2_Exp1_1View::~CWeek2_Exp1_1View()
{
}

BOOL CWeek2_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp1_1View 绘制

void CWeek2_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek2_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek2_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek2_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp1_1Doc* CWeek2_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp1_1Doc)));
	return (CWeek2_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp1_1View 消息处理程序


void CWeek2_Exp1_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect rect;
	GetClientRect(&rect);
	int a;
	if (point.x < (rect.right - point.x))
		a = point.x;
	else
		a = rect.right - point.x;
	int b;
	if (point.y < (rect.bottom - point.y))
		b = point.y;
	else
		b = rect.bottom - point.y;
	int c = a < b ? a : b;
	int r = rand() % c + 1;
	CRect rc(point.x - r, point.y - r, point.x + r, point.y + r);
	CClientDC dc(this);
	dc.Ellipse(rc);
	CView::OnLButtonDown(nFlags, point);
}
