
// Week8_Exp1_1View.h : CWeek8_Exp1_1View ��Ľӿ�
//

#pragma once
#include "Dlg1.h"

class CWeek8_Exp1_1View : public CView
{
protected: // �������л�����
	CWeek8_Exp1_1View();
	DECLARE_DYNCREATE(CWeek8_Exp1_1View)

// ����
public:
	CWeek8_Exp1_1Doc* GetDocument() const;
	Dlg1 * dlg;
	CString str;
	// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek8_Exp1_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnDlag1();
};

#ifndef _DEBUG  // Week8_Exp1_1View.cpp �еĵ��԰汾
inline CWeek8_Exp1_1Doc* CWeek8_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek8_Exp1_1Doc*>(m_pDocument); }
#endif

