
// Week3_Exp1_1View.cpp : CWeek3_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_Exp1_1.h"
#endif

#include "Week3_Exp1_1Doc.h"
#include "Week3_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek3_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp1_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp1_1View ����/����

CWeek3_Exp1_1View::CWeek3_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_Exp1_1View::~CWeek3_Exp1_1View()
{
}

BOOL CWeek3_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp1_1View ����

void CWeek3_Exp1_1View::OnDraw(CDC* pDC)
{
	CWeek3_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Ellipse(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_Exp1_1View ���

#ifdef _DEBUG
void CWeek3_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp1_1Doc* CWeek3_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp1_1Doc)));
	return (CWeek3_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp1_1View ��Ϣ�������


void CWeek3_Exp1_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect rc;
	GetClientRect(&rc);
	if (rc.Width() > rc.Height())
	{
		int a = (rc.Width() - rc.Height()) / 2;
		rect = CRect(a, 0, rc.Width() - a, rc.Height());
	}
	else
	{
		int a = (rc.Height() - rc.Width()) / 2;
		rect = CRect(0, a, rc.Width(), rc.Height() - a);
	}
//	CClientDC dc(this);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
