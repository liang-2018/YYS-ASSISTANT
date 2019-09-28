
// stdafx.cpp : 只包括标准包含文件的源文件
// WindowsScreenShot.pch 将作为预编译头
// stdafx.obj 将包含预编译类型信息

#include "stdafx.h"
#include "opencv/cv.h"
BOOL m_threadStartOrStop;
int  m_windowFlag = -1;
cv::Mat fightStart_ok = cv::imread("开始战斗_ok.jpg");
cv::Mat fightStart_no = cv::imread("开始战斗_no.jpg");
cv::Mat invite = cv::imread("邀请.jpg");
cv::Mat invite2 = cv::imread("邀请2.jpg");
cv::Mat Erkounv = cv::imread("二口女.jpg");
cv::Mat prepareAction = cv::imread("准备1.jpg");
cv::Mat prepareAction2 = cv::imread("准备2.jpg");
cv::Mat Jiaotu = cv::imread("酒吞.jpg");
cv::Mat Datianogou = cv::imread("大天狗.jpg");
cv::Mat click2Continue = cv::imread("点击屏幕继续.jpg");
cv::Mat victoryLogo = cv::imread("胜利logo.jpg");
cv::Mat challenge = cv::imread("挑战.jpg");
cv::Mat firstPortrait = cv::imread("第一个角色.jpg");
cv::Mat findSuper = cv::imread("发现超鬼王.jpg"); 

cv::Mat wards = cv::imread("结界.jpg");
cv::Mat toFight = cv::imread("进攻.jpg");
cv::Mat flush = cv::imread("刷新.jpg");

cv::Mat toFight12 = cv::imread("挑战12体.jpg");
//::LoadImage(NULL,_T("JPG"), MAKEINTRESOURCE(IDR_CLICK_CONTINUE));

//cv::Mat VictoryLogo1 = cv::imread(IDC_JPG9);


LPARAM FightStartPoint = MAKELPARAM(793, 452); //组队页面，队长开始战斗
LPARAM PrepreActionPoint = MAKELPARAM(760, 390); //准备
//LPARAM RightPoint = MAKELPARAM(420, 150); //x坐标，y坐标
LPARAM RightPoint = MAKELPARAM(627, 136); //x坐标，y坐标
LPARAM FightPassPoint = MAKELPARAM(805, 381); //x坐标，y坐标  点空地方
LPARAM ChallengePoint = MAKELPARAM(615, 360); //x坐标，y坐标  挑战  位置


