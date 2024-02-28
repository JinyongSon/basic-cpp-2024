// file: ReturnObjCopycon.cpp
// desc: 복사 생성자 호출

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout << "SoSimple(int n) 생성자 호출" << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "SoSimple(const SoSimple& copy) 복사생성자 호출" << endl;
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
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).ShowData();	// SimpleFuncObj(obj)를 실행하면 SoSimple ob = SimpleFuncObj(obj)이므로 ob를 사용하기 위해서 임시객체를 만듬
	obj.ShowData();
	return 0;
}