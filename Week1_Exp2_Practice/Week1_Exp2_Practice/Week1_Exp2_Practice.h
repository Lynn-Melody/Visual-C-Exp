
// Week1_Exp2_Practice.h : Week1_Exp2_Practice Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek1_Exp2_PracticeApp:
// �йش����ʵ�֣������ Week1_Exp2_Practice.cpp
//

class CWeek1_Exp2_PracticeApp : public CWinApp
{
public:
	CWeek1_Exp2_PracticeApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek1_Exp2_PracticeApp theApp;
