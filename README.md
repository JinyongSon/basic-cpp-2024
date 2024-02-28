# 심화 프로그래밍 2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	
- C++ 기초
	- 변수 : 무언가를 저장할 수 있는 공간
	- 입력받기 cin
	- 지역변수 : 선언되어진 범위안에서만 사용이 가능
	- 전역변수 : 어떤 변수 영역 내에서도 접근할 수 있는 변수
	- 자료형
		- 문자 : 문자(char) / 문자열
		- 숫자 : 정수(int) / 실수
	- if문
	- swich문
	- 반복문
		- for문
		- while문
	- 오버로딩 : 함수 이름은 같으나 매개변수가 다름
	- 오버라이딩 : 재정의
	
## 2일차
- C++ 기초 (중요)
	- 함수 선언, 정의, 호출
	- 매크로 함수
	- namespace
	- pointer
	- C 에서 메모리
		- 스택 : 지역변수, 매개변수
		- heap : 사용자에게 할당된 영역
			- 사용 할려면 malloc()(C++:new)으로 할당 받고 free()(C++:delete)로 반환
		- data : 함수, 전역변수, 상수, 문자리터럴
	- swap
	- 참조자(Reference) int* ptr = &num1; // 포인터 변수 ptr에 num1 주소를 넣어라 ,int& num2 = num1 // 참조자 num2에 변수 num1을 넣어라
		- 잘못된 참조의 반환 : 지역변수를 참조의 형태로 반환

## 3일차
- C++ 기초
	- const 참조자
	- new, delete
	- class, 객체
		- class 안에 있는 함수를 메서드라고 함
		- class이름과 메서드 이름이 같은 것을 생성자 라고 함
	- C언어 타입의 구조체: 구조체 멤버로 멤버 변수만 가진다
	- C++ 타입의 구조체: 구조체 멤버로 멤버 변수와 멤버 함수를 가진다
	- C++ 파일분할

## 4일차
- C++ 기초
	- 두 객체간의 대화방법
	- 정보은닉
	- 캡슐화
	- 생성자(Constructor)와 소멸자(Destructor)
		- 멤버 이니셜라이즈

## 5일차
- C++ 기초
	- 생성자(클래스 이름과 같은 멤버함수로 출력은 없다.)
		- 객체 생성시 자동으로 호출되는 멤버함수
		- 모든 클래스는 디폴트 생성자를 가지고 있다.
		- 만약 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
		- 멤버변수들의 초기화를 담당한다.
	- 멤버 이니셜라이즈
		- 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
		- const 변수와 참조변수의 초기화에 사용
	- 객체 배열
		- 객체로 이루어진 배열
	- 객체 포인트 배열로
		- 객체의 주소 값 저장이 가능한 포인터 변수로 이루어진 배열
	- this 포인터
		- this는 객체자신의 주소 값을 의미
	- Self-Reference의 반환
		- 객체 자신을 참조할 수 있는 참조자
	- 복사 생성자

## 6일차
- C++ 기초
	- 복사 생성자
		- 깊은 복사
			- 포인터로 참조하는 대상까지 깊게 복사
		- 얕은 복사
		- 복사 생성자 호출
	- const 객체 생성후 호출
	- const와 함수 오버로딩
	- friend
		- friend 선언을 하면, private 멤버에 직접 접근 가능
	- C언어 static
		- 전역변수에 선언된 static의 의미
			- 선언된 파일 내에서만 참조를 허용
		- 함수 내에 선언된 static의 의미
			- 한번만 초기화되고, 지역변수와 달리 함수를 빠져나가도 소멸되지 않음

## 7일차

## 8일차

## 9일차

## 10일차