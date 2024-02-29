#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* aname, int bage)
	{
		cout << "생성자 호출" << endl;
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy(name, aname);
		age = bage;
	}

	Person(Person& copy) : age(copy.age)
	{
		cout << "복사생성자 호출" << endl;
		this->name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void personInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "객체 소멸" << endl;
	}
};

int main()
{
	Person p("손진용", 30);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}