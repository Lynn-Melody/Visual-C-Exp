
// Week3_Exp3_3View.cpp : CWeek3_Exp3_3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week3_Exp3_3.h"
#endif

#include "Week3_Exp3_3Doc.h"
#include "Week3_Exp3_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek3_Exp3_3View

IMPLEMENT_DYNCREATE(CWeek3_Exp3_3View, CView)

BEGIN_MESSAGE_MAP(CWeek3_Exp3_3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek3_Exp3_3View ����/����

CWeek3_Exp3_3View::CWeek3_Exp3_3View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek3_Exp3_3View::~CWeek3_Exp3_3View()
{
}

BOOL CWeek3_Exp3_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek3_Exp3_3View ����

void CWeek3_Exp3_3View::OnDraw(CDC* pDC)
{
	CWeek3_Exp3_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (temple)
	{
		int a = 50;
		for (int i = 0; i < 3; i++)
		{
			CRect rc(a, 120, a+150, 230);
			pDoc->array.Add(rc);
	/*		CString str;
			str.Format(_T("hgauxg   %d"), pDoc->array.GetSize());*/
			a += 250;
		}
		temple = false;
	}
	for (int i = 0; i < 3; i++)
	{
		CRect rc = pDoc->array.GetAt(i);
		pDC->Rectangle(rc);
		CString s;
		s.Format(_T("%c"), i + 'A');
		pDC->TextOutW(rc.CenterPoint().x, 100, s);
		if (pDoc->a[i] >= 0)
		{
			s.Format(_T("%d"),pDoc->a[i]);
			pDC->TextOutW(rc.CenterPoint().x, rc.CenterPoint().y, s);
		}
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek3_Exp3_3View ���

#ifdef _DEBUG
void CWeek3_Exp3_3View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek3_Exp3_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek3_Exp3_3Doc* CWeek3_Exp3_3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek3_Exp3_3Doc)));
	return (CWeek3_Exp3_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek3_Exp3_3View ��Ϣ�������


void CWeek3_Exp3_3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_Exp3_3Doc* pDoc = GetDocument();
	CRect rc;
	int i;
	for (i = 0; i < 2; i++)
	{
		 rc = pDoc->array.GetAt(i);
		 if (point.x >= rc.left&&point.x <= rc.right&&point.y >= rc.top&&point.y <= rc.bottom)
			 break;
	}
	if (i < 2)
	{
		pDoc->a[i] = rand();
		pDoc->a[2] = -1;
		Invalidate();
	}
	else
	{
		CClientDC dc(this);
		CString s = _T("�����Ч");
		dc.TextOutW(380, 50, s);
	}

	CView::OnLButtonDown(nFlags, point);
}


void CWeek3_Exp3_3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CWeek3_Exp3_3Doc* pDoc = GetDocument();
	CRect rc = pDoc->array.GetAt(2);
	if (point.x >= rc.left&&point.x <= rc.right&&point.y >= rc.top&&point.y <= rc.bottom)
	{
		if (pDoc->a[0] >= 0 && pDoc->a[1] >= 0);
		{
			pDoc->a[2] = pDoc->a[0] + pDoc->a[1];
			Invalidate();
		}
	}
	CView::OnRButtonDown(nFlags, point);
}
