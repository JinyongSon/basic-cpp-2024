#include <iostream>
using namespace std;
/*
	잘못된 참조의 반환
*/

int& RetuRefFunc(int n)
{
	int num = 20;
	num += n;
	return num;		// num을 참조의 형태로 반환하고 있음
}

int main()
{
	int& ref = RetuRefFunc(10);		// 함수가 반환이 되면, 지역변수 num은 소멸이 된다. 지역변수를 참조형으로 반환하는 일은 x

	return 0;
}