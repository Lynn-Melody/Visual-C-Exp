
// Week2_Exp2_3View.cpp : CWeek2_Exp2_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week2_Exp2_3.h"
#endif

#include "Week2_Exp2_3Doc.h"
#include "Week2_Exp2_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek2_Exp2_3View

IMPLEMENT_DYNCREATE(CWeek2_Exp2_3View, CView)

BEGIN_MESSAGE_MAP(CWeek2_Exp2_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek2_Exp2_3View ����/����

CWeek2_Exp2_3View::CWeek2_Exp2_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek2_Exp2_3View::~CWeek2_Exp2_3View()
{
}

BOOL CWeek2_Exp2_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek2_Exp2_3View ����

void CWeek2_Exp2_3View::OnDraw(CDC* /*pDC*/)
{
	CWeek2_Exp2_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek2_Exp2_3View ���

#ifdef _DEBUG
void CWeek2_Exp2_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek2_Exp2_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek2_Exp2_3Doc* CWeek2_Exp2_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek2_Exp2_3Doc)));
	return (CWeek2_Exp2_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek2_Exp2_3View ��Ϣ�������


void CWeek2_Exp2_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek2_Exp2_3Doc* pDoc=GetDocument();
	pDoc->count++;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek2_Exp2_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CWeek2_Exp2_3Doc* pDoc = GetDocument();
	CString s;
	s.Format(_T("�����������%d��"), pDoc->count);
	dc.TextOutW(200, 200, s);
	CView::OnRButtonDown(nFlags, point);
}
