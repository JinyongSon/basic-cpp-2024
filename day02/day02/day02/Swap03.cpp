#include <iostream>
using namespace std;
/*
	swap함수 구현하기
*/

void swap(int& aa, int& bb)		
{
	int temp = aa;		
	aa = bb;
	bb = temp;
}

int main()
{
	int a = 10;		
	int b = 20;

	cout << "before" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap(a, b);		

	cout << "after" << endl;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}