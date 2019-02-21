// ScreenShot.cpp : 实现文件
//

#include "stdafx.h"
#include "WindowsScreenShot.h"
#include "ScreenShot.h"
#include "afxdialogex.h"


// CScreenShot 对话框

IMPLEMENT_DYNAMIC(CScreenShot, CDialogEx)

CScreenShot::CScreenShot(CWnd* pParent /*=NULL*/)
: CDialogEx(CScreenShot::IDD, pParent)
{

}

CScreenShot::~CScreenShot()
{
}

void CScreenShot::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Control(pDX, IDC_HWND_LIST, hwndList);
	//  DDX_Control(pDX, IDC_HWND_LIST, hwndList);
}


BEGIN_MESSAGE_MAP(CScreenShot, CDialogEx)
END_MESSAGE_MAP()


// CScreenShot 消息处理程序

