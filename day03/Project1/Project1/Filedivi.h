#pragma once

/*
	Filedivi.h 헤더파일: 선언
*/
class AClass
{
	//private: 생락해도 됨 디폴트 값 private:
private:
	int num;

public:		// 접근제어지시자
	AClass(int anum);
	void  AInfo();

};