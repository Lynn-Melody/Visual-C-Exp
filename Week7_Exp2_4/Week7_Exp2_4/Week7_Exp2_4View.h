
// Week7_Exp2_4View.h : CWeek7_Exp2_4View ��Ľӿ�
//

#pragma once
#include "Dlg0.h"

class CWeek7_Exp2_4View : public CView
{
protected: // �������л�����
	CWeek7_Exp2_4View();
	DECLARE_DYNCREATE(CWeek7_Exp2_4View)

// ����
public:
	CWeek7_Exp2_4Doc* GetDocument() const;
	Dlg0 dlg;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_Exp2_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDlg0();
};

#ifndef _DEBUG  // Week7_Exp2_4View.cpp �еĵ��԰汾
inline CWeek7_Exp2_4Doc* CWeek7_Exp2_4View::GetDocument() const
   { return reinterpret_cast<CWeek7_Exp2_4Doc*>(m_pDocument); }
#endif

