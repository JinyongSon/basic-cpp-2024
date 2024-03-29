// file: Struct01.cpp
// desc: C언어 구조체
#include <iostream>
/*
	C 언어 타입의 구조체 : 구조체 멤버로 멤버 변수만 가진다.
*/
typedef struct human	// human 구조체(사용자 정의 자료형)
{
	char name[20];	// 속성: 멤버변수(name, age, job)
	int age;
	char job[20];
}Human;		// 앞으로 human 구조체를 Human으로 사용하겠다.

void showHuman(Human h)
{
	printf("name: %s age: %d job: %s\n", h.name, h.age, h.job);
}

int main()
{
	int a = 10;
	human h1 = { "홍길동", 50, "의적" };		// human타입의 변수를 선언하고 초기화를 시킨다.
	showHuman(h1);

	return 0;
}