
// Week1_Exp2_PracticeView.cpp : CWeek1_Exp2_PracticeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_Practice.h"
#endif

#include "Week1_Exp2_PracticeDoc.h"
#include "Week1_Exp2_PracticeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_PracticeView

IMPLEMENT_DYNCREATE(CWeek1_Exp2_PracticeView, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_PracticeView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_PracticeView 构造/析构

CWeek1_Exp2_PracticeView::CWeek1_Exp2_PracticeView()
{
	// TODO: 在此处添加构造代码
	s2 = _T("StringB_From_View");
}

CWeek1_Exp2_PracticeView::~CWeek1_Exp2_PracticeView()
{
}

BOOL CWeek1_Exp2_PracticeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_PracticeView 绘制

void CWeek1_Exp2_PracticeView::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_PracticeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek1_Exp2_PracticeView 诊断

#ifdef _DEBUG
void CWeek1_Exp2_PracticeView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_PracticeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_PracticeDoc* CWeek1_Exp2_PracticeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_PracticeDoc)));
	return (CWeek1_Exp2_PracticeDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_PracticeView 消息处理程序


void CWeek1_Exp2_PracticeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CWeek1_Exp2_PracticeDoc* pDoc = GetDocument();
	CString str;
	str.Format(_T("合并后的字符串：%s%s"), pDoc->s1, s2);
	dc.TextOutW(200, 200, str);
	CView::OnLButtonDown(nFlags, point);
}
