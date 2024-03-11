#include <iostream>
using namespace std;
void cal(int n1, int n2)
{
	if (!n2) throw n2;
	cout << "두 정수의 합: " << n1 + n2 << endl;
	cout << "두 정수의 차: " << n1 - n2 << endl;
	cout << "두 정수의 곱: " << n1 * n2 << endl;
	cout << "두 정수의 나눗셈: " << n1 / n2 << endl;
}

int main(int argc, char * argv[])
{
	int a, b;
	cout << "정수 2개를 입력하세요: " ;
	cin >> a >> b;
	try {
		cal(a, b);
	}
	catch (int exception) {
		cout << "0으로 나눌 수 없습니다" << endl;
	}

	return 0;
}