
// Week7_Exp1_2View.h : CWeek7_Exp1_2View 类的接口
//

#pragma once
#include "MyDlg.h"

class CWeek7_Exp1_2View : public CView
{
protected: // 仅从序列化创建
	CWeek7_Exp1_2View();
	DECLARE_DYNCREATE(CWeek7_Exp1_2View)

// 特性
public:
	CWeek7_Exp1_2Doc* GetDocument() const;
	MyDlg* dlg;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek7_Exp1_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
};

#ifndef _DEBUG  // Week7_Exp1_2View.cpp 中的调试版本
inline CWeek7_Exp1_2Doc* CWeek7_Exp1_2View::GetDocument() const
   { return reinterpret_cast<CWeek7_Exp1_2Doc*>(m_pDocument); }
#endif

