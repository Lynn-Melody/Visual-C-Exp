
// Week5_Exp1_2View.cpp : CWeek5_Exp1_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_Exp1_2.h"
#endif

#include "Week5_Exp1_2Doc.h"
#include "Week5_Exp1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek5_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp1_2View, CView)
	ON_COMMAND(ID_drawCircle, &CWeek5_Exp1_2View::Ondrawcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek5_Exp1_2View ����/����

CWeek5_Exp1_2View::CWeek5_Exp1_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek5_Exp1_2View::~CWeek5_Exp1_2View()
{
}

BOOL CWeek5_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp1_2View ����

void CWeek5_Exp1_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek5_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_Exp1_2View ���

#ifdef _DEBUG
void CWeek5_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp1_2Doc* CWeek5_Exp1_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp1_2Doc)));
	return (CWeek5_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp1_2View ��Ϣ�������


void CWeek5_Exp1_2View::Ondrawcircle()
{
	CWeek5_Exp1_2Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	CPoint p = rect.CenterPoint();
	pDoc->r = rect.Height() < rect.Width() ? rect.Height() : rect.Width();
	pDoc->cr = CRect(p.x - 10, p.y - 10, p.x + 10, p.y + 10);
	int color = RGB(150, 130, pDoc->blue);
	CBrush brush(color);
	CClientDC dc(this);
	dc.SelectObject(brush);
	dc.Ellipse(pDoc->cr);
	SetTimer(1, rand() % 400 + 200, NULL);
	// TODO: �ڴ���������������
}


void CWeek5_Exp1_2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek5_Exp1_2Doc* pDoc = GetDocument();
	if (pDoc->cr.Height() + 20 <= pDoc->r)
	{
		pDoc->cr.top -= 10;
		pDoc->cr.bottom += 10;
		pDoc->cr.left -= 10;
		pDoc->cr.right += 10;
		pDoc->blue += 10;
		int color = RGB(150, 130, pDoc->blue);
		CBrush brush(color);
		CClientDC dc(this);
		dc.SelectObject(brush);
		dc.Ellipse(pDoc->cr);
	}
	else
	{
		KillTimer(1);
	}
	CView::OnTimer(nIDEvent);
}
