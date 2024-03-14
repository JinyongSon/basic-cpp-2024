// while문과 if문만으로 배열 순서를 바꾸어 저장 출력하시오.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	char ary[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	int n = sizeof(ary);
	char reverseAry[sizeof(ary)];
	int index = n - 1;
	int currentIndex = 0;

	while (currentIndex < n) {
		reverseAry[index] = ary[currentIndex];
		++currentIndex;
		--index;
	}

	int i = 0;
	while (true)
	{
		if (i >= 0 && i < n)
		{
			cout << reverseAry[i] << " ";
			i++;
		}
		else
		{
			break;
		}
	}

	return 0;
}
