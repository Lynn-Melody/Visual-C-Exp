
// Week5_Exp2_2View.h : CWeek5_Exp2_2View 类的接口
//

#pragma once


class CWeek5_Exp2_2View : public CView
{
protected: // 仅从序列化创建
	CWeek5_Exp2_2View();
	DECLARE_DYNCREATE(CWeek5_Exp2_2View)

// 特性
public:
	CWeek5_Exp2_2Doc* GetDocument() const;
	CBitmap m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CWeek5_Exp2_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week5_Exp2_2View.cpp 中的调试版本
inline CWeek5_Exp2_2Doc* CWeek5_Exp2_2View::GetDocument() const
   { return reinterpret_cast<CWeek5_Exp2_2Doc*>(m_pDocument); }
#endif

