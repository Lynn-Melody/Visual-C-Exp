
// Week4_Exp2_3View.cpp : CWeek4_Exp2_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week4_Exp2_3.h"
#endif

#include "Week4_Exp2_3Doc.h"
#include "Week4_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek4_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek4_Exp2_3View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek4_Exp2_3View 构造/析构

CWeek4_Exp2_3View::CWeek4_Exp2_3View()
{
	// TODO: 在此处添加构造代码

}

CWeek4_Exp2_3View::~CWeek4_Exp2_3View()
{
}

BOOL CWeek4_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp2_3View 绘制

void CWeek4_Exp2_3View::OnDraw(CDC* pDC)
{
	CWeek4_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->set)
	{
		for (int i = 0; i < pDoc->N; i++)
		{
			SetTimer(i, rand() % 400 + 100,NULL);
		}
		pDoc->set = false;
	}
	for (int i = 0; i < pDoc->N; i++)
	{
		pDC->Ellipse(pDoc->array[i]);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek4_Exp2_3View 诊断

#ifdef _DEBUG
void CWeek4_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp2_3Doc* CWeek4_Exp2_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp2_3Doc)));
	return (CWeek4_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp2_3View 消息处理程序


void CWeek4_Exp2_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek4_Exp2_3Doc* pDoc = GetDocument();
	CRect rc;
	GetClientRect(&rc);
	int n = nIDEvent;
	if (pDoc->a[n] > 0)
	{
		if (pDoc->array[n].bottom + 10 <= rc.bottom)
		{
			pDoc->array[n].bottom += 10;
			pDoc->array[n].top += 10;
		}
		else
		{
			pDoc->array[n].bottom = rc.bottom;
			pDoc->array[n].top = rc.bottom - 30;
			pDoc->a[n] *= -1;
		}

	}
	else
	{
		if (pDoc->array[n].top - 10 >= rc.top)
		{
			pDoc->array[n].top -= 10;
			pDoc->array[n].bottom -= 10;
		}
		else
		{
			pDoc->array[n].top = rc.top;
			pDoc->array[n].bottom = rc.top + 30;
			pDoc->a[n] *= -1;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}
