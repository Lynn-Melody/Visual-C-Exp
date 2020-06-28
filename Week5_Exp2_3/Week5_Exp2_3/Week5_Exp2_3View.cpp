
// Week5_Exp2_3View.cpp : CWeek5_Exp2_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_Exp2_3.h"
#endif

#include "Week5_Exp2_3Doc.h"
#include "Week5_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek5_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp2_3View, CView)
	ON_COMMAND(ID_drawLine, &CWeek5_Exp2_3View::Ondrawline)
	ON_COMMAND(ID_drawRect, &CWeek5_Exp2_3View::Ondrawrect)
	ON_COMMAND(ID_drawCircle, &CWeek5_Exp2_3View::Ondrawcircle)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek5_Exp2_3View ����/����

CWeek5_Exp2_3View::CWeek5_Exp2_3View()
{
	// TODO: �ڴ˴���ӹ������
	type = 0;
	set = false;
}

CWeek5_Exp2_3View::~CWeek5_Exp2_3View()
{
}

BOOL CWeek5_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_3View ����

void CWeek5_Exp2_3View::OnDraw(CDC* pDC)
{
	CWeek5_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set&&type==1)
	{
		pDC->MoveTo(p1);
		pDC->LineTo(p2);
	}
	else if (set&&type == 2)
	{
		CRect cr(p1, p2);
		pDC->Rectangle(cr);
	}
	else if (set&&type == 3)
	{
		CRect cr(p1, p2);
		pDC->Ellipse(cr);
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_Exp2_3View ���

#ifdef _DEBUG
void CWeek5_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_3Doc* CWeek5_Exp2_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_3Doc)));
	return (CWeek5_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_3View ��Ϣ�������


void CWeek5_Exp2_3View::Ondrawline()
{
	// TODO: �ڴ���������������
	type = 1;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::Ondrawrect()
{
	// TODO: �ڴ���������������
	type = 2;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::Ondrawcircle()
{
	// TODO: �ڴ���������������
	type = 3;
	set = false;
	Invalidate();
}


void CWeek5_Exp2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (type!=0)
	{
		p1 = point;
		set = true;
	}
	CView::OnLButtonDown(nFlags, point);
}


void CWeek5_Exp2_3View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (set)
	{
		p2 = point;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek5_Exp2_3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (set)
	{
		set = false;
	}
	CView::OnLButtonUp(nFlags, point);
}
