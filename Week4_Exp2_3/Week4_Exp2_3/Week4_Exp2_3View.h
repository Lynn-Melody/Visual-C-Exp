
// Week4_Exp2_3View.h : CWeek4_Exp2_3View ��Ľӿ�
//

#pragma once


class CWeek4_Exp2_3View : public CView
{
protected: // �������л�����
	CWeek4_Exp2_3View();
	DECLARE_DYNCREATE(CWeek4_Exp2_3View)

// ����
public:
	CWeek4_Exp2_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek4_Exp2_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // Week4_Exp2_3View.cpp �еĵ��԰汾
inline CWeek4_Exp2_3Doc* CWeek4_Exp2_3View::GetDocument() const
   { return reinterpret_cast<CWeek4_Exp2_3Doc*>(m_pDocument); }
#endif

