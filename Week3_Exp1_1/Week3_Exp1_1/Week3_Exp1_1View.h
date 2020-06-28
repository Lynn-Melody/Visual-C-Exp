
// Week3_Exp1_1View.h : CWeek3_Exp1_1View 类的接口
//

#pragma once


class CWeek3_Exp1_1View : public CView
{
protected: // 仅从序列化创建
	CWeek3_Exp1_1View();
	DECLARE_DYNCREATE(CWeek3_Exp1_1View)

// 特性
public:
	CWeek3_Exp1_1Doc* GetDocument() const;
	CRect rect;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek3_Exp1_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week3_Exp1_1View.cpp 中的调试版本
inline CWeek3_Exp1_1Doc* CWeek3_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek3_Exp1_1Doc*>(m_pDocument); }
#endif

