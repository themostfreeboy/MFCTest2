
// MFC_test_2Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_test_2.h"
#include "MFC_test_2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_test_2Dlg 对话框




CMFC_test_2Dlg::CMFC_test_2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMFC_test_2Dlg::IDD, pParent)
	, ipvalue(0)
	, checkvalue(FALSE)
	, radiovalue(FALSE)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_test_2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_IPAddress(pDX, IDC_IPADDRESS1, ipvalue);
	DDX_Check(pDX, IDC_CHECK1, checkvalue);
	DDX_Radio(pDX, IDC_RADIO1, radiovalue);
	DDX_Control(pDX, IDC_IPADDRESS1, ipcontrol);
	DDX_Control(pDX, IDC_COMBO1, comboboxcontrol);
}

BEGIN_MESSAGE_MAP(CMFC_test_2Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CMFC_test_2Dlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CMFC_test_2Dlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_test_2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_test_2Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_test_2Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_test_2Dlg::OnBnClickedButton4)
	ON_NOTIFY(IPN_FIELDCHANGED, IDC_IPADDRESS1, &CMFC_test_2Dlg::OnIpnFieldchangedIpaddress1)
	ON_BN_CLICKED(IDC_CHECK1, &CMFC_test_2Dlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_RADIO1, &CMFC_test_2Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CMFC_test_2Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO3, &CMFC_test_2Dlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFC_test_2Dlg::OnBnClickedButton5)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CMFC_test_2Dlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFC_test_2Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFC_test_2Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFC_test_2Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFC_test_2Dlg::OnBnClickedButton9)
END_MESSAGE_MAP()


// CMFC_test_2Dlg 消息处理程序

BOOL CMFC_test_2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFC_test_2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFC_test_2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_test_2Dlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
	exit(0);
}


void CMFC_test_2Dlg::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
	exit(0);
}


void CMFC_test_2Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	if(radiovalue==0)
	{
		AfxMessageBox(_T("radio1 choose"),MB_OK,NULL);
	}
	else if(radiovalue==1)
	{
		AfxMessageBox(_T("radio2 choose"),MB_OK,NULL);
	}
	else if(radiovalue==2)
	{
		AfxMessageBox(_T("radio3 choose"),MB_OK,NULL);
	}
}


void CMFC_test_2Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	comboboxcontrol.AddString(_T("hello"));
}


void CMFC_test_2Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	if(checkvalue==true)
	{
		AfxMessageBox(_T("checkvalue=true"),MB_OK,NULL);
	}
	else if(checkvalue==false)
	{
		AfxMessageBox(_T("checkvalue=false"),MB_OK,NULL);
	}
}


void CMFC_test_2Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CString a=_T("192.168.1.1");  
    ipcontrol.SetWindowText(a);  
}


void CMFC_test_2Dlg::OnIpnFieldchangedIpaddress1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMIPADDRESS pIPAddr = reinterpret_cast<LPNMIPADDRESS>(pNMHDR);
	// TODO: 在此添加控件通知处理程序代码
	*pResult = 0;
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedCheck1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedRadio1()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	BYTE a1,a2,a3,a4;  
    ipcontrol.GetAddress(a1,a2,a3,a4);  
    CString str;  
    str.Format(_T("%d.%d.%d.%d"),a1,a2,a3,a4);//这里的nf得到的值是IP值了.  
    AfxMessageBox(str,MB_OK,NULL);  
}


void CMFC_test_2Dlg::OnCbnSelchangeCombo1()
{
	// TODO: 在此添加控件通知处理程序代码
}


void CMFC_test_2Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	//int nIndex = comboboxcontrol.FindStringExact( 0, _T("test2"));
	int nIndex = comboboxcontrol.SelectString( 0, _T("test2"));
	CString cstr;
	cstr.Format(_T("%d"),nIndex);
	AfxMessageBox(cstr,MB_OK,NULL);
}


void CMFC_test_2Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	int nIndex = comboboxcontrol.GetCurSel();
	CString strCBText;
	comboboxcontrol.GetLBText( nIndex, strCBText);
	AfxMessageBox(strCBText,MB_OK,NULL);
}


void CMFC_test_2Dlg::OnBnClickedButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	comboboxcontrol.DeleteString(0);
	//comboboxcontrol.ResetContent();
}


void CMFC_test_2Dlg::OnBnClickedButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	int nIndex = comboboxcontrol.GetCurSel(); //当前选中的项
	comboboxcontrol.SetCurSel(0); //设置第nIndex项为显示的内容
}
