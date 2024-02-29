/*
	객체배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char* aname, int bage)
	{
		cout << "생성자 호출" << endl;
		strcpy(name, aname);
		age = bage;
	}
	void HumanInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Human()
	{
		cout << "소멸자 호출" << endl;
	}
};
int main()
{
	Human h[3] = { Human("손진용", 27), Human("김철수", 40), Human("김영희", 30) }; // 객체배열

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);	// 객체 포인터로 멤버 접근
	Human h2("라마바", 30);					// 객체로 멤버접근

	h1->HumanInfo();
	h2.HumanInfo();

	delete h1;

	return 0;
}