
// Week1_Exp2_PracticeDoc.h : CWeek1_Exp2_PracticeDoc ��Ľӿ�
//


#pragma once


class CWeek1_Exp2_PracticeDoc : public CDocument
{
protected: // �������л�����
	CWeek1_Exp2_PracticeDoc();
	DECLARE_DYNCREATE(CWeek1_Exp2_PracticeDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CWeek1_Exp2_PracticeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s1;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
