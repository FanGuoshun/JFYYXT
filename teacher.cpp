#include "teacher.h"

Teacher::Teacher()
{

}

Teacher::Teacher(int empId, string name, string pwd)
{
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}

void Teacher::openMenu()
{
	cout << "��ӭ��ʦ��" << this->m_Name << "��¼��" << endl;
	cout << "==================��ӭ��������ԤԼϵͳ===================" << endl;
	//cout << endl << "�������������" << endl;
	cout << "\t\t ===================================\n";
	cout << "\t\t              1.�鿴����ԤԼ             \n";
	cout << "\t\t                                    \n";
	cout << "\t\t              2.���ԤԼ            \n";
	cout << "\t\t                                    \n";
	cout << "\t\t              0.ע����¼            \n";
	cout << "\t\t                                    \n";
	cout << "\t\t ===================================\n";
	cout << "����������ѡ��" << endl;
}

void Teacher::showAllOrder()
{
	OrderFile of;
	if (of.m_size == 0) {
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < of.m_size; i++) {
		//string ת int
		//string ����.c_str()תconst char*
		//����atoi��(const char*) ת int
		cout << i * 1 << "��";
		cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
		cout << " ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
		cout << " ѧ�ţ�" << of.m_orderData[i]["stuId"];
		cout << " ������" << of.m_orderData[i]["stuName"];
		cout << " �����ţ�" << of.m_orderData[i]["roomId"];
		string status = " ״̬��";
		if (of.m_orderData[i]["status"] == "1") {
			status += "�����";
		}
		else if (of.m_orderData[i]["status"] == "2") {
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_orderData[i]["status"] == "3") {
			status += "ԤԼʧ�ܣ����δ�ɹ�";
		}
		else {
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;

	}
	system("pause");
	system("cls");
}

void Teacher::validOrder()
{
	OrderFile of;
	if (of.m_size == 0) {
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����˵�ԤԼ��¼���£�" << endl;

	vector<int> v;
	int index = 1;
	bool flag = false;
	for (int i = 0; i < of.m_size; i++) {
		if (of.m_orderData[i]["status"] == "1") {
			flag = true;
			v.push_back(i);
			cout << index++ << "��";
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << " ʱ��Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << " ѧ�ţ�" << of.m_orderData[i]["stuId"];
			cout << " ������" << of.m_orderData[i]["stuName"];
			cout << " �����ţ�" << of.m_orderData[i]["roomId"];
			string status = " ״̬��";
			if (of.m_orderData[i]["status"] == "1") {
				status += "�����";
			}
			cout << status << endl;
		}
	}
	if (flag == false) {
		cout << "��Ǹ�������޿�����˵ļ�¼��" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "��������˵�ԤԼ��¼��0������" << endl;
	int select = 0; //�����û�ѡ���ԤԼ��¼
	int ret = 0;//����ԤԼ�����¼

	while (true) {
		cin >> select;
		if (select >= 0 && select <= v.size()) {
			if (select == 0) {
				break;
			}
			else {
				cout << "��������˽��" << endl;
				cout << "1��ͨ��" << endl;
				cout << "2����ͨ��" << endl;
				cin >> ret;
				if (ret == 1) {
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else {
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();
				cout << "������" << endl;
				break;
			}
		}
		cout << "�����������������룡" << endl;
	}
	system("pause");
	system("cls");
}