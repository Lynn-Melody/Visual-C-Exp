
// Week6_Exp1_2.h : Week6_Exp1_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek6_Exp1_2App:
// �йش����ʵ�֣������ Week6_Exp1_2.cpp
//

class CWeek6_Exp1_2App : public CWinApp
{
public:
	CWeek6_Exp1_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek6_Exp1_2App theApp;
