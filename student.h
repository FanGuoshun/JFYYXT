#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "globalFIle.h"
#include "teacher.h"
#include "computerRoom.h"
#include "orderFile.h"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

class Student : public Identity
{
public:
	//默认构造
	Student();
	//有参构造
	Student(int id, string name, string pws);

	//菜单界面
	virtual void openMenu();

	//申请预约
	void applyOrder();
	//查看自身预约
	void showMyOrder();
	//查看所有预约
	void showAllOrder();
	//取消预约
	void cancelOrder();
	//学生学号
	int m_Id;

	vector<ComputerRoom> vCom;

};
