
// Week8_Exp1_1View.cpp : CWeek8_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week8_Exp1_1.h"
#endif

#include "Week8_Exp1_1Doc.h"
#include "Week8_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek8_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek8_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek8_Exp1_1View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_Dlag1, &CWeek8_Exp1_1View::OnDlag1)
END_MESSAGE_MAP()

// CWeek8_Exp1_1View ����/����

CWeek8_Exp1_1View::CWeek8_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������
	dlg = new Dlg1;
	dlg->Create(IDD_DIALOG1);
}

CWeek8_Exp1_1View::~CWeek8_Exp1_1View()
{
}

BOOL CWeek8_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek8_Exp1_1View ����

void CWeek8_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek8_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek8_Exp1_1View ���

#ifdef _DEBUG
void CWeek8_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek8_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek8_Exp1_1Doc* CWeek8_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek8_Exp1_1Doc)));
	return (CWeek8_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek8_Exp1_1View ��Ϣ�������


void CWeek8_Exp1_1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		str = cfd.GetPathName();
		GetDC()->TextOutW(50, 50, str);

	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CWeek8_Exp1_1View::OnDlag1()
{
	// TODO: �ڴ���������������
	dlg->ShowWindow(1);
/*	dlg.DoModal();*/
	dlg->str = str;
	dlg->lbox.AddString(str);
}
