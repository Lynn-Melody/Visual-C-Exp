
// Week6_Exp1_2View.h : CWeek6_Exp1_2View ��Ľӿ�
//

#pragma once


class CWeek6_Exp1_2View : public CView
{
protected: // �������л�����
	CWeek6_Exp1_2View();
	DECLARE_DYNCREATE(CWeek6_Exp1_2View)

// ����
public:
	CWeek6_Exp1_2Doc* GetDocument() const;
	bool set;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek6_Exp1_2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // Week6_Exp1_2View.cpp �еĵ��԰汾
inline CWeek6_Exp1_2Doc* CWeek6_Exp1_2View::GetDocument() const
   { return reinterpret_cast<CWeek6_Exp1_2Doc*>(m_pDocument); }
#endif

