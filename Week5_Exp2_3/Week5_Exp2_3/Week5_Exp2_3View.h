
// Week5_Exp2_3View.h : CWeek5_Exp2_3View ��Ľӿ�
//

#pragma once


class CWeek5_Exp2_3View : public CView
{
protected: // �������л�����
	CWeek5_Exp2_3View();
	DECLARE_DYNCREATE(CWeek5_Exp2_3View)

// ����
public:
	CWeek5_Exp2_3Doc* GetDocument() const;
	int type;
	bool set;
	CPoint p1, p2;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek5_Exp2_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Ondrawline();
	afx_msg void Ondrawrect();
	afx_msg void Ondrawcircle();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week5_Exp2_3View.cpp �еĵ��԰汾
inline CWeek5_Exp2_3Doc* CWeek5_Exp2_3View::GetDocument() const
   { return reinterpret_cast<CWeek5_Exp2_3Doc*>(m_pDocument); }
#endif

