
// Week7_Exp1_2View.cpp : CWeek7_Exp1_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week7_Exp1_2.h"
#endif

#include "Week7_Exp1_2Doc.h"
#include "Week7_Exp1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek7_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek7_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek7_Exp1_2View, CView)
	ON_COMMAND(ID_ShowDlg, &CWeek7_Exp1_2View::OnShowdlg)
END_MESSAGE_MAP()

// CWeek7_Exp1_2View ����/����

CWeek7_Exp1_2View::CWeek7_Exp1_2View()
{
	// TODO: �ڴ˴���ӹ������
	dlg = NULL;
}

CWeek7_Exp1_2View::~CWeek7_Exp1_2View()
{
}

BOOL CWeek7_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek7_Exp1_2View ����

void CWeek7_Exp1_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek7_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek7_Exp1_2View ���

#ifdef _DEBUG
void CWeek7_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek7_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek7_Exp1_2Doc* CWeek7_Exp1_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek7_Exp1_2Doc)));
	return (CWeek7_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek7_Exp1_2View ��Ϣ�������


void CWeek7_Exp1_2View::OnShowdlg()
{
	// TODO: �ڴ���������������
	dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->ShowWindow(1);
}
