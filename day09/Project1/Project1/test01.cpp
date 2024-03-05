﻿#include <iostream>
using namespace std;

class Myclass {
private:
	int num;
public:
	Myclass(int anum = 0) : num(anum)
	{}
	void print() const 
	{
		cout << "value: " << num << endl;
	}
	Myclass operator+(Myclass &ref)
	{
		return Myclass(num + ref.num);
	}

};

int main()
{
	Myclass a(10);
	a.print();			// value: 10

	Myclass b(a);
	b.print();			// value: 10

	Myclass c = b;
	c.print();			// value: 10

	Myclass d = a + b + c;
	d.print();			// value: 30
	return 0;
}