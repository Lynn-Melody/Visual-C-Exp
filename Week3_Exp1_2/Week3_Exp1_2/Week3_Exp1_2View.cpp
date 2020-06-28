
// Week3_Exp1_2View.cpp : CWeek3_Exp1_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week3_Exp1_2.h"
#endif

#include "Week3_Exp1_2Doc.h"
#include "Week3_Exp1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek3_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp1_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp1_2View 构造/析构

CWeek3_Exp1_2View::CWeek3_Exp1_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek3_Exp1_2View::~CWeek3_Exp1_2View()
{
}

BOOL CWeek3_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp1_2View 绘制

void CWeek3_Exp1_2View::OnDraw(CDC* pDC)
{
	CWeek3_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int length = pDoc->array.GetSize();
	for (int i = 0; i < length; i++)
	{
		pDC->Ellipse(pDoc->array.GetAt(i));
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_Exp1_2View 诊断

#ifdef _DEBUG
void CWeek3_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp1_2Doc* CWeek3_Exp1_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp1_2Doc)));
	return (CWeek3_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp1_2View 消息处理程序


void CWeek3_Exp1_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect rc;
	GetClientRect(&rc);
	int a = point.x < (rc.right - point.x) ? point.x : rc.right - point.x;
	int b = point.y < (rc.bottom - point.y) ? point.y : rc.bottom - point.y;
	int r1 = rand() % a + 1;
	int r2 = rand() % b + 1;
	CRect rect(point.x - r1, point.y - r2, point.x + r1, point.y + r2);
	CClientDC dc(this);
	dc.Ellipse(rect);
	CWeek3_Exp1_2Doc* pDoc = GetDocument();
	pDoc->array.Add(rect);
	CView::OnLButtonDown(nFlags, point);
}
