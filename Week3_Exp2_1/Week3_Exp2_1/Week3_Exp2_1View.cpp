
// Week3_Exp2_1View.cpp : CWeek3_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_Exp2_1.h"
#endif

#include "Week3_Exp2_1Doc.h"
#include "Week3_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek3_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp2_1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CWeek3_Exp2_1View ����/����

CWeek3_Exp2_1View::CWeek3_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_Exp2_1View::~CWeek3_Exp2_1View()
{
}

BOOL CWeek3_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp2_1View ����

void CWeek3_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek3_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_Exp2_1View ���

#ifdef _DEBUG
void CWeek3_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp2_1Doc* CWeek3_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp2_1Doc)));
	return (CWeek3_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp2_1View ��Ϣ�������


void CWeek3_Exp2_1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�����������");
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_Exp2_1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString s = _T("�������̧��");
	dc.TextOutW(200, 200, s);
	CView::OnLButtonDown(nFlags, point);
	CView::OnLButtonUp(nFlags, point);
}
