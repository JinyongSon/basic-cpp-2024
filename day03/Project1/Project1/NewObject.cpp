#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public:
	Simple()	// 생성자(클래스이름과 같은 메서드)
	{
		cout << "I`m simple constructor !" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;	// 심플 클래스 객체를 힙 영역에 생성 후 그 주소를 sp1 포인터 변수에 저장, 변수 타입은 클래스와 같아야함.

	cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;		// 객체를 반환한다.
	free(sp2);
	return 0;
}