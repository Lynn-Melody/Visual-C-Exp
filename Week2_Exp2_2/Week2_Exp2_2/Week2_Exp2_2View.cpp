
// Week2_Exp2_2View.cpp : CWeek2_Exp2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp2_2.h"
#endif

#include "Week2_Exp2_2Doc.h"
#include "Week2_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek2_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp2_2View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp2_2View ����/����

CWeek2_Exp2_2View::CWeek2_Exp2_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp2_2View::~CWeek2_Exp2_2View()
{
}

BOOL CWeek2_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp2_2View ����

void CWeek2_Exp2_2View::OnDraw(CDC* pDC)
{
	CWeek2_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s2;
	s2.Format(_T("%d"), pDoc->A);
	pDC->TextOutW(200, 200, pDoc->s);
	pDC->TextOutW(300, 200, s2);
}


// CWeek2_Exp2_2View ���

#ifdef _DEBUG
void CWeek2_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp2_2Doc* CWeek2_Exp2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp2_2Doc)));
	return (CWeek2_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp2_2View ��Ϣ�������
