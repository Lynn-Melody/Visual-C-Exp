
// Week5_Exp2_2View.cpp : CWeek5_Exp2_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week5_Exp2_2.h"
#endif

#include "Week5_Exp2_2Doc.h"
#include "Week5_Exp2_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek5_Exp2_2View

IMPLEMENT_DYNCREATE(CWeek5_Exp2_2View, CView)

BEGIN_MESSAGE_MAP(CWeek5_Exp2_2View, CView)
END_MESSAGE_MAP()

// CWeek5_Exp2_2View ����/����

CWeek5_Exp2_2View::CWeek5_Exp2_2View()
{
	// TODO: �ڴ˴���ӹ������
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	//m_Bitmap.LoadBitmapW(IDB_MITMAP1);
	BITMAP BM;
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;

}

CWeek5_Exp2_2View::~CWeek5_Exp2_2View()
{
}

BOOL CWeek5_Exp2_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_2View ����

void CWeek5_Exp2_2View::OnDraw(CDC* pDC)
{
	CWeek5_Exp2_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0, 0, m_nWidth, m_nHeight, &MemDC, 0, 0, SRCCOPY);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek5_Exp2_2View ���

#ifdef _DEBUG
void CWeek5_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_2Doc* CWeek5_Exp2_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_2Doc)));
	return (CWeek5_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_2View ��Ϣ�������
