
// Week7_Exp2_4.h : Week7_Exp2_4 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek7_Exp2_4App:
// �йش����ʵ�֣������ Week7_Exp2_4.cpp
//

class CWeek7_Exp2_4App : public CWinApp
{
public:
	CWeek7_Exp2_4App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek7_Exp2_4App theApp;
