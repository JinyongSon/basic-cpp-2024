#include <iostream>

using namespace std;

void add(int d, int c)
{
	cout << "�� ���� �� : " << d + c << endl;
}

void minuss(int d, int c)
{
	cout << "�� ���� �� : " << d - c << endl;
}

void multiple(int d, int c)
{
	cout << "�� ���� �� : " << d * c << endl;
}

void divide(int d, int c)
{
	if (d == 0 or c == 0) {
		cout << "������ �Է��ϼ���." << endl;
	}
	else {
		cout << "�� ���� ������ : " << d / c << endl;
	}
}

int main(void)
{
	int a, b;
	char op;
	cout << "�� ���� �Է��ϼ��� > " << endl;
	cin >> a >> b;
	cout << "������ �Է��ϼ��� > " << endl;
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
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
	}

	return 0;
}