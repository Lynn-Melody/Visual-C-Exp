
// Week3_Exp1_1View.cpp : CWeek3_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week3_Exp1_1.h"
#endif

#include "Week3_Exp1_1Doc.h"
#include "Week3_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek3_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp1_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp1_1View 构造/析构

CWeek3_Exp1_1View::CWeek3_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek3_Exp1_1View::~CWeek3_Exp1_1View()
{
}

BOOL CWeek3_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp1_1View 绘制

void CWeek3_Exp1_1View::OnDraw(CDC* pDC)
{
	CWeek3_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek3_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp1_1Doc* CWeek3_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp1_1Doc)));
	return (CWeek3_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp1_1View 消息处理程序


void CWeek3_Exp1_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect rc;
	GetClientRect(&rc);
	if (rc.Width() > rc.Height())
	{
		int a = (rc.Width() - rc.Height()) / 2;
		rect = CRect(a, 0, rc.Width() - a, rc.Height());
	}
	else
	{
		int a = (rc.Height() - rc.Width()) / 2;
		rect = CRect(0, a, rc.Width(), rc.Height() - a);
	}
//	CClientDC dc(this);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
