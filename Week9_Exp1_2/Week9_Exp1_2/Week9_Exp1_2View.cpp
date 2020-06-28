
// Week9_Exp1_2View.cpp : CWeek9_Exp1_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Week9_Exp1_2.h"
#endif

#include "Week9_Exp1_2Doc.h"
#include "Week9_Exp1_2View.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CWeek9_Exp1_2View

IMPLEMENT_DYNCREATE(CWeek9_Exp1_2View, CView)

BEGIN_MESSAGE_MAP(CWeek9_Exp1_2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CWeek9_Exp1_2View::OnFileOpen)
END_MESSAGE_MAP()

// CWeek9_Exp1_2View 构造/析构

CWeek9_Exp1_2View::CWeek9_Exp1_2View()
{
	// TODO: 在此处添加构造代码

}

CWeek9_Exp1_2View::~CWeek9_Exp1_2View()
{
}

BOOL CWeek9_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9_Exp1_2View 绘制

void CWeek9_Exp1_2View::OnDraw(CDC* /*pDC*/)
{
	CWeek9_Exp1_2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9_Exp1_2View 诊断

#ifdef _DEBUG
void CWeek9_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9_Exp1_2Doc* CWeek9_Exp1_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9_Exp1_2Doc)));
	return (CWeek9_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9_Exp1_2View 消息处理程序


void CWeek9_Exp1_2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ifstream ifs(cfd.GetPathName());
		string path;
		ifs >> path;
		CImage img;
		CClientDC dc(this);
	//	dc.TextOutW(200, 200, CString(path.c_str()));
		img.Load(CString(path.c_str()));
		int w = img.GetWidth();
		int h = img.GetHeight();
		float rt = 1.0*w / h;
		CRect cr;
		GetClientRect(&cr);
		if (w > cr.Width())
		{
			w = cr.Width();
			h = w / rt;
		}
		if (h > cr.Height())
		{
			h = cr.Height();
			w = rt*h;
		}
		int sx = (cr.Width() - w) / 2;
		int sy = (cr.Height() - h) / 2;
		img.Draw(dc.m_hDC, sx, sy,w, h);


	}
}
