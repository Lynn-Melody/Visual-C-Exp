
// Week9_Exp1_1.h : Week9_Exp1_1 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CWeek9_Exp1_1App:
// 有关此类的实现，请参阅 Week9_Exp1_1.cpp
//

class CWeek9_Exp1_1App : public CWinApp
{
public:
	CWeek9_Exp1_1App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CWeek9_Exp1_1App theApp;
