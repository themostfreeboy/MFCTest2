
// MFC_test_2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMFC_test_2App:
// �йش����ʵ�֣������ MFC_test_2.cpp
//

class CMFC_test_2App : public CWinApp
{
public:
	CMFC_test_2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMFC_test_2App theApp;