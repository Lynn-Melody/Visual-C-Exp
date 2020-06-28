
// Week9_Exp1_1View.cpp : CWeek9_Exp1_1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CWeek9_Exp1_1View 构造/析构

CWeek9_Exp1_1View::CWeek9_Exp1_1View()
{
	// TODO: 在此处添加构造代码

}

CWeek9_Exp1_1View::~CWeek9_Exp1_1View()
{
}

BOOL CWeek9_Exp1_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CWeek9_Exp1_1View 绘制

void CWeek9_Exp1_1View::OnDraw(CDC* /*pDC*/)
{
	CWeek9_Exp1_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CWeek9_Exp1_1View 诊断

#ifdef _DEBUG
void CWeek9_Exp1_1View::AssertValid() const
{
	CView::AssertValid();
}

void CWeek9_Exp1_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CWeek9_Exp1_1Doc* CWeek9_Exp1_1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CWeek9_Exp1_1Doc)));
	return (CWeek9_Exp1_1Doc*)m_pDocument;
}
#endif //_DEBUG


// CWeek9_Exp1_1View 消息处理程序


void CWeek9_Exp1_1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
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
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(false);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		ofstream ofs(cfd.GetPathName());
		ofs << CT2A(filename.GetString()) << endl;
	}
}
