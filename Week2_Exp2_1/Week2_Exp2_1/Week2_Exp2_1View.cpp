
// Week2_Exp2_1View.cpp : CWeek2_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp2_1.h"
#endif

#include "Week2_Exp2_1Doc.h"
#include "Week2_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek2_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp2_1View, CView)
END_MESSAGE_MAP()

// CWeek2_Exp2_1View ����/����

CWeek2_Exp2_1View::CWeek2_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp2_1View::~CWeek2_Exp2_1View()
{
}

BOOL CWeek2_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp2_1View ����

void CWeek2_Exp2_1View::OnDraw(CDC* pDC)
{
	CWeek2_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("����Lynn");
	int A = 8866;
	CString s2;
	s2.Format(_T("%d"), A);
	pDC->TextOutW(200, 200, s);
	pDC->TextOutW(300, 200, s2);
}


// CWeek2_Exp2_1View ���

#ifdef _DEBUG
void CWeek2_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp2_1Doc* CWeek2_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp2_1Doc)));
	return (CWeek2_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp2_1View ��Ϣ�������
