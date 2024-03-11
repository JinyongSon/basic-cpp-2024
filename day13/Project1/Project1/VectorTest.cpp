#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	while (true)
	{
		int n;
		int sum = 0;
		int ave;
		cout << "정수를 입력하세요(0을 입력하면 종료): ";
		cin >> n;
		if (n == 0) break;
		v.push_back(n);
		for (int i = 0; i < v.size(); ++i)
		{
			sum += v[i];
			cout << v[i] << ' ';
		}
		cout << endl;
		ave = sum / v.size();
		cout << "평균 = " << ave << endl;
	}

	cout << "프로그램을 종료합니다." << endl;
}