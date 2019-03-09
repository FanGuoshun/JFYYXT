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
	//��ʼ������
	void initVector();
	//��ʼ������
	void initComputerRoom();
	//����ظ�
	bool checkRepeat(int id, int type);

	vector<Student> vStu;

	vector<Teacher> vTea;

	//������Ϣ
	vector<ComputerRoom> vCom;
};
