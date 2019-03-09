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
	//Ĭ�Ϲ���
	Student();
	//�вι���
	Student(int id, string name, string pws);

	//�˵�����
	virtual void openMenu();

	//����ԤԼ
	void applyOrder();
	//�鿴����ԤԼ
	void showMyOrder();
	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();
	//ѧ��ѧ��
	int m_Id;

	vector<ComputerRoom> vCom;

};
