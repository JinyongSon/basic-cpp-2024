#include <iostream>
using namespace std;
/*
	�߸��� ������ ��ȯ
*/

int& RetuRefFunc(int n)
{
	int num = 20;
	num += n;
	return num;		// num�� ������ ���·� ��ȯ�ϰ� ����
}

int main()
{
	int& ref = RetuRefFunc(10);		// �Լ��� ��ȯ�� �Ǹ�, �������� num�� �Ҹ��� �ȴ�. ���������� ���������� ��ȯ�ϴ� ���� x

	return 0;
}