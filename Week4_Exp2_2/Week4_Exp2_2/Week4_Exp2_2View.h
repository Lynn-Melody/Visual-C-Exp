
// Week4_Exp2_2View.h : CWeek4_Exp2_2View ��Ľӿ�
//

#pragma once


class CWeek4_Exp2_2View : public CView
{
protected: // �������л�����
	CWeek4_Exp2_2View();
	DECLARE_DYNCREATE(CWeek4_Exp2_2View)

// ����
public:
	CWeek4_Exp2_2Doc* GetDocument() const;
	CRect rect;
	bool set;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_Exp2_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week4_Exp2_2View.cpp �еĵ��԰汾
inline CWeek4_Exp2_2Doc* CWeek4_Exp2_2View::GetDocument() const
   { return reinterpret_cast<CWeek4_Exp2_2Doc*>(m_pDocument); }
#endif

