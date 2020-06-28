
// Week4_Exp1_1View.cpp : CWeek4_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_Exp1_1.h"
#endif

#include "Week4_Exp1_1Doc.h"
#include "Week4_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek4_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek4_Exp1_1View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek4_Exp1_1View 构造/析构

CWeek4_Exp1_1View::CWeek4_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek4_Exp1_1View::~CWeek4_Exp1_1View()
{
}

BOOL CWeek4_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp1_1View 绘制

void CWeek4_Exp1_1View::OnDraw(CDC* pDC)
{
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek4_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp1_1Doc* CWeek4_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp1_1Doc)));
	return (CWeek4_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp1_1View 消息处理程序


void CWeek4_Exp1_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("鼠标当前位置：x=%d     y=%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, s);
	CView::OnMouseMove(nFlags, point);
}


void CWeek4_Exp1_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	pDoc->p = point;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek4_Exp1_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	int x1, y1, x2, y2;
	if (pDoc->p.x < point.x)
	{
		x1 = pDoc->p.x;
		x2 = point.x;
	}
	else
	{
		x1 = point.x;
		x2 = pDoc->p.x;
	}
	if (pDoc->p.y < point.y)
	{
		y1 = pDoc->p.y;
		y2 = point.y;
	}
	else
	{
		y1 = point.y;
		y2 = pDoc->p.y;
	}
	CRect rect(x1, y1, x2, y2);
	CClientDC dc(this);
	dc.Rectangle(rect);
	CView::OnLButtonUp(nFlags, point);
}
