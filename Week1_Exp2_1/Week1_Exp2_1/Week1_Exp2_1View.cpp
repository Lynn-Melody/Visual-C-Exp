
// Week1_Exp2_1View.cpp : CWeek1_Exp2_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_1.h"
#endif

#include "Week1_Exp2_1Doc.h"
#include "Week1_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek1_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_1View 构造/析构

CWeek1_Exp2_1View::CWeek1_Exp2_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek1_Exp2_1View::~CWeek1_Exp2_1View()
{
}

BOOL CWeek1_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_1View 绘制

void CWeek1_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek1_Exp2_1View 诊断

#ifdef _DEBUG
void CWeek1_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_1Doc* CWeek1_Exp2_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_1Doc)));
	return (CWeek1_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_1View 消息处理程序


void CWeek1_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CWeek1_Exp2_1Doc * pDoc = GetDocument();
	dc.TextOutW(200, 200, pDoc->num);
	CView::OnLButtonDown(nFlags, point);
}
