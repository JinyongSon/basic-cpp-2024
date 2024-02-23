#pragma once
class Human
{
private:
	char name[20];
	int age;
	char job[20];

public:
	Human(const char *aname, int bage, const char *cjob);
	void humanInfo();
};