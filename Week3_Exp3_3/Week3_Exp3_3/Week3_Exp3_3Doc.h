
// Week3_Exp3_3Doc.h : CWeek3_Exp3_3Doc ��Ľӿ�
//


#pragma once


class CWeek3_Exp3_3Doc : public CDocument
{
protected: // �������л�����
	CWeek3_Exp3_3Doc();
	DECLARE_DYNCREATE(CWeek3_Exp3_3Doc)

// ����
public:
	CArray<CRect, CRect&> array;
	int a[3];

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
	virtual ~CWeek3_Exp3_3Doc();
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
