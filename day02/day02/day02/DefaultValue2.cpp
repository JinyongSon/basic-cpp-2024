#include <iostream>
int Adder(int num1 = 1, int num2 = 2);	// 함수 선언

int main(void)
{
	std::cout << Adder() << std::endl;	// 함수 호출
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)	// 함수 정의
{
	return num1 + num2;
}

// 클래스 안에 들어가는 함수를 메서드 라고 부른다. *****