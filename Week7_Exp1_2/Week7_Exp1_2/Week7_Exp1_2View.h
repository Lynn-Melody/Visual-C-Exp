
// Week7_Exp1_2View.h : CWeek7_Exp1_2View ��Ľӿ�
//

#pragma once
#include "MyDlg.h"

class CWeek7_Exp1_2View : public CView
{
protected: // �������л�����
	CWeek7_Exp1_2View();
	DECLARE_DYNCREATE(CWeek7_Exp1_2View)

// ����
public:
	CWeek7_Exp1_2Doc* GetDocument() const;
	MyDlg* dlg;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_Exp1_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowdlg();
};

#ifndef _DEBUG  // Week7_Exp1_2View.cpp �еĵ��԰汾
inline CWeek7_Exp1_2Doc* CWeek7_Exp1_2View::GetDocument() const
   { return reinterpret_cast<CWeek7_Exp1_2Doc*>(m_pDocument); }
#endif

