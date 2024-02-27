#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)	// �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;		// ���ڿ� ũ�⸸ŭ �޸� �Ҵ��� �ޱ� ���� strlen()�� �̿��Ͽ� ���ڿ��� ���̸� ���Ͽ� len�� ����
		name = new char[len];				// lenũ�⸸ŭ �� ���� �޸� �Ҵ�
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const		// name�� age�� ���� ������ �ʾƾ� �ϱ� ������ const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()		// �Ҹ��� : ��ü�� �Ҹ� ��Ŵ
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}