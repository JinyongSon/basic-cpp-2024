#include <iostream>
using namespace std;

int main()
{
	const int num = 10;		// num변수를 상수화시킨다.
	//num = 100;			// num이 상수이므로 변경할 수 없다.

	int num1 = 10;
	int *pnum1;			// 포인터변수 선언: 포인터(주소)변수 pnum1 선언. *: 그냥 아무런의미없는 기호
	pnum1 = &num1;		// 변수 num1의 주소값을 포인터변수 pnum1에 저장한다.

	cout << "num에 저장된 값: " << num << endl;
	cout << "num1에 저장된 값: " << num1 << endl;
	cout << "num1의 주소값: " << &num1 << endl;
	cout << "pnum1에 저장된 값: " << pnum1 << endl;
	cout << "pnum1에 저장된 놈의 데이터: " << *pnum1 << endl;	// *: 가리키는 놈의 데이터

	return 0;

}