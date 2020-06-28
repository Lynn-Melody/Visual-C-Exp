
// Week2_Exp2_3View.h : CWeek2_Exp2_3View 类的接口
//

#pragma once


class CWeek2_Exp2_3View : public CView
{
protected: // 仅从序列化创建
	CWeek2_Exp2_3View();
	DECLARE_DYNCREATE(CWeek2_Exp2_3View)

// 特性
public:
	CWeek2_Exp2_3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek2_Exp2_3View();
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

#ifndef _DEBUG  // Week2_Exp2_3View.cpp 中的调试版本
inline CWeek2_Exp2_3Doc* CWeek2_Exp2_3View::GetDocument() const
   { return reinterpret_cast<CWeek2_Exp2_3Doc*>(m_pDocument); }
#endif

