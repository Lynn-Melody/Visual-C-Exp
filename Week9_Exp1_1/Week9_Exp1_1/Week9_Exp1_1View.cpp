
// Week9_Exp1_1View.cpp : CWeek9_Exp1_1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week9_Exp1_1.h"
#endif

#include "Week9_Exp1_1Doc.h"
#include "Week9_Exp1_1View.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9_Exp1_1View

IMPLEMENT_DYNCREATE(CWeek9_Exp1_1View, CView)

BEGIN_MESSAGE_MAP(CWeek9_Exp1_1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek9_Exp1_1View::OnFileOpen)
	ON_COMMAND(ID_FILE_SAVE_AS, &CWeek9_Exp1_1View::OnFileSaveAs)
END_MESSAGE_MAP()

// CWeek9_Exp1_1View ����/����

CWeek9_Exp1_1View::CWeek9_Exp1_1View()
{
	// TODO: �ڴ˴���ӹ������

}

CWeek9_Exp1_1View::~CWeek9_Exp1_1View()
{
}

BOOL CWeek9_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CWeek9_Exp1_1View ����

void CWeek9_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CWeek9_Exp1_1View ���

#ifdef _DEBUG
void CWeek9_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9_Exp1_1Doc* CWeek9_Exp1_1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9_Exp1_1Doc)));
	return (CWeek9_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9_Exp1_1View ��Ϣ�������


void CWeek9_Exp1_1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		filename = cfd.GetPathName();
		GetDC()->TextOutW(50, 50, filename);
	}

}


void CWeek9_Exp1_1View::OnFileSaveAs()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << CT2A(filename.GetString()) << endl;
	}
}
