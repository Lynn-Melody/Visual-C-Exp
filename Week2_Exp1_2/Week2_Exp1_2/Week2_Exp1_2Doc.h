
// Week2_Exp1_2Doc.h : CWeek2_Exp1_2Doc 类的接口
//


#pragma once


class CWeek2_Exp1_2Doc : public CDocument
{
protected: // 仅从序列化创建
	CWeek2_Exp1_2Doc();
	DECLARE_DYNCREATE(CWeek2_Exp1_2Doc)

// 特性
public:
	CArray<CRect, CRect&> arry;
// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CWeek2_Exp1_2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
