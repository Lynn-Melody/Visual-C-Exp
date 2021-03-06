
// Week3_Exp2_4View.cpp : CWeek3_Exp2_4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week3_Exp2_4.h"
#endif

#include "Week3_Exp2_4Doc.h"
#include "Week3_Exp2_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp2_4View

IMPLEMENT_DYNCREATE(CWeek3_Exp2_4View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp2_4View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp2_4View 构造/析构

CWeek3_Exp2_4View::CWeek3_Exp2_4View()
{
	// TODO: 在此处添加构造代码
	temple = true;
}

CWeek3_Exp2_4View::~CWeek3_Exp2_4View()
{
}

BOOL CWeek3_Exp2_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp2_4View 绘制

void CWeek3_Exp2_4View::OnDraw(CDC* pDC)
{
	CWeek3_Exp2_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (temple)
	{
		int a = 50;
		for (int i = 0; i < 4; i++)
		{
			CRect rc(a, 120, a + 150, 230);
			pDoc->array.Add(rc);
			a += 250;
		}
		temple = false;
	}
	for (int i = 0; i < 3; i++)
	{
		CRect rc = pDoc->array.GetAt(i);
		pDC->Rectangle(rc);
		CString s;
		s.Format(_T("%c"), i + 'A');
		pDC->TextOutW(rc.CenterPoint().x, 100, s);
		if (pDoc->a[i] >= 0)
		{
			s.Format(_T("%d"), pDoc->a[i]);
			pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
		}
	}
	CRect rc = pDoc->array.GetAt(3);
	pDC->Rectangle(rc);
	CString s;
	s.Format(_T("D"));
	pDC->TextOutW(rc.CenterPoint().x, 100, s);
	if (pDoc->a[3] == 0)
	{
		s = _T("+");
		pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
	}
	else if (pDoc->a[3] == 1)
	{
		s = _T("-");
		pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
	}
	else if (pDoc->a[3] == 2)
	{
		s = _T("*");
		pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
	}
	else if (pDoc->a[3] == 3)
	{
		s = _T("/");
		pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
	}
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek3_Exp2_4View 诊断

#ifdef _DEBUG
void CWeek3_Exp2_4View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp2_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp2_4Doc* CWeek3_Exp2_4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp2_4Doc)));
	return (CWeek3_Exp2_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp2_4View 消息处理程序


void CWeek3_Exp2_4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_Exp2_4Doc* pDoc = GetDocument();
	CRect rc;
	int i;
	for (i = 0; i < 4; i++)
	{
		rc = pDoc->array.GetAt(i);
		if (point.x >= rc.left&&point.x <= rc.right&&point.y >= rc.top&&point.y <= rc.bottom)
			break;
	}
	if (i<2)
	{
		pDoc->a[i] = rand();
		pDoc->a[2] = -1;
		Invalidate();
	}
	else if (i == 3)
	{
		pDoc->a[3] = (pDoc->a[3] + 1) % 4;
		pDoc->a[2] = -1;
		Invalidate();
	}
	else
	{
		CClientDC dc(this);
		CString s = _T("点击无效");
		dc.TextOutW(380, 50, s);
	}
	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_Exp2_4View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CWeek3_Exp2_4Doc* pDoc = GetDocument();
	CRect rc = pDoc->array.GetAt(2);
	if (point.x >= rc.left&&point.x <= rc.right&&point.y >= rc.top&&point.y <= rc.bottom)
	{
		if (pDoc->a[0] >= 0 && pDoc->a[1] >= 0);
		{
			if(pDoc->a[3]==0)
			pDoc->a[2] = pDoc->a[0] + pDoc->a[1];
			else if(pDoc->a[3]==1)
			pDoc->a[2] = pDoc->a[0] - pDoc->a[1];
			else if (pDoc->a[3] == 2)
			pDoc->a[2] = pDoc->a[0] * pDoc->a[1];
			else if (pDoc->a[3] == 3)
			{
				if (pDoc->a[1] != 0)
					pDoc->a[2] = pDoc->a[0] / pDoc->a[1];
				else
				{
					pDoc->a[2] = -1;
				}
			}
			Invalidate();
		}
	}
	CView::OnRButtonDown(nFlags, point);
}
