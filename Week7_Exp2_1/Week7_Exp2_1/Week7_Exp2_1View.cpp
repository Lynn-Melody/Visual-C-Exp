
// Week7_Exp2_1View.cpp : CWeek7_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_Exp2_1.h"
#endif

#include "Week7_Exp2_1Doc.h"
#include "Week7_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek7_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp2_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek7_Exp2_1View ����/����

CWeek7_Exp2_1View::CWeek7_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������
	rect = CRect(100,100, 160, 160);
	move = false;
}

CWeek7_Exp2_1View::~CWeek7_Exp2_1View()
{
}

BOOL CWeek7_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp2_1View ����

void CWeek7_Exp2_1View::OnDraw(CDC* pDC)
{
	CWeek7_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(rect);
	pDC->TextOutW(5, 5, _T("�ھ����ڵ����������ʼ�ƶ�����"));
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_Exp2_1View ���

#ifdef _DEBUG
void CWeek7_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp2_1Doc* CWeek7_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp2_1Doc)));
	return (CWeek7_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp2_1View ��Ϣ�������


void CWeek7_Exp2_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (point.x >= rect.left&&point.x <= rect.right&&point.y >= rect.top&&point.y <= rect.bottom)
		move = true;
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek7_Exp2_1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (move)
	{
		rect.top = point.y - 30;
		rect.left = point.x - 30;
		rect.bottom = point.y + 30;
		rect.right = point.x + 30;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void CWeek7_Exp2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	move=false;
	CView::OnLButtonUp(nFlags, point);
}


void CWeek7_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (point.x >= rect.left&&point.x <= rect.right&&point.y >= rect.top&&point.y <= rect.bottom)
		move = true;
	CView::OnLButtonDown(nFlags, point);
}
