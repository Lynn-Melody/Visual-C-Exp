
// Week1_Exp2_PracticeView.h : CWeek1_Exp2_PracticeView ��Ľӿ�
//

#pragma once


class CWeek1_Exp2_PracticeView : public CView
{
protected: // �������л�����
	CWeek1_Exp2_PracticeView();
	DECLARE_DYNCREATE(CWeek1_Exp2_PracticeView)

// ����
public:
	CWeek1_Exp2_PracticeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek1_Exp2_PracticeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s2;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Week1_Exp2_PracticeView.cpp �еĵ��԰汾
inline CWeek1_Exp2_PracticeDoc* CWeek1_Exp2_PracticeView::GetDocument() const
   { return reinterpret_cast<CWeek1_Exp2_PracticeDoc*>(m_pDocument); }
#endif

