// Dlg1.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Week8_Exp1_1.h"
#include "Dlg1.h"
#include "afxdialogex.h"


// Dlg1 �Ի���

IMPLEMENT_DYNAMIC(Dlg1, CDialogEx)

Dlg1::Dlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str(_T(""))
{

}

Dlg1::~Dlg1()
{
}

void Dlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str);
	DDX_Control(pDX, IDC_LIST1, lbox);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
	ON_BN_CLICKED(IDOK, &Dlg1::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &Dlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// Dlg1 ��Ϣ�������


BOOL Dlg1::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void Dlg1::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	
	CDialogEx::OnOK();
}


void Dlg1::OnBnClickedButton1()
{
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
