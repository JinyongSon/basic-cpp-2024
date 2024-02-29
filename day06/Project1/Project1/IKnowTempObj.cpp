// file: IKnowTempObj.cpp
// desc: 임시객체

#include<iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100);		// Temporary t(100); 객체 이름 없이 사용하면 임시객체가 만들어짐
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);	// 임시객체는 참조 할 수 없지만 const 사용하면 임시객체 참조 가능
	cout << "********** end of main!" << endl << endl;
	return 0;
}