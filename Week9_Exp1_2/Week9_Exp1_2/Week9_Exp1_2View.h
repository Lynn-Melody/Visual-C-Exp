
// Week9_Exp1_2View.h : CWeek9_Exp1_2View ��Ľӿ�
//

#pragma once


class CWeek9_Exp1_2View : public CView
{
protected: // �������л�����
	CWeek9_Exp1_2View();
	DECLARE_DYNCREATE(CWeek9_Exp1_2View)

// ����
public:
	CWeek9_Exp1_2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9_Exp1_2View();
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

#ifndef _DEBUG  // Week9_Exp1_2View.cpp �еĵ��԰汾
inline CWeek9_Exp1_2Doc* CWeek9_Exp1_2View::GetDocument() const
   { return reinterpret_cast<CWeek9_Exp1_2Doc*>(m_pDocument); }
#endif

