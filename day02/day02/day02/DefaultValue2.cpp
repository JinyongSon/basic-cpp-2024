#include <iostream>
int Adder(int num1 = 1, int num2 = 2);	// �Լ� ����

int main(void)
{
	std::cout << Adder() << std::endl;	// �Լ� ȣ��
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)	// �Լ� ����
{
	return num1 + num2;
}

// Ŭ���� �ȿ� ���� �Լ��� �޼��� ��� �θ���. *****