
// Week2_Exp2_2Doc.h : CWeek2_Exp2_2Doc ��Ľӿ�
//


#pragma once


class CWeek2_Exp2_2Doc : public CDocument
{
protected: // �������л�����
	CWeek2_Exp2_2Doc();
	DECLARE_DYNCREATE(CWeek2_Exp2_2Doc)

// ����
public:
	CString s;
	int A;
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
	virtual ~CWeek2_Exp2_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
