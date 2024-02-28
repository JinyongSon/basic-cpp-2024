// file: ReturnObjDeadTime.cpp
// desc: ��ü�� ������ �Ҹ�
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
	cout << "Parm ADR: " << &ob << endl;	// &ob: ��üob�� �ּ�
	return ob;
}

int main(void)
{
	SoSimple obj(7);		// ��ü obj ����
	SimpleFuncObj(obj);		// ob ����, return ob�� ���� �ӽð�ü ����

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);	// �ӽð�ü �ּ�����
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
	New Object: ��ü obj �ּ�
	New Copy obj: ��ü ob �ּ�
	Parm ADR: ��ü ob �ּ�
	New Copy obj: �ӽð�ü �ּ�
	Destroy obj: ��ü ob �Ҹ�
	Destroy obj: �ӽð�ü �Ҹ�

	New Copy obj: ��ü ob �ּ�
	Parm ADR: ��ü ob �ּ�
	New Copy obj: �ӽð�ü �ּ�
	Destroy obj: ��ü ob �Ҹ�
	Return Obj �ӽð�ü �ּ�
	Destroy obj: �ӽð�ü �Ҹ�
	Destroy obj: ��ü obj �Ҹ�
*/