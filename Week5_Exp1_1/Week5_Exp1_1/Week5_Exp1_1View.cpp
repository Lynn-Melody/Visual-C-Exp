
// Week5_Exp1_1View.cpp : CWeek5_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_Exp1_1.h"
#endif

#include "Week5_Exp1_1Doc.h"
#include "Week5_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek5_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp1_1View, CView)
	ON_COMMAND(ID_drawCircle, &CWeek5_Exp1_1View::Ondrawcircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CWeek5_Exp1_1View ����/����

CWeek5_Exp1_1View::CWeek5_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek5_Exp1_1View::~CWeek5_Exp1_1View()
{
}

BOOL CWeek5_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp1_1View ����

void CWeek5_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek5_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_Exp1_1View ���

#ifdef _DEBUG
void CWeek5_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp1_1Doc* CWeek5_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp1_1Doc)));
	return (CWeek5_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp1_1View ��Ϣ�������


void CWeek5_Exp1_1View::Ondrawcircle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	//dc.TextOutW(200, 255, _T("hello world"));
	CRect rect;
	GetClientRect(rect);
	r = rect.Height() < rect.Width() ? rect.Height() : rect.Width();
	CPoint p = rect.CenterPoint();
	cr = CRect(p.x - 10, p.y - 10, p.x + 10, p.y + 10);
	dc.Ellipse(cr);
	SetTimer(1, rand() % 400 + 200, NULL);

}


void CWeek5_Exp1_1View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (cr.Height() + 20 <= r)
	{
		cr.top -= 10;
		cr.bottom += 10;
		cr.left -= 10;
		cr.right += 10;
		CClientDC dc(this);
		dc.Ellipse(cr);
	}
	else
	{
		KillTimer(1);
	}
	CView::OnTimer(nIDEvent);
}
