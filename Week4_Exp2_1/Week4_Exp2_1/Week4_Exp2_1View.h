
// Week4_Exp2_1View.h : CWeek4_Exp2_1View ��Ľӿ�
//

#pragma once


class CWeek4_Exp2_1View : public CView
{
protected: // �������л�����
	CWeek4_Exp2_1View();
	DECLARE_DYNCREATE(CWeek4_Exp2_1View)

// ����
public:
	CWeek4_Exp2_1Doc* GetDocument() const;
	CPoint p;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_Exp2_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week4_Exp2_1View.cpp �еĵ��԰汾
inline CWeek4_Exp2_1Doc* CWeek4_Exp2_1View::GetDocument() const
   { return reinterpret_cast<CWeek4_Exp2_1Doc*>(m_pDocument); }
#endif

