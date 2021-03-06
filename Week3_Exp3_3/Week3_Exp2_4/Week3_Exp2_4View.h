
// Week3_Exp2_4View.h : CWeek3_Exp2_4View 类的接口
//

#pragma once


class CWeek3_Exp2_4View : public CView
{
protected: // 仅从序列化创建
	CWeek3_Exp2_4View();
	DECLARE_DYNCREATE(CWeek3_Exp2_4View)

// 特性
public:
	bool temple;
	CWeek3_Exp2_4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek3_Exp2_4View();
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

#ifndef _DEBUG  // Week3_Exp2_4View.cpp 中的调试版本
inline CWeek3_Exp2_4Doc* CWeek3_Exp2_4View::GetDocument() const
   { return reinterpret_cast<CWeek3_Exp2_4Doc*>(m_pDocument); }
#endif

