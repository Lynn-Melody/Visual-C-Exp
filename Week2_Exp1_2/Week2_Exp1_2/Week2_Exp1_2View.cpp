
// Week2_Exp1_2View.cpp : CWeek2_Exp1_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp1_2.h"
#endif

#include "Week2_Exp1_2Doc.h"
#include "Week2_Exp1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek2_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp1_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_Exp1_2View ����/����

CWeek2_Exp1_2View::CWeek2_Exp1_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp1_2View::~CWeek2_Exp1_2View()
{
}

BOOL CWeek2_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp1_2View ����

void CWeek2_Exp1_2View::OnDraw(CDC* pDC)
{
	CWeek2_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	int length = pDoc->arry.GetSize();
	for (int i = 0; i < length ; i++)
	{
		CRect rc = pDoc->arry.GetAt(i);
		pDC->Ellipse(rc);
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_Exp1_2View ���

#ifdef _DEBUG
void CWeek2_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp1_2Doc* CWeek2_Exp1_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp1_2Doc)));
	return (CWeek2_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp1_2View ��Ϣ�������


void CWeek2_Exp1_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek2_Exp1_2Doc* pDoc = GetDocument();
	CRect rect;
	GetClientRect(&rect);
	int a;
	if (point.x < (rect.right - point.x))
		a = point.x;
	else
		a = rect.right - point.x;
	int b;
	if (point.y < (rect.bottom - point.y))
		b = point.y;
	else
		b = rect.bottom - point.y;
	int c = a < b ? a : b;
	int r = rand() % c + 1;
	CRect rc(point.x - r, point.y - r, point.x + r, point.y + r);
	CClientDC dc(this);
	dc.Ellipse(rc);
	pDoc->arry.Add(rc);
	CView::OnLButtonDown(nFlags, point);
}
