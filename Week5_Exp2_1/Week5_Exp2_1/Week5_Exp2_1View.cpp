
// Week5_Exp2_1View.cpp : CWeek5_Exp2_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_Exp2_1.h"
#endif

#include "Week5_Exp2_1Doc.h"
#include "Week5_Exp2_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp2_1View

IMPLEMENT_DYNCREATE(CWeek5_Exp2_1View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp2_1View, CView)
	ON_COMMAND(ID_ShowName, &CWeek5_Exp2_1View::OnShowname)
END_MESSAGE_MAP()

// CWeek5_Exp2_1View ����/����

CWeek5_Exp2_1View::CWeek5_Exp2_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek5_Exp2_1View::~CWeek5_Exp2_1View()
{
}

BOOL CWeek5_Exp2_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_1View ����

void CWeek5_Exp2_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek5_Exp2_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_Exp2_1View ���

#ifdef _DEBUG
void CWeek5_Exp2_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_1Doc* CWeek5_Exp2_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_1Doc)));
	return (CWeek5_Exp2_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_1View ��Ϣ�������


void CWeek5_Exp2_1View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s = _T("��ͼ�");
	CClientDC dc(this);
	dc.TextOutW(300, 200, s);

}
