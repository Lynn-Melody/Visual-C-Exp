
// Week7_Exp2_3.h : Week7_Exp2_3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CWeek7_Exp2_3App:
// �йش����ʵ�֣������ Week7_Exp2_3.cpp
//

class CWeek7_Exp2_3App : public CWinApp
{
public:
	CWeek7_Exp2_3App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek7_Exp2_3App theApp;
