
// Week1_Exp2_PracticeDoc.cpp : CWeek1_Exp2_PracticeDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Week1_Exp2_Practice.h"
#endif

#include "Week1_Exp2_PracticeDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CWeek1_Exp2_PracticeDoc

IMPLEMENT_DYNCREATE(CWeek1_Exp2_PracticeDoc, CDocument)

BEGIN_MESSAGE_MAP(CWeek1_Exp2_PracticeDoc, CDocument)
END_MESSAGE_MAP()


// CWeek1_Exp2_PracticeDoc ����/����

CWeek1_Exp2_PracticeDoc::CWeek1_Exp2_PracticeDoc()
{
	// TODO: �ڴ����һ���Թ������
	s1 = _T("StringA_From_Doc");
}

CWeek1_Exp2_PracticeDoc::~CWeek1_Exp2_PracticeDoc()
{
}

BOOL CWeek1_Exp2_PracticeDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CWeek1_Exp2_PracticeDoc ���л�

void CWeek1_Exp2_PracticeDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CWeek1_Exp2_PracticeDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CWeek1_Exp2_PracticeDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CWeek1_Exp2_PracticeDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CWeek1_Exp2_PracticeDoc ���

#ifdef _DEBUG
void CWeek1_Exp2_PracticeDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CWeek1_Exp2_PracticeDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CWeek1_Exp2_PracticeDoc ����
