
// Week2_Exp1_3.h : Week2_Exp1_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek2_Exp1_3App:
// �йش����ʵ�֣������ Week2_Exp1_3.cpp
//

class CWeek2_Exp1_3App : public CWinApp
{
public:
	CWeek2_Exp1_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek2_Exp1_3App theApp;
