
// Week9_Exp1_1View.h : CWeek9_Exp1_1View ��Ľӿ�
//

#pragma once


class CWeek9_Exp1_1View : public CView
{
protected: // �������л�����
	CWeek9_Exp1_1View();
	DECLARE_DYNCREATE(CWeek9_Exp1_1View)

// ����
public:
	CWeek9_Exp1_1Doc* GetDocument() const;
	CString filename;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CWeek9_Exp1_1View();
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
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // Week9_Exp1_1View.cpp �еĵ��԰汾
inline CWeek9_Exp1_1Doc* CWeek9_Exp1_1View::GetDocument() const
   { return reinterpret_cast<CWeek9_Exp1_1Doc*>(m_pDocument); }
#endif

