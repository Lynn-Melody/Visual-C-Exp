
// Week3_Exp1_2.h : Week3_Exp1_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek3_Exp1_2App:
// �йش����ʵ�֣������ Week3_Exp1_2.cpp
//

class CWeek3_Exp1_2App : public CWinApp
{
public:
	CWeek3_Exp1_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek3_Exp1_2App theApp;
