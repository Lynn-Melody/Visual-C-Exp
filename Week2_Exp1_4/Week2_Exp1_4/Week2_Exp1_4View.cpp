
// Week2_Exp1_4View.cpp : CWeek2_Exp1_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp1_4.h"
#endif

#include "Week2_Exp1_4Doc.h"
#include "Week2_Exp1_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp1_4View

IMPLEMENT_DYNCREATE(CWeek2_Exp1_4View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp1_4View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp1_4View ����/����

CWeek2_Exp1_4View::CWeek2_Exp1_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp1_4View::~CWeek2_Exp1_4View()
{
}

BOOL CWeek2_Exp1_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp1_4View ����

void CWeek2_Exp1_4View::OnDraw(CDC* pDC)
{
	CWeek2_Exp1_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int color = RGB(180,20,180);
	CBrush newBrush(color);
	CBrush* oldBrush = pDC->SelectObject(&newBrush);
	CRect rect;
	GetClientRect(&rect);
	pDC->Ellipse(rect);
}


// CWeek2_Exp1_4View ���

#ifdef _DEBUG
void CWeek2_Exp1_4View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp1_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp1_4Doc* CWeek2_Exp1_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp1_4Doc)));
	return (CWeek2_Exp1_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp1_4View ��Ϣ�������
