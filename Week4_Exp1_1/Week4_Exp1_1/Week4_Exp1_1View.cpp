
// Week4_Exp1_1View.cpp : CWeek4_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4_Exp1_1.h"
#endif

#include "Week4_Exp1_1Doc.h"
#include "Week4_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek4_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek4_Exp1_1View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek4_Exp1_1View ����/����

CWeek4_Exp1_1View::CWeek4_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek4_Exp1_1View::~CWeek4_Exp1_1View()
{
}

BOOL CWeek4_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp1_1View ����

void CWeek4_Exp1_1View::OnDraw(CDC* pDC)
{
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_Exp1_1View ���

#ifdef _DEBUG
void CWeek4_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp1_1Doc* CWeek4_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp1_1Doc)));
	return (CWeek4_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp1_1View ��Ϣ�������


void CWeek4_Exp1_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CString s;
	s.Format(_T("��굱ǰλ�ã�x=%d     y=%d"), point.x, point.y);
	CClientDC dc(this);
	dc.TextOutW(30, 30, s);
	CView::OnMouseMove(nFlags, point);
}


void CWeek4_Exp1_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	pDoc->p = point;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek4_Exp1_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek4_Exp1_1Doc* pDoc = GetDocument();
	int x1, y1, x2, y2;
	if (pDoc->p.x < point.x)
	{
		x1 = pDoc->p.x;
		x2 = point.x;
	}
	else
	{
		x1 = point.x;
		x2 = pDoc->p.x;
	}
	if (pDoc->p.y < point.y)
	{
		y1 = pDoc->p.y;
		y2 = point.y;
	}
	else
	{
		y1 = point.y;
		y2 = pDoc->p.y;
	}
	CRect rect(x1, y1, x2, y2);
	CClientDC dc(this);
	dc.Rectangle(rect);
	CView::OnLButtonUp(nFlags, point);
}
