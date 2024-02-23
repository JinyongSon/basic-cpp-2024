#include <iostream>

class AClass
{
	//private: 생락해도 됨 디폴트 값 private:
private:
	int num;

public:		// 접근제어지시자
	AClass(int anum)	// 생성자: 초기화 담당
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