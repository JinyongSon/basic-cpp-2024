#include <iostream>

class AClass
{
	//private: �����ص� �� ����Ʈ �� private:
private:
	int num;

public:		// ��������������
	AClass(int anum)	// ������: �ʱ�ȭ ���
	{
		num = anum;
	}
	void  AInfo()
	{
		std::cout << "A::num: " << num << std::endl;
	}
};

int main()
{
	AClass a(10);
	a.AInfo();

	return 0;
}