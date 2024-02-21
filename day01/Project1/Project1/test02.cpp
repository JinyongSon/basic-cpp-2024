#include <iostream>

int global = 100;	// 전역변수

void func() {
	int a;
	a = 100;	// 지역변수
}
/*
int main() 
{
	//int val1;	// 메모리공간(RAM)에 INT크기로 저장공간을 할당받고 val이름으로 사용한다.
	//std::cout << "첫 번째 숫자입력: ";
	//std::cin >> val1;

	//int val2;
	//std::cout << "두 번째 숫자입력: ";
	//std::cin >> val2;

	//int result = val1 + val2;
	//std::cout << "덧셈결과: " << result << std::endl;
	//int val = 100;	// 지역변수
	//return 0;

	int val1, val2;
	int result = 0;	// 변수 선언과 동시에 값을 대입 : 변수 초기화
	// int val1;
	// int val2;
	std::cout << "두 개의 숫자입력: ";
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

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}
*/

/*
	지역변수 = 로컬변수 : 선언되어진 범위안에서만 사용이 가능(static 영역에 저장)
*/

/*
	제어문
		1. 선택제어문
			if, swich
		2. 반복제어문
			for, while

		for(초기식; 조건식; 증감식){

		}
			
			
*/