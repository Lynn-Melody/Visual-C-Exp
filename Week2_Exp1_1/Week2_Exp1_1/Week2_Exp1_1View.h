
// Week2_Exp1_1View.h : CWeek2_Exp1_1View ��Ľӿ�
//

#pragma once


class CWeek2_Exp1_1View : public CView
{
protected: // �������л�����
	CWeek2_Exp1_1View();
	DECLARE_DYNCREATE(CWeek2_Exp1_1View)

// ����
public:
	CWeek2_Exp1_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_Exp1_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_Exp1_1View.cpp �еĵ��԰汾
inline CWeek2_Exp1_1Doc* CWeek2_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek2_Exp1_1Doc*>(m_pDocument); }
#endif

