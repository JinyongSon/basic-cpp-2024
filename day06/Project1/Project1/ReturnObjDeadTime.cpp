// file: ReturnObjDeadTime.cpp
// desc: 객체의 생성과 소멸
#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;	// &ob: 객체ob의 주소
	return ob;
}

int main(void)
{
	SoSimple obj(7);		// 객체 obj 생성
	SimpleFuncObj(obj);		// ob 생성, return ob로 인해 임시객체 생성

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);	// 임시객체 주소저장
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
	New Object: 객체 obj 주소
	New Copy obj: 객체 ob 주소
	Parm ADR: 객체 ob 주소
	New Copy obj: 임시객체 주소
	Destroy obj: 객체 ob 소멸
	Destroy obj: 임시객체 소멸

	New Copy obj: 객체 ob 주소
	Parm ADR: 객체 ob 주소
	New Copy obj: 임시객체 주소
	Destroy obj: 객체 ob 소멸
	Return Obj 임시객체 주소
	Destroy obj: 임시객체 소멸
	Destroy obj: 객체 obj 소멸
*/