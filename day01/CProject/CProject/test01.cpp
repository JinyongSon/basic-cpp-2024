#include <iostream>

using namespace std;

void add(int d, int c)
{
	cout << "두 수의 합 : " << d + c << endl;
}

void minuss(int d, int c)
{
	cout << "두 수의 차 : " << d - c << endl;
}

void multiple(int d, int c)
{
	cout << "두 수의 곱 : " << d * c << endl;
}

void divide(int d, int c)
{
	if (d == 0 or c == 0) {
		cout << "정수만 입력하세요." << endl;
	}
	else {
		cout << "두 수의 나눗셈 : " << d / c << endl;
	}
}

int main(void)
{
	int a, b;
	char op;
	cout << "두 수를 입력하세요 > " << endl;
	cin >> a >> b;
	cout << "연산자 입력하세요 > " << endl;
	cin >> op;

	if (op == '+') {
		add(a, b);
	}
	else if (op == '-') {
		minuss(a, b);
	}
	else if (op == '*') {
		multiple(a, b);
	}
	else if (op == '/') {
		divide(a, b);
	}
	else {
		cout << "잘못 입력하셨습니다." << endl;
	}

	return 0;
}