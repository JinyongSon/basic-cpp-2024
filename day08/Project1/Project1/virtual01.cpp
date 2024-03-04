// file: virtual01.cpp
// desc: 가상함수
#include <iostream>
using namespace std;

class Base
{
public:
	Base() {};
	~Base() {};

	virtual void func1() { cout << "Base::func1()" << endl; }
	virtual void func2() { cout << "Base::func2()" << endl; }
	void func3() { cout << "Base::func3()" << endl; }

};

class Drived : public Base
{
public:
	void func1() { cout << "Drived::func1()" << endl; }
	void func2() { cout << "Drived::func2()" << endl; }
	void func3() { cout << "Drived::func3()" << endl; }
};
int main()
{
	Base b;			// Base 타입의 객체변수
	Drived d;		// Drived 타입의 객체변수
	Base* pb = new Drived();	// Base 타입의 객체 포인터

	pb->func1();
	pb->func2();
	pb->func3();

	delete pb;

	return 0;
}