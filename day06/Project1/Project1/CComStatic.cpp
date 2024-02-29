// file: CComStatic.cpp
// desc: C언어 static
#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;		// 이 문장은 딱 한번 실행이 된다.
	//int cnt = 0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}