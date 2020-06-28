
// Week4_Exp2_3View.cpp : CWeek4_Exp2_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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

// CWeek4_Exp2_3View ����/����

CWeek4_Exp2_3View::CWeek4_Exp2_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek4_Exp2_3View::~CWeek4_Exp2_3View()
{
}

BOOL CWeek4_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp2_3View ����

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
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_Exp2_3View ���

#ifdef _DEBUG
void CWeek4_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp2_3Doc* CWeek4_Exp2_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp2_3Doc)));
	return (CWeek4_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp2_3View ��Ϣ�������


void CWeek4_Exp2_3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
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
