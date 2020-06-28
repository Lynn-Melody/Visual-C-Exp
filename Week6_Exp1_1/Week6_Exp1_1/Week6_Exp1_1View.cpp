
// Week6_Exp1_1View.cpp : CWeek6_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week6_Exp1_1.h"
#endif

#include "Week6_Exp1_1Doc.h"
#include "Week6_Exp1_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek6_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek6_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek6_Exp1_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek6_Exp1_1View::OnFileOpen)
END_MESSAGE_MAP()

// CWeek6_Exp1_1View ����/����

CWeek6_Exp1_1View::CWeek6_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek6_Exp1_1View::~CWeek6_Exp1_1View()
{
}

BOOL CWeek6_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek6_Exp1_1View ����

void CWeek6_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek6_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek6_Exp1_1View ���

#ifdef _DEBUG
void CWeek6_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6_Exp1_1Doc* CWeek6_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6_Exp1_1Doc)));
	return (CWeek6_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6_Exp1_1View ��Ϣ�������


void CWeek6_Exp1_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		CClientDC dc(this);
		CRect rect;
		GetClientRect(&rect);
		int sx, sy, w, h;
		w = img.GetWidth();
		h = img.GetHeight();
		float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
		if (w > rect.Width())
		{
			w = rect.Width();
			h = w / img_ratio;
		}
		if (h > rect.Height())
		{
			h = rect.Height();
			w = h*img_ratio;
		}
		sx = (rect.Width() - w) / 2;
		sy = (rect.Height() - h) / 2;
		img.Draw(dc.m_hDC, sx, sy, w, h);
	}
}
