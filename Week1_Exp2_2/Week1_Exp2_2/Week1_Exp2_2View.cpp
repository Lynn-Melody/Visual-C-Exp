
// Week1_Exp2_2View.cpp : CWeek1_Exp2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_2.h"
#endif

#include "Week1_Exp2_2Doc.h"
#include "Week1_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek1_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_2View ����/����

CWeek1_Exp2_2View::CWeek1_Exp2_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek1_Exp2_2View::~CWeek1_Exp2_2View()
{
}

BOOL CWeek1_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_2View ����

void CWeek1_Exp2_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1_Exp2_2View ���

#ifdef _DEBUG
void CWeek1_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_2Doc* CWeek1_Exp2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_2Doc)));
	return (CWeek1_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_2View ��Ϣ�������


void CWeek1_Exp2_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek1_Exp2_2Doc * pDoc = GetDocument();
	pDoc->acount++;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek1_Exp2_2View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek1_Exp2_2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	int n = pDoc->acount;
	CString s;
	s.Format(_T("����������%d��"), n);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
