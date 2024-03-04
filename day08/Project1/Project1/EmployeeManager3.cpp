// file: EmployeeManager3.cpp
// desc: EmployeeManager2.cpp 확장
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
	char name[100];
public:
	Employee(const char* name)

	{
		strcpy(this->name, name);
	}
	void ShowYourName() const
	{
		cout << "name: " << name << endl;
	}
	virtual int GetPay() const
	{
		return 0;
	}
	virtual void ShowSalaryInfo() const
	{}
};

class PermanentWorker : public Employee
{
private:
	int salary;		// 월 급여
public:
	PermanentWorker(const char* name, int money)
		: Employee(name), salary(money)
	{}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class TemporaryWorker : public Employee
{
private:
	int workTime;	// 이 달에 일한 시간의 합계
	int payPerHour; // 시간당 급여
public:
	TemporaryWorker(const char* name, int pay)
		:Employee(name), workTime(0), payPerHour(pay)
	{}
	void AddWorkTime(int time)
	{
		workTime += time;
	}
	int GetPay() const
	{
		return workTime * payPerHour;
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class SalesWorker : public PermanentWorker
{
private:
	int salesResult;
	double bonusRatio;
public:
	SalesWorker(const char* name, int money, double ratio)
		: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
	{}
	void AddSalesResult(int value)
	{
		salesResult += value;
	}
	int GetPay() const
	{
		cout << "SalesWorker " << endl;		// 오버라이딩된 멤버함수는 자식것이 실행된다.
		return PermanentWorker::GetPay()	// 따라서 재정의된 부모것을 호출할려면 PermanentWorker(부모)의 GetPay 함수 호출
			+ (int)(salesResult * bonusRatio);		
	}
	void ShowSalaryInfo() const
	{
		ShowYourName();
		cout << "salary: " << GetPay() << endl << endl;
	}
};
class EmployeeHandler
{
private:
	Employee* empList[50];		// 객체포인터 배열
	int empNum;
public:
	EmployeeHandler() :  empNum(0)
	{}
	void AddEmployee(Employee* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo() const
	{
		for(int i=0; i<empNum; i++)
			empList[i]->ShowSalaryInfo();
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();

		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));

	TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
	alba->AddWorkTime(5);
	handler.AddEmployee(alba);

	SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
	seller->AddSalesResult(7000);
	handler.AddEmployee(seller);

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();
	return 0;
}