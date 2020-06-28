
// Week2_Exp1_4View.cpp : CWeek2_Exp1_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week2_Exp1_4.h"
#endif

#include "Week2_Exp1_4Doc.h"
#include "Week2_Exp1_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp1_4View

IMPLEMENT_DYNCREATE(CWeek2_Exp1_4View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp1_4View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp1_4View 构造/析构

CWeek2_Exp1_4View::CWeek2_Exp1_4View()
{
	// TODO: 在此处添加构造代码

}

CWeek2_Exp1_4View::~CWeek2_Exp1_4View()
{
}

BOOL CWeek2_Exp1_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp1_4View 绘制

void CWeek2_Exp1_4View::OnDraw(CDC* pDC)
{
	CWeek2_Exp1_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int color = RGB(180,20,180);
	CBrush newBrush(color);
	CBrush* oldBrush = pDC->SelectObject(&newBrush);
	CRect rect;
	GetClientRect(&rect);
	pDC->Ellipse(rect);
}


// CWeek2_Exp1_4View 诊断

#ifdef _DEBUG
void CWeek2_Exp1_4View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp1_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp1_4Doc* CWeek2_Exp1_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp1_4Doc)));
	return (CWeek2_Exp1_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp1_4View 消息处理程序
