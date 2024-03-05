#include <iostream>
using namespace std;

class Point {
	int num1, num2;
public:
	Point(int anum1, int bnum2) : num1(anum1), num2(bnum2)
	{}
	void viewPoint()
	{
		cout << '[' << num1 << ", " << num2 << ']' << endl;
	}
	Point operator+(Point& ref)
	{
		Point pos(num1 + ref.num1, num2 + ref.num2);
		return pos;
	}
	Point operator+(int num)
	{
		Point apos(num1 + num, num2 + num);
		return apos;
	}
	friend Point operator+(int num, Point ref);
};
Point operator+(int num, Point ref)
{
	ref.num1 += num;
	ref.num2 += num;
	return ref;
}

namespace std
{
	class ostream
	{
	public:
		ostream& operator<<(ostream& (*fp)(ostream& ostm))
		{
			return fp(*this);
		}
	};
}

int main()
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
}