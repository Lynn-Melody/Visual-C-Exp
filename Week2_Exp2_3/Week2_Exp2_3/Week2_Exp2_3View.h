
// Week2_Exp2_3View.h : CWeek2_Exp2_3View ��Ľӿ�
//

#pragma once


class CWeek2_Exp2_3View : public CView
{
protected: // �������л�����
	CWeek2_Exp2_3View();
	DECLARE_DYNCREATE(CWeek2_Exp2_3View)

// ����
public:
	CWeek2_Exp2_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_Exp2_3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week2_Exp2_3View.cpp �еĵ��԰汾
inline CWeek2_Exp2_3Doc* CWeek2_Exp2_3View::GetDocument() const
   { return reinterpret_cast<CWeek2_Exp2_3Doc*>(m_pDocument); }
#endif

