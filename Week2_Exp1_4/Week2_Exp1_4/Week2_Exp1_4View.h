
// Week2_Exp1_4View.h : CWeek2_Exp1_4View ��Ľӿ�
//

#pragma once


class CWeek2_Exp1_4View : public CView
{
protected: // �������л�����
	CWeek2_Exp1_4View();
	DECLARE_DYNCREATE(CWeek2_Exp1_4View)

// ����
public:
	CWeek2_Exp1_4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek2_Exp1_4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Week2_Exp1_4View.cpp �еĵ��԰汾
inline CWeek2_Exp1_4Doc* CWeek2_Exp1_4View::GetDocument() const
   { return reinterpret_cast<CWeek2_Exp1_4Doc*>(m_pDocument); }
#endif

