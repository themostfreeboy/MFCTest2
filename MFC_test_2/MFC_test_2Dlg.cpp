
// MFC_test_2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_test_2.h"
#include "MFC_test_2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_test_2Dlg �Ի���




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


// CMFC_test_2Dlg ��Ϣ�������

BOOL CMFC_test_2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFC_test_2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFC_test_2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_test_2Dlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
	exit(0);
}


void CMFC_test_2Dlg::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
	exit(0);
}


void CMFC_test_2Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	comboboxcontrol.AddString(_T("hello"));
}


void CMFC_test_2Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString a=_T("192.168.1.1");  
    ipcontrol.SetWindowText(a);  
}


void CMFC_test_2Dlg::OnIpnFieldchangedIpaddress1(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMIPADDRESS pIPAddr = reinterpret_cast<LPNMIPADDRESS>(pNMHDR);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedCheck1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedRadio1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(TRUE);
}


void CMFC_test_2Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	BYTE a1,a2,a3,a4;  
    ipcontrol.GetAddress(a1,a2,a3,a4);  
    CString str;  
    str.Format(_T("%d.%d.%d.%d"),a1,a2,a3,a4);//�����nf�õ���ֵ��IPֵ��.  
    AfxMessageBox(str,MB_OK,NULL);  
}


void CMFC_test_2Dlg::OnCbnSelchangeCombo1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void CMFC_test_2Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//int nIndex = comboboxcontrol.FindStringExact( 0, _T("test2"));
	int nIndex = comboboxcontrol.SelectString( 0, _T("test2"));
	CString cstr;
	cstr.Format(_T("%d"),nIndex);
	AfxMessageBox(cstr,MB_OK,NULL);
}


void CMFC_test_2Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int nIndex = comboboxcontrol.GetCurSel();
	CString strCBText;
	comboboxcontrol.GetLBText( nIndex, strCBText);
	AfxMessageBox(strCBText,MB_OK,NULL);
}


void CMFC_test_2Dlg::OnBnClickedButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	comboboxcontrol.DeleteString(0);
	//comboboxcontrol.ResetContent();
}


void CMFC_test_2Dlg::OnBnClickedButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	int nIndex = comboboxcontrol.GetCurSel(); //��ǰѡ�е���
	comboboxcontrol.SetCurSel(0); //���õ�nIndex��Ϊ��ʾ������
}
