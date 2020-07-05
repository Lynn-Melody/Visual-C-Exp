// Dlg0.cpp : 实现文件
//

#include "stdafx.h"
#include "Week7_Exp2_4.h"
#include "Dlg0.h"
#include "afxdialogex.h"


// Dlg0 对话框

IMPLEMENT_DYNAMIC(Dlg0, CDialogEx)

Dlg0::Dlg0(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str1(_T(""))
	, num(0)
	, str3(_T(""))
{

}

Dlg0::~Dlg0()
{
}

void Dlg0::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str1);
	DDX_Text(pDX, IDC_EDIT2, num);
	DDX_Text(pDX, IDC_EDIT3, str3);
}


BEGIN_MESSAGE_MAP(Dlg0, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg0::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg0 消息处理程序


void Dlg0::OnBnClickedButton1()
{
	UpdateData(true);
	str3.Format(str1 + _T("%d"),num);
	UpdateData(false);
	// TODO: 在此添加控件通知处理程序代码
}
