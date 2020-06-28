
// Week1_Exp2_PracticeView.h : CWeek1_Exp2_PracticeView 类的接口
//

#pragma once


class CWeek1_Exp2_PracticeView : public CView
{
protected: // 仅从序列化创建
	CWeek1_Exp2_PracticeView();
	DECLARE_DYNCREATE(CWeek1_Exp2_PracticeView)

// 特性
public:
	CWeek1_Exp2_PracticeDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek1_Exp2_PracticeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s2;
protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week1_Exp2_PracticeView.cpp 中的调试版本
inline CWeek1_Exp2_PracticeDoc* CWeek1_Exp2_PracticeView::GetDocument() const
   { return reinterpret_cast<CWeek1_Exp2_PracticeDoc*>(m_pDocument); }
#endif

