
// Week1_Exp2_1.h : Week1_Exp2_1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek1_Exp2_1App:
// �йش����ʵ�֣������ Week1_Exp2_1.cpp
//

class CWeek1_Exp2_1App : public CWinApp
{
public:
	CWeek1_Exp2_1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek1_Exp2_1App theApp;
