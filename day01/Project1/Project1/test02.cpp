#include <iostream>

int global = 100;	// ��������

void func() {
	int a;
	a = 100;	// ��������
}
/*
int main() 
{
	//int val1;	// �޸𸮰���(RAM)�� INTũ��� ��������� �Ҵ�ް� val�̸����� ����Ѵ�.
	//std::cout << "ù ��° �����Է�: ";
	//std::cin >> val1;

	//int val2;
	//std::cout << "�� ��° �����Է�: ";
	//std::cin >> val2;

	//int result = val1 + val2;
	//std::cout << "�������: " << result << std::endl;
	//int val = 100;	// ��������
	//return 0;

	int val1, val2;
	int result = 0;	// ���� ����� ���ÿ� ���� ���� : ���� �ʱ�ȭ
	// int val1;
	// int val2;
	std::cout << "�� ���� �����Է�: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}

	std::cout << "�� �� ������ ���� ��: " << result << std::endl;
	return 0;
}
*/

/*
	�������� = ���ú��� : ����Ǿ��� �����ȿ����� ����� ����(static ������ ����)
*/

/*
	���
		1. �������
			if, swich
		2. �ݺ����
			for, while

		for(�ʱ��; ���ǽ�; ������){

		}
			
			
*/