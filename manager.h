#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "globalFIle.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

class Manager : public Identity
{
public:
	Manager();

	Manager(string name, string pws);

	virtual void openMenu();

	void addPerson();

	void showPerson();

	void showComputer();

	void cleanFile();
	//初始化容器
	void initVector();
	//初始化机房
	void initComputerRoom();
	//检测重复
	bool checkRepeat(int id, int type);

	vector<Student> vStu;

	vector<Teacher> vTea;

	//机房信息
	vector<ComputerRoom> vCom;
};
