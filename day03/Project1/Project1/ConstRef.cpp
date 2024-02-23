#include <iostream>
using namespace std;

int main()
{
	const int num = 10;		// 상수를 선언할때는 바로 초기화를 해야만 한다.
	const int& ref = num;
	cout << num << endl;


	return 0;
}