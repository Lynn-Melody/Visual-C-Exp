
// Week2_Exp2_2View.cpp : CWeek2_Exp2_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week2_Exp2_2.h"
#endif

#include "Week2_Exp2_2Doc.h"
#include "Week2_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek2_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp2_2View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp2_2View 构造/析构

CWeek2_Exp2_2View::CWeek2_Exp2_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek2_Exp2_2View::~CWeek2_Exp2_2View()
{
}

BOOL CWeek2_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp2_2View 绘制

void CWeek2_Exp2_2View::OnDraw(CDC* pDC)
{
	CWeek2_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s2;
	s2.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(300, 200, s2);
}


// CWeek2_Exp2_2View 诊断

#ifdef _DEBUG
void CWeek2_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp2_2Doc* CWeek2_Exp2_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp2_2Doc)));
	return (CWeek2_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp2_2View 消息处理程序
