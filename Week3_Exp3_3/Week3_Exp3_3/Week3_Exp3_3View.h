
// Week3_Exp3_3View.h : CWeek3_Exp3_3View ��Ľӿ�
//

#pragma once


class CWeek3_Exp3_3View : public CView
{
protected: // �������л�����
	CWeek3_Exp3_3View();
	DECLARE_DYNCREATE(CWeek3_Exp3_3View)

// ����
public:
	CWeek3_Exp3_3Doc* GetDocument() const;
	bool temple;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek3_Exp3_3View();
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

#ifndef _DEBUG  // Week3_Exp3_3View.cpp �еĵ��԰汾
inline CWeek3_Exp3_3Doc* CWeek3_Exp3_3View::GetDocument() const
   { return reinterpret_cast<CWeek3_Exp3_3Doc*>(m_pDocument); }
#endif

