
// Week7_Exp1_1View.h : CWeek7_Exp1_1View ��Ľӿ�
//

#pragma once


class CWeek7_Exp1_1View : public CView
{
protected: // �������л�����
	CWeek7_Exp1_1View();
	DECLARE_DYNCREATE(CWeek7_Exp1_1View)

// ����
public:
	CWeek7_Exp1_1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek7_Exp1_1View();
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

#ifndef _DEBUG  // Week7_Exp1_1View.cpp �еĵ��԰汾
inline CWeek7_Exp1_1Doc* CWeek7_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek7_Exp1_1Doc*>(m_pDocument); }
#endif

