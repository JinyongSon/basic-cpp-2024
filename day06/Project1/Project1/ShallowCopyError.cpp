// file: ShallowCopyError.cpp
// desc: 디폴트 복사 생성자의 문제점

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		cout << "생성자 호출" << endl;
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy) : age(copy.age)
	{
		cout << "깊은 복사생성자 호출" << endl;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "Called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;		// 복사 생성자 호출
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}

int func(int a) {	// a = 10; num의 10을 복사해서 사용한다.
	a = 10 + a;
	return a;		// a를 리턴한다.
}

int num = 10;
int res = func(num);