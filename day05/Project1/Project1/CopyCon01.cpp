/*
	복사생성자: 객체를 복사할때 호출되는 생성자
	따라서 복사할 객체를 입력으로 가져가야하는데 이때 원본 객체의 참조를 입력으로 받아야 한다.
*/
#include <iostream>
using namespace std;

class A {
public:
	A() {
		cout << "디폴트 생성자 호출" << endl;
	}
	A(int n)
	{
		cout << "A(int n) 생성자 호출" << endl;
	}
	A(const A& r) {		// 복사생성자
		cout << "A(const A& r) 생성자 호출" << endl;
	}
};

int main()
{
	A obj1;			// 디폴트 생성자로 객체 생성
	A obj2(10);		// 입력 하나 가지는 생성자 호출
	A obj3(obj2);	// 복사 생성자 호출

	return 0;
}