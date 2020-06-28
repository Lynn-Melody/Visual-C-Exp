
// Week6_Exp1_2View.cpp : CWeek6_Exp1_2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week6_Exp1_2.h"
#endif

#include "Week6_Exp1_2Doc.h"
#include "Week6_Exp1_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek6_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek6_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek6_Exp1_2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek6_Exp1_2View::OnFileOpen)
END_MESSAGE_MAP()

// CWeek6_Exp1_2View ����/����

CWeek6_Exp1_2View::CWeek6_Exp1_2View()
{
	// TODO: �ڴ˴���ӹ������
	set = false;
}

CWeek6_Exp1_2View::~CWeek6_Exp1_2View()
{
}

BOOL CWeek6_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek6_Exp1_2View ����

void CWeek6_Exp1_2View::OnDraw(CDC* pDC)
{
	CWeek6_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (set)
	{
		int sx, sy, w, h;
		w = pDoc->img.GetWidth();
		h = pDoc->img.GetHeight();
		float ratio = 1.0*w / h;
		CRect rect;
		GetClientRect(&rect);
		if (w > rect.Width())
		{
			w = rect.Width();
			h = w / ratio;
		}
		if (h > rect.Height())
		{
			h = rect.Height();
			w = h*ratio;
		}
		sx = (rect.Width() - w) / 2;
		sy = (rect.Height() - h) / 2;
		CClientDC dc(this);
		pDoc->img.Draw(dc.m_hDC, sx, sy, w, h);

	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek6_Exp1_2View ���

#ifdef _DEBUG
void CWeek6_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6_Exp1_2Doc* CWeek6_Exp1_2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6_Exp1_2Doc)));
	return (CWeek6_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6_Exp1_2View ��Ϣ�������


void CWeek6_Exp1_2View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		CWeek6_Exp1_2Doc* pDoc = GetDocument();
		pDoc->img.~CImage();//�ͷ�ԭ��ͼƬ��
		pDoc->img.Load(filename);
		set = true;
		Invalidate();
	}
	// TODO: �ڴ���������������
}
