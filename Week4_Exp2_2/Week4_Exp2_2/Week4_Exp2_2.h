
// Week4_Exp2_2.h : Week4_Exp2_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek4_Exp2_2App:
// �йش����ʵ�֣������ Week4_Exp2_2.cpp
//

class CWeek4_Exp2_2App : public CWinApp
{
public:
	CWeek4_Exp2_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek4_Exp2_2App theApp;
