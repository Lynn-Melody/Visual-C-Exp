
// Week7_Exp2_4View.cpp : CWeek7_Exp2_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_Exp2_4.h"
#endif

#include "Week7_Exp2_4Doc.h"
#include "Week7_Exp2_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp2_4View

IMPLEMENT_DYNCREATE(CWeek7_Exp2_4View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp2_4View, CView)
	ON_COMMAND(ID_Dlg0, &CWeek7_Exp2_4View::OnDlg0)
END_MESSAGE_MAP()

// CWeek7_Exp2_4View ����/����

CWeek7_Exp2_4View::CWeek7_Exp2_4View()
{
	// TODO: �ڴ˴���ӹ������
	dlg.str1 = _T("");
	dlg.str3 = _T("");
	dlg.num = 0;
}

CWeek7_Exp2_4View::~CWeek7_Exp2_4View()
{
}

BOOL CWeek7_Exp2_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp2_4View ����

void CWeek7_Exp2_4View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_Exp2_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_Exp2_4View ���

#ifdef _DEBUG
void CWeek7_Exp2_4View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp2_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp2_4Doc* CWeek7_Exp2_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp2_4Doc)));
	return (CWeek7_Exp2_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp2_4View ��Ϣ�������


void CWeek7_Exp2_4View::OnDlg0()
{
	dlg.DoModal();
	// TODO: �ڴ���������������
}
