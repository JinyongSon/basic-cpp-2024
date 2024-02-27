#include <iostream>
#include <cstring>
using namespace std;


class StudentClass {
	const int ID;
	char name[20];		// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ°��� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
	char major[20];
	int age;

public:
	// ���ڿ��� �ּұ� ������ ������ ������ �־ ����Ѵ�. - ���忭�� ù��° ���� �ּҰ� ����ȴ�.
	// ��� �̴ϼȶ������ ��ü ������ �ʱ�ȭ���� �ʴ� ������� �ʱ�ȭ �Ҷ� ����Ѵ�. �� ��ü������ ������� �̸� �ʱ�ȭ�� �ȴ�.
	StudentClass(int aid, const char *bname, const char *cmajor, int dage) : ID(aid) // ��� �̴ϼȶ�����		// ���ڿ� ���� �״�� �����ϱ� ���ؼ� const char ���
	{
		//ID = aid;
		strcpy(name, bname);		// ���ڿ��迭�� �����ϰ� �ٷ� �ʱ�ȭ���� �ʴ� ���� strcpy()�� ���Ͽ� �ʱ�ȭ �Ѵ�.
		strcpy(major, cmajor);
		age = dage;
	}
	void StuInfo()
	{
		cout << "ID: " << ID << endl;
		cout << "name: " << name << endl;
		cout << "major: " << major << endl;
		cout << "age: " << age << endl;
	}
};

int main(void)
{
	StudentClass st(001, "������", "���ڰ��а�", 27);	// ��ü�� �����ϸ� �����ڸ� ȣ���ؾ� �Ѵ�.
	st.StuInfo();

	return 0;
}