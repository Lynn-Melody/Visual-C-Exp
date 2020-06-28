
// Week5_Exp2_2View.cpp : CWeek5_Exp2_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek5_Exp2_2View 构造/析构

CWeek5_Exp2_2View::CWeek5_Exp2_2View()
{
	// TODO: 在此处添加构造代码
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
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek5_Exp2_2View 绘制

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
	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek5_Exp2_2View 诊断

#ifdef _DEBUG
void CWeek5_Exp2_2View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek5_Exp2_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek5_Exp2_2Doc* CWeek5_Exp2_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek5_Exp2_2Doc)));
	return (CWeek5_Exp2_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek5_Exp2_2View 消息处理程序
