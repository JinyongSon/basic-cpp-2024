#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}
	AA(const AA& copy)
	{
		this->a = copy.a;
		this->b = copy.b;
		cout << "복사 생성자 호출" << endl;
	}
	void AAInfo() {
		cout << a << " " << b << endl;
	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();

	/*AA obj2(obj1);
	obj2.AAInfo();*/

	AA obj2 = obj1;
	obj2.AAInfo(); 

	return 0;
}