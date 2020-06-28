
// Week7_Exp2_3View.cpp : CWeek7_Exp2_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week7_Exp2_3.h"
#endif

#include "Week7_Exp2_3Doc.h"
#include "Week7_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek7_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp2_3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek7_Exp2_3View 构造/析构

CWeek7_Exp2_3View::CWeek7_Exp2_3View()
{
	// TODO: 在此处添加构造代码
	begin = true;
	direction = 1;
}

CWeek7_Exp2_3View::~CWeek7_Exp2_3View()
{
}

BOOL CWeek7_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp2_3View 绘制

void CWeek7_Exp2_3View::OnDraw(CDC* pDC)
{
	CWeek7_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	if (begin)
	{
		CPoint p = cr.CenterPoint();
		rect = CRect(0, p.y - 30, 60, p.y + 30);
		begin = false;
	}
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek7_Exp2_3View 诊断

#ifdef _DEBUG
void CWeek7_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp2_3Doc* CWeek7_Exp2_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp2_3Doc)));
	return (CWeek7_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp2_3View 消息处理程序


void CWeek7_Exp2_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;
	GetClientRect(&cr);
	if (direction == 1)
	{
		if (rect.right + 20 < cr.right)
		{
			rect.right += 20;
			rect.left += 20;
		}
		else
		{
			rect.right = cr.right;
			rect.left = cr.right - 60;
			direction = -1;
		}
	}
	else
	{
		if (rect.left - 20 > cr.left)
		{
			rect.left -= 20;
			rect.right -= 20;
		}
		else
		{
			rect.left = cr.left;
			rect.right = cr.left + 60;
			direction = 1;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CWeek7_Exp2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetTimer(1, 220, NULL);
	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_Exp2_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}
