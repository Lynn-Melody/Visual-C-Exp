
// Week1_Exp2_PracticeView.cpp : CWeek1_Exp2_PracticeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_Practice.h"
#endif

#include "Week1_Exp2_PracticeDoc.h"
#include "Week1_Exp2_PracticeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek1_Exp2_PracticeView

IMPLEMENT_DYNCREATE(CWeek1_Exp2_PracticeView, CView)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_PracticeView, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CWeek1_Exp2_PracticeView ����/����

CWeek1_Exp2_PracticeView::CWeek1_Exp2_PracticeView()
{
	// TODO: �ڴ˴���ӹ������
	s2 = _T("StringB_From_View");
}

CWeek1_Exp2_PracticeView::~CWeek1_Exp2_PracticeView()
{
}

BOOL CWeek1_Exp2_PracticeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek1_Exp2_PracticeView ����

void CWeek1_Exp2_PracticeView::OnDraw(CDC* /*pDC*/)
{
	CWeek1_Exp2_PracticeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek1_Exp2_PracticeView ���

#ifdef _DEBUG
void CWeek1_Exp2_PracticeView::AssertValid() const
{
	CView::AssertValid();
}

void CWeek1_Exp2_PracticeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek1_Exp2_PracticeDoc* CWeek1_Exp2_PracticeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek1_Exp2_PracticeDoc)));
	return (CWeek1_Exp2_PracticeDoc*)m_pDocument;
}
#endif //_DEBUG


// CWeek1_Exp2_PracticeView ��Ϣ�������


void CWeek1_Exp2_PracticeView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CWeek1_Exp2_PracticeDoc* pDoc = GetDocument();
	CString str;
	str.Format(_T("�ϲ�����ַ�����%s%s"), pDoc->s1, s2);
	dc.TextOutW(200, 200, str);
	CView::OnLButtonDown(nFlags, point);
}
