
// Week2_Exp1_3View.cpp : CWeek2_Exp1_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp1_3.h"
#endif

#include "Week2_Exp1_3Doc.h"
#include "Week2_Exp1_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp1_3View

IMPLEMENT_DYNCREATE(CWeek2_Exp1_3View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp1_3View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp1_3View ����/����

CWeek2_Exp1_3View::CWeek2_Exp1_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp1_3View::~CWeek2_Exp1_3View()
{
}

BOOL CWeek2_Exp1_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp1_3View ����

void CWeek2_Exp1_3View::OnDraw(CDC* pDC)
{
	CWeek2_Exp1_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rect;
	GetClientRect(&rect);
	pDC->Ellipse(rect);

}


// CWeek2_Exp1_3View ���

#ifdef _DEBUG
void CWeek2_Exp1_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp1_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp1_3Doc* CWeek2_Exp1_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp1_3Doc)));
	return (CWeek2_Exp1_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp1_3View ��Ϣ�������
