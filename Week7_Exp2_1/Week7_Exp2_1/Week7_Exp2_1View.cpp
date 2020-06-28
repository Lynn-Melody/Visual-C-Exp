
// Week7_Exp2_1View.cpp : CWeek7_Exp2_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_Exp2_1.h"
#endif

#include "Week7_Exp2_1Doc.h"
#include "Week7_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek7_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp2_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek7_Exp2_1View 构造/析构

CWeek7_Exp2_1View::CWeek7_Exp2_1View()
{
	// TODO: 在此处添加构造代码
	rect = CRect(100,100, 160, 160);
	move = false;
}

CWeek7_Exp2_1View::~CWeek7_Exp2_1View()
{
}

BOOL CWeek7_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp2_1View 绘制

void CWeek7_Exp2_1View::OnDraw(CDC* pDC)
{
	CWeek7_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(rect);
	pDC->TextOutW(5, 5, _T("在矩形内点击鼠标左键开始移动矩形"));
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_Exp2_1View 诊断

#ifdef _DEBUG
void CWeek7_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp2_1Doc* CWeek7_Exp2_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp2_1Doc)));
	return (CWeek7_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp2_1View 消息处理程序


void CWeek7_Exp2_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (point.x >= rect.left&&point.x <= rect.right&&point.y >= rect.top&&point.y <= rect.bottom)
		move = true;
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek7_Exp2_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (move)
	{
		rect.top = point.y - 30;
		rect.left = point.x - 30;
		rect.bottom = point.y + 30;
		rect.right = point.x + 30;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek7_Exp2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	move=false;
	CView::OnLButtonUp(nFlags, point);
}


void CWeek7_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (point.x >= rect.left&&point.x <= rect.right&&point.y >= rect.top&&point.y <= rect.bottom)
		move = true;
	CView::OnLButtonDown(nFlags, point);
}
