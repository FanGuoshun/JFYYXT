#pragma once
#include <iostream>
using namespace std;
#include "identity.h"
#include "globalFIle.h"
#include "computerRoom.h"
#include "orderFile.h"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

class Teacher : public Identity
{
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	virtual void openMenu();

	void showAllOrder();

	void validOrder();

	int m_EmpId;
};
