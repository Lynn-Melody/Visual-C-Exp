
// Week5_Exp1_1View.h : CWeek5_Exp1_1View ��Ľӿ�
//

#pragma once


class CWeek5_Exp1_1View : public CView
{
protected: // �������л�����
	CWeek5_Exp1_1View();
	DECLARE_DYNCREATE(CWeek5_Exp1_1View)

// ����
public:
	CWeek5_Exp1_1Doc* GetDocument() const;
	CRect cr;
	int r;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek5_Exp1_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Ondrawcircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // Week5_Exp1_1View.cpp �еĵ��԰汾
inline CWeek5_Exp1_1Doc* CWeek5_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek5_Exp1_1Doc*>(m_pDocument); }
#endif

