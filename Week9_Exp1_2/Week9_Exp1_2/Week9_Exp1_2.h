
// Week9_Exp1_2.h : Week9_Exp1_2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek9_Exp1_2App:
// �йش����ʵ�֣������ Week9_Exp1_2.cpp
//

class CWeek9_Exp1_2App : public CWinApp
{
public:
	CWeek9_Exp1_2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9_Exp1_2App theApp;
