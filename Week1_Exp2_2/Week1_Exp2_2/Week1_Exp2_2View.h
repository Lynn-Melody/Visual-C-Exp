
// Week1_Exp2_2View.h : CWeek1_Exp2_2View 类的接口
//

#pragma once


class CWeek1_Exp2_2View : public CView
{
protected: // 仅从序列化创建
	CWeek1_Exp2_2View();
	DECLARE_DYNCREATE(CWeek1_Exp2_2View)

// 特性
public:
	CWeek1_Exp2_2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek1_Exp2_2View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week1_Exp2_2View.cpp 中的调试版本
inline CWeek1_Exp2_2Doc* CWeek1_Exp2_2View::GetDocument() const
   { return reinterpret_cast<CWeek1_Exp2_2Doc*>(m_pDocument); }
#endif

