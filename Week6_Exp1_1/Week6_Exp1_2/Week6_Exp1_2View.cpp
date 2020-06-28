
// Week6_Exp1_2View.cpp : CWeek6_Exp1_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek6_Exp1_2View 构造/析构

CWeek6_Exp1_2View::CWeek6_Exp1_2View()
{
	// TODO: 在此处添加构造代码
	set = false;
}

CWeek6_Exp1_2View::~CWeek6_Exp1_2View()
{
}

BOOL CWeek6_Exp1_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek6_Exp1_2View 绘制

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
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek6_Exp1_2View 诊断

#ifdef _DEBUG
void CWeek6_Exp1_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek6_Exp1_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek6_Exp1_2Doc* CWeek6_Exp1_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek6_Exp1_2Doc)));
	return (CWeek6_Exp1_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek6_Exp1_2View 消息处理程序


void CWeek6_Exp1_2View::OnFileOpen()
{
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename;
		filename = cfd.GetPathName();
		CWeek6_Exp1_2Doc* pDoc = GetDocument();
		pDoc->img.~CImage();//释放原有图片；
		pDoc->img.Load(filename);
		set = true;
		Invalidate();
	}
	// TODO: 在此添加命令处理程序代码
}
