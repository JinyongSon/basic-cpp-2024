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
	std::cout << "���� " << age << "���� " << job << " " << name << "�Դϴ�." << std::endl;

}

int main()
{
	Human h("ȫ�浿", 50, "���");
	h.humanInfo();
	return 0;
}