#include <iostream>
#include <cstring>
#include "FilediviTest01.h"
Human::Human(const char *aname, int bage, const char *cjob)
{
	strcpy(name, aname);
	age = bage;
	strcpy(job, cjob);
}
void Human::humanInfo()
{
	std::cout << "나는 " << age << "살인 " << job << " " << name << "입니다." << std::endl;

}

int main()
{
	Human h("홍길동", 50, "백수");
	h.humanInfo();
	return 0;
}