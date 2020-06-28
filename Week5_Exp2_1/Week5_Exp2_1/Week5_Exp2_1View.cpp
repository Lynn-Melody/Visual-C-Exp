
// Week5_Exp2_1View.cpp : CWeek5_Exp2_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week5_Exp2_1.h"
#endif

#include "Week5_Exp2_1Doc.h"
#include "Week5_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek5_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp2_1View, CView)
	ON_COMMAND(ID_ShowName, &CWeek5_Exp2_1View::OnShowname)
END_MESSAGE_MAP()

// CWeek5_Exp2_1View 构造/析构

CWeek5_Exp2_1View::CWeek5_Exp2_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek5_Exp2_1View::~CWeek5_Exp2_1View()
{
}

BOOL CWeek5_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_1View 绘制

void CWeek5_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek5_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5_Exp2_1View 诊断

#ifdef _DEBUG
void CWeek5_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_1Doc* CWeek5_Exp2_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_1Doc)));
	return (CWeek5_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_1View 消息处理程序


void CWeek5_Exp2_1View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("杨图淇");
	CClientDC dc(this);
	dc.TextOutW(300, 200, s);

}
