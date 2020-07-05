#pragma once


// Dlg0 对话框

class Dlg0 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg0)

public:
	Dlg0(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg0();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString str1;
	int num;
	CString str3;
	afx_msg void OnBnClickedButton1();
};
