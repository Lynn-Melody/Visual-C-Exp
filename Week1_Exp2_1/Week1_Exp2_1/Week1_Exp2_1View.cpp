
// Week1_Exp2_1View.cpp : CWeek1_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_1.h"
#endif

#include "Week1_Exp2_1Doc.h"
#include "Week1_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek1_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_1View ����/����

CWeek1_Exp2_1View::CWeek1_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek1_Exp2_1View::~CWeek1_Exp2_1View()
{
}

BOOL CWeek1_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_1View ����

void CWeek1_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1_Exp2_1View ���

#ifdef _DEBUG
void CWeek1_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_1Doc* CWeek1_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_1Doc)));
	return (CWeek1_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_1View ��Ϣ�������


void CWeek1_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CWeek1_Exp2_1Doc * pDoc = GetDocument();
	dc.TextOutW(200, 200, pDoc->num);
	CView::OnLButtonDown(nFlags, point);
}
