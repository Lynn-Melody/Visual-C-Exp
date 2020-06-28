
// Week4_Exp2_1View.cpp : CWeek4_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4_Exp2_1.h"
#endif

#include "Week4_Exp2_1Doc.h"
#include "Week4_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek4_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek4_Exp2_1View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek4_Exp2_1View ����/����

CWeek4_Exp2_1View::CWeek4_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������
	p.x = 60;
	p.y = 60;
}

CWeek4_Exp2_1View::~CWeek4_Exp2_1View()
{
}

BOOL CWeek4_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp2_1View ����

void CWeek4_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek4_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_Exp2_1View ���

#ifdef _DEBUG
void CWeek4_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp2_1Doc* CWeek4_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp2_1Doc)));
	return (CWeek4_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp2_1View ��Ϣ�������


void CWeek4_Exp2_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek4_Exp2_1Doc* pDoc = GetDocument();
	pDoc->count++;
	CClientDC dc(this);
	dc.MoveTo(p);
	dc.LineTo(point);
	CView::OnMouseMove(nFlags, point);
}


void CWeek4_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Invalidate();
	CWeek4_Exp2_1Doc* pDoc = GetDocument();
	pDoc->count = 0;
	CView::OnLButtonDown(nFlags, point);
}


void CWeek4_Exp2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek4_Exp2_1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s ;
	dc.TextOutW(25, 25, s);
	s.Format(_T("MouseMove������ %d ��"), pDoc->count);
	dc.TextOutW(25, 25, s);
	CView::OnLButtonUp(nFlags, point);
}
