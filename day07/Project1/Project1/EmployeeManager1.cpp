// file: EmployeeManager1.cpp
// desc: 정규직 직원의 관리 목적으로 정의된 클래스
#include <iostream>
#include <cstring>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;		// 매달 지불해야 하는 급여액
public:
	PermanentWorker(const char* aname, int money)
		: salary(money)
	{
		strcpy(this->name, aname);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler
{
private:
	PermanentWorker* empList[50];	// 객체포인터 배열
	int empNum;
public:
	EmployeeHandler() : empNum(0)
	{}
	void AddEmployee(PermanentWorker* emp)		// 정규직 객체의 포인터를 받아서 empList 배열에 집어넣는다.
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();	// empList배열의 요소값(객체주소)을 통해서 멤버함수에 접근
		}
	}
	void ShowTotalSalary()
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum: " << sum << endl;
	}

	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("JUN", 2000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}