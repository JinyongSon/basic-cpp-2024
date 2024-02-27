#include <iostream>
#include <cstring>
using namespace std;


class StudentClass {
	const int ID;
	char name[20];		// 문자열배열을 선언하고 바로 초기화하지 않는경우는 strcpy()를 통하여 초기화 한다.
	char major[20];
	int age;

public:
	// 문자열은 주소기 때문에 포인터 변수에 넣어서 사용한다. - 문장열의 첫번째 문자 주소가 저장된다.
	// 멤버 이니셜라이즈는 객체 생성시 초기화되지 않는 멤버들을 초기화 할때 사용한다. 즉 객체생성과 상관없이 미리 초기화가 된다.
	StudentClass(int aid, const char *bname, const char *cmajor, int dage) : ID(aid) // 멤버 이니셜라이즈		// 문자열 원본 그대로 유지하기 위해서 const char 사용
	{
		//ID = aid;
		strcpy(name, bname);		// 문자열배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다.
		strcpy(major, cmajor);
		age = dage;
	}
	void StuInfo()
	{
		cout << "ID: " << ID << endl;
		cout << "name: " << name << endl;
		cout << "major: " << major << endl;
		cout << "age: " << age << endl;
	}
};

int main(void)
{
	StudentClass st(001, "손진용", "전자공학과", 27);	// 객체를 생성하면 생성자를 호출해야 한다.
	st.StuInfo();

	return 0;
}