#include <iostream>
#include <algorithm>
using namespace std;
/*
	swap함수 구현하기
*/

void swap(int *aa, int *bb)		// 주소를 받을수 있는 포인터변수를 선언
{
	int temp = *aa;		// 주소의 데이터를 참조
	*aa = *bb;
	*bb = temp;
}

int main()
{	
	int a = 10;		// 지역변수
	int b = 20;

	cout << "before" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(a, b);		// 변수의 주소를 전달

	cout << "after" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}