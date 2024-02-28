// file: ReturnObjCopycon.cpp
// desc: ���� ������ ȣ��

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) ������ ȣ��" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "SoSimple(const SoSimple& copy) ��������� ȣ��" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "return ����" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();	// SimpleFuncObj(obj)�� �����ϸ� SoSimple ob = SimpleFuncObj(obj)�̹Ƿ� ob�� ����ϱ� ���ؼ� �ӽð�ü�� ����
	obj.ShowData();
	return 0;
}