
// Week5_Exp1_1.h : Week5_Exp1_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek5_Exp1_1App:
// �йش����ʵ�֣������ Week5_Exp1_1.cpp
//

class CWeek5_Exp1_1App : public CWinApp
{
public:
	CWeek5_Exp1_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek5_Exp1_1App theApp;
