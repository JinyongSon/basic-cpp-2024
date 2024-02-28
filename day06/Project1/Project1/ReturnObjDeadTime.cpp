// file: ReturnObjDeadTime.cpp
// desc: 按眉狼 积己苞 家戈
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
	cout << "Parm ADR: " << &ob << endl;	// &ob: 按眉ob狼 林家
	return ob;
}

int main(void)
{
	SoSimple obj(7);		// 按眉 obj 积己
	SimpleFuncObj(obj);		// ob 积己, return ob肺 牢秦 烙矫按眉 积己

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);	// 烙矫按眉 林家历厘
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
	New Object: 按眉 obj 林家
	New Copy obj: 按眉 ob 林家
	Parm ADR: 按眉 ob 林家
	New Copy obj: 烙矫按眉 林家
	Destroy obj: 按眉 ob 家戈
	Destroy obj: 烙矫按眉 家戈

	New Copy obj: 按眉 ob 林家
	Parm ADR: 按眉 ob 林家
	New Copy obj: 烙矫按眉 林家
	Destroy obj: 按眉 ob 家戈
	Return Obj 烙矫按眉 林家
	Destroy obj: 烙矫按眉 家戈
	Destroy obj: 按眉 obj 家戈
*/