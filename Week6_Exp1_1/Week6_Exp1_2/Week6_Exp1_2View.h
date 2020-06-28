
// Week6_Exp1_2View.h : CWeek6_Exp1_2View 类的接口
//

#pragma once


class CWeek6_Exp1_2View : public CView
{
protected: // 仅从序列化创建
	CWeek6_Exp1_2View();
	DECLARE_DYNCREATE(CWeek6_Exp1_2View)

// 特性
public:
	CWeek6_Exp1_2Doc* GetDocument() const;
	bool set;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek6_Exp1_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week6_Exp1_2View.cpp 中的调试版本
inline CWeek6_Exp1_2Doc* CWeek6_Exp1_2View::GetDocument() const
   { return reinterpret_cast<CWeek6_Exp1_2Doc*>(m_pDocument); }
#endif

