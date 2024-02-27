#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)	// 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;		// 문자열 크기만큼 메모리 할당을 받기 위해 strlen()을 이용하여 문자열의 길이를 구하여 len에 저장
		name = new char[len];				// len크기만큼 힙 영역 메모리 할당
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const		// name과 age는 값이 변하지 않아야 하기 때문에 const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()		// 소멸자 : 객체를 소멸 시킴
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