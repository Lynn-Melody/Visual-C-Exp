
// Week6_Exp1_1View.cpp : CWeek6_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek6_Exp1_1View 构造/析构

CWeek6_Exp1_1View::CWeek6_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek6_Exp1_1View::~CWeek6_Exp1_1View()
{
}

BOOL CWeek6_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek6_Exp1_1View 绘制

void CWeek6_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek6_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek6_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek6_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6_Exp1_1Doc* CWeek6_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6_Exp1_1Doc)));
	return (CWeek6_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6_Exp1_1View 消息处理程序


void CWeek6_Exp1_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
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
