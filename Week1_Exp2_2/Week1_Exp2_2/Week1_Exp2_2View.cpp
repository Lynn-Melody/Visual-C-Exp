
// Week1_Exp2_2View.cpp : CWeek1_Exp2_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_2.h"
#endif

#include "Week1_Exp2_2Doc.h"
#include "Week1_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek1_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_2View 构造/析构

CWeek1_Exp2_2View::CWeek1_Exp2_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek1_Exp2_2View::~CWeek1_Exp2_2View()
{
}

BOOL CWeek1_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_2View 绘制

void CWeek1_Exp2_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek1_Exp2_2View 诊断

#ifdef _DEBUG
void CWeek1_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_2Doc* CWeek1_Exp2_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_2Doc)));
	return (CWeek1_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_2View 消息处理程序


void CWeek1_Exp2_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek1_Exp2_2Doc * pDoc = GetDocument();
	pDoc->acount++;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek1_Exp2_2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek1_Exp2_2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int n = pDoc->acount;
	CString s;
	s.Format(_T("鼠标左键按下%d次"), n);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
