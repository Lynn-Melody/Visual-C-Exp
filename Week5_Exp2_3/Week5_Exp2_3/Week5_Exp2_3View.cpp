
// Week5_Exp2_3View.cpp : CWeek5_Exp2_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5_Exp2_3.h"
#endif

#include "Week5_Exp2_3Doc.h"
#include "Week5_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek5_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp2_3View, CView)
	ON_COMMAND(ID_drawLine, &CWeek5_Exp2_3View::Ondrawline)
	ON_COMMAND(ID_drawRect, &CWeek5_Exp2_3View::Ondrawrect)
	ON_COMMAND(ID_drawCircle, &CWeek5_Exp2_3View::Ondrawcircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek5_Exp2_3View 构造/析构

CWeek5_Exp2_3View::CWeek5_Exp2_3View()
{
	// TODO: 在此处添加构造代码
	type = 0;
	set = false;
}

CWeek5_Exp2_3View::~CWeek5_Exp2_3View()
{
}

BOOL CWeek5_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_3View 绘制

void CWeek5_Exp2_3View::OnDraw(CDC* pDC)
{
	CWeek5_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set&&type==1)
	{
		pDC->MoveTo(p1);
		pDC->LineTo(p2);
	}
	else if (set&&type == 2)
	{
		CRect cr(p1, p2);
		pDC->Rectangle(cr);
	}
	else if (set&&type == 3)
	{
		CRect cr(p1, p2);
		pDC->Ellipse(cr);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5_Exp2_3View 诊断

#ifdef _DEBUG
void CWeek5_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_3Doc* CWeek5_Exp2_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_3Doc)));
	return (CWeek5_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_3View 消息处理程序


void CWeek5_Exp2_3View::Ondrawline()
{
	// TODO: 在此添加命令处理程序代码
	type = 1;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::Ondrawrect()
{
	// TODO: 在此添加命令处理程序代码
	type = 2;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::Ondrawcircle()
{
	// TODO: 在此添加命令处理程序代码
	type = 3;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (type!=0)
	{
		p1 = point;
		set = true;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CWeek5_Exp2_3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (set)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek5_Exp2_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (set)
	{
		set = false;
	}
	CView::OnLButtonUp(nFlags, point);
}
