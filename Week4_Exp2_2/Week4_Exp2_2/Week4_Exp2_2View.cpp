
// Week4_Exp2_2View.cpp : CWeek4_Exp2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week4_Exp2_2.h"
#endif

#include "Week4_Exp2_2Doc.h"
#include "Week4_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek4_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek4_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek4_Exp2_2View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek4_Exp2_2View ����/����

CWeek4_Exp2_2View::CWeek4_Exp2_2View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
}

CWeek4_Exp2_2View::~CWeek4_Exp2_2View()
{
}

BOOL CWeek4_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek4_Exp2_2View ����

void CWeek4_Exp2_2View::OnDraw(CDC* pDC)
{
	CWeek4_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		GetClientRect(&rect);
		CPoint p = rect.CenterPoint();
		rect.left = p.x - 30;
		rect.right = p.x + 30;
		rect.top = p.y - 30;
		rect.bottom = p.y + 30;
		set = false;
	}
	pDC->Rectangle(rect);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek4_Exp2_2View ���

#ifdef _DEBUG
void CWeek4_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek4_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek4_Exp2_2Doc* CWeek4_Exp2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek4_Exp2_2Doc)));
	return (CWeek4_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek4_Exp2_2View ��Ϣ�������


void CWeek4_Exp2_2View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect rc;
	GetClientRect(rc);
	switch (nChar)
	{
	case VK_LEFT:
		if (rect.left - 20 >= rc.left)
		{
			rect.left -= 20;
			rect.right -= 20;
		}
		else
		{
			rect.left = rc.left;
			rect.right = rc.left+rect.Width();
		}
		Invalidate();
		break;
	case VK_RIGHT:
		if (rect.right + 20 <= rc.right)
		{
			rect.left += 20;
			rect.right += 20;
		}
		else
		{
			rect.right = rc.right;
			rect.left = rc.right - rect.Width();
		}
		Invalidate();
		break;
	case VK_UP:
		if (rect.top - 20 >= rc.top)
		{
			rect.top -= 20;
			rect.bottom -= 20;
		}
		else
		{
			rect.top = rc.top;
			rect.bottom = rc.top + rect.Height();
		}
		Invalidate();
		break;
	case VK_DOWN:
		if (rect.bottom + 20 <= rc.bottom)
		{
			rect.bottom += 20;
			rect.top += 20;
		}
		else
		{
			rect.bottom = rc.bottom;
			rect.top = rc.bottom - rect.Height();
		}
		Invalidate();
		break;
	case VK_HOME:
		if (rect.top - 20 >= rc.top&&rect.left - 20 >= rc.left)
		{
			rect.top -= 20;
			rect.left -= 20;
		}
		Invalidate();
		break;
	case VK_END:
		if (rect.right - rect.left > 60)
		{
			rect.left += 20;
			rect.top += 20;
		}
		Invalidate();
		break;
	default:
		break;
	}
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CWeek4_Exp2_2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	rect.left = rect.right - 60;
	rect.top = rect.bottom - 60;
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
