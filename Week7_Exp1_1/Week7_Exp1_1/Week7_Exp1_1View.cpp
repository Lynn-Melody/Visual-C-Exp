
// Week7_Exp1_1View.cpp : CWeek7_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_Exp1_1.h"
#endif

#include "Week7_Exp1_1Doc.h"
#include "Week7_Exp1_1View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek7_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp1_1View, CView)
	ON_COMMAND(ID_ShowDlg, &CWeek7_Exp1_1View::OnShowdlg)
END_MESSAGE_MAP()

// CWeek7_Exp1_1View ����/����

CWeek7_Exp1_1View::CWeek7_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek7_Exp1_1View::~CWeek7_Exp1_1View()
{
}

BOOL CWeek7_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp1_1View ����

void CWeek7_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_Exp1_1View ���

#ifdef _DEBUG
void CWeek7_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp1_1Doc* CWeek7_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp1_1Doc)));
	return (CWeek7_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp1_1View ��Ϣ�������


void CWeek7_Exp1_1View::OnShowdlg()
{
	MyDlg dlg;
	dlg.DoModal();
	GetDC()->TextOutW(350, 200, _T("�����˳��Ի���"));
	// TODO: �ڴ���������������
}
