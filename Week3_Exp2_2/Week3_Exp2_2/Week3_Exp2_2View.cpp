
// Week3_Exp2_2View.cpp : CWeek3_Exp2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_Exp2_2.h"
#endif

#include "Week3_Exp2_2Doc.h"
#include "Week3_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek3_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp2_2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp2_2View ����/����

CWeek3_Exp2_2View::CWeek3_Exp2_2View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_Exp2_2View::~CWeek3_Exp2_2View()
{
}

BOOL CWeek3_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp2_2View ����

void CWeek3_Exp2_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek3_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_Exp2_2View ���

#ifdef _DEBUG
void CWeek3_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp2_2Doc* CWeek3_Exp2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp2_2Doc)));
	return (CWeek3_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp2_2View ��Ϣ�������


void CWeek3_Exp2_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_Exp2_2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	s.Format(_T("A+B=%d"), pDoc->A + pDoc->B);
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}
