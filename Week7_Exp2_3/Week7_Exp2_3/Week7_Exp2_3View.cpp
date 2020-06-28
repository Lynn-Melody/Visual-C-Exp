
// Week7_Exp2_3View.cpp : CWeek7_Exp2_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_Exp2_3.h"
#endif

#include "Week7_Exp2_3Doc.h"
#include "Week7_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek7_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp2_3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// CWeek7_Exp2_3View ����/����

CWeek7_Exp2_3View::CWeek7_Exp2_3View()
{
	// TODO: �ڴ˴���ӹ������
	begin = true;
	direction = 1;
}

CWeek7_Exp2_3View::~CWeek7_Exp2_3View()
{
}

BOOL CWeek7_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp2_3View ����

void CWeek7_Exp2_3View::OnDraw(CDC* pDC)
{
	CWeek7_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect cr;
	GetClientRect(&cr);
	if (begin)
	{
		CPoint p = cr.CenterPoint();
		rect = CRect(0, p.y - 30, 60, p.y + 30);
		begin = false;
	}
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_Exp2_3View ���

#ifdef _DEBUG
void CWeek7_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp2_3Doc* CWeek7_Exp2_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp2_3Doc)));
	return (CWeek7_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp2_3View ��Ϣ�������


void CWeek7_Exp2_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;
	GetClientRect(&cr);
	if (direction == 1)
	{
		if (rect.right + 20 < cr.right)
		{
			rect.right += 20;
			rect.left += 20;
		}
		else
		{
			rect.right = cr.right;
			rect.left = cr.right - 60;
			direction = -1;
		}
	}
	else
	{
		if (rect.left - 20 > cr.left)
		{
			rect.left -= 20;
			rect.right -= 20;
		}
		else
		{
			rect.left = cr.left;
			rect.right = cr.left + 60;
			direction = 1;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void CWeek7_Exp2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetTimer(1, 220, NULL);
	CView::OnLButtonDown(nFlags, point);
}


void CWeek7_Exp2_3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	KillTimer(1);
	CView::OnLButtonDblClk(nFlags, point);
}
