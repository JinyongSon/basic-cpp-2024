/*
	�޸� �����Ҵ� : new ������ ���
	���α׷� ���� �߿� �޸𸮸� �Ҵ� �޴´�.
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "int size: " << sizeof(int) << endl;
	int *pi = new int;		// new�����ڸ� ���ؼ� heap������ int(4byte) ũ�⸸ŭ �޸𸮰����� �Ҵ�ް� �Ҵ����
							// �޸��� �ּҸ� ���Ͻ����ش�.
	*pi = 10;
	cout << "Pi�� ����Ű�� ���� ����� ��: " << *pi << endl;

	delete pi;				// ���� �Ҵ���� �޸� ������ ��ȯ�Ѵ�.

	int *pary = new int[10];	// �迭���·� �Ҵ�
	cout << sizeof(pary) << endl;
	for (int i = 0; i < sizeof(pary); i++)
	{
		pary[i] = i + 10;		// �迭�� �� �濡 ����(���)���� ���� �ִ´�. ex) pary[0] = 10
	}

	for (int i = 0; i < sizeof(pary); i++)
	{
		printf("pary[%d] : %d\n", i, pary[i]);
	}

	delete []pary;

	return 0;
}