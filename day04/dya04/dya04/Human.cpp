#include <iostream>
#include <cstring>
using namespace std;

class Human
{
	char name[20];
	const int age;
	char job[20];
public:
	Human(const char* aname, int bage, const char* cjob) : age(bage)
	{
		strcpy(name, aname);
		//age = bage;
		strcpy(job, cjob);
	}

	void HumanInfo()
	{
		std::cout << "���� " << age << "���� " << job << " " << name << "�Դϴ�." << std::endl;

	}
};

int main(void)
{
	Human hm("������", 27, "���");
	hm.HumanInfo();

	return 0;
}