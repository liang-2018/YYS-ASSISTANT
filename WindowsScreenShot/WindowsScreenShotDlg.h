
// WindowsScreenShotDlg.h : 头文件
//
#include <afxwin.h>
#include <WinUser.h>
#include <Windows.h>
#include <list>

#pragma once

// CWindowsScreenShotDlg 对话框
UINT ThreadYuHun_TWO(LPVOID lpParm);
UINT ThreadYuHun_THREE(LPVOID lpParm);
UINT ThreadYuLing(LPVOID lpParm);
UINT ThreadTuPo(LPVOID lpParm);
UINT ThreadKillRabbit(LPVOID lpParm);
class CWindowsScreenShotDlg : public CDialogEx
{
// 构造
public:
	CWindowsScreenShotDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_WINDOWSSCREENSHOT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedScreenShot();
	void SaveHwndToBmpFile(HWND hWnd, LPCTSTR lpszPath);
	bool MatCompare(cv::Mat screenPic, cv::Mat templatePic);
	bool MatCompare2(cv::Mat screenPic, cv::Mat templatePic, double rate);
	cv::Rect findTargetPosition(cv::Mat screenPic, cv::Mat templatePic);
	 cv::Mat  GetRegionMatCut(cv::Mat screenPic, int type);
	 cv::Mat  GetRegionMatCut_2(cv::Mat ScreenPic, int type);
	 cv::Mat  GetRegionMat(HWND hWnd);
	CWinThread *pThread_YuHun_Two = NULL;
	CWinThread *pThread_YuHun_Three = NULL;
	double m_edit1;
	double m_edit2;
	double m_edit3;
	double m_edit4;
	afx_msg void OnBnClickedDouhun();
	afx_msg void OnBnClickedStopall();
	CString m_yysState;
	afx_msg void OnBnClickedTrihun();
	afx_msg void OnBnClickedYuling();
	//afx_msg void OnBnClickedWindowsget();
	//bool EnumWindowsProc(HWND hwnd);
	//afx_msg void OnBnClickedOpenglTest();
	//afx_msg void AltPrtscr(HWND hWnd, LPCTSTR lpszPath);

	afx_msg void OnBnClickedSuperJuexing();
	afx_msg void OnBnClickedUpdateHwndlist();
	static BOOL CALLBACK EnumWndProc(HWND hwnd, LPARAM lParam);
	CComboBox hwndList;
	afx_msg void OnBnClickedButtonTupo();
	afx_msg void OnBnClickedKillrabbit();
};
