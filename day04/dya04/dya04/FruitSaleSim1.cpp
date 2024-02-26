// file: FruitSaleSim1.cpp
// desc: 두 객체의 대화

#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)		//---> 생성자(기능: 객체를 생성하고 초기화한다.)
	{
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}

	int SalesApples(int money)
	{
		int num = money / APPLE_PRICE;		// 판매개수
		numofApples -= num;					// 남은 사과갯수, numofApples = numofApples - num
		myMoney += money;					// 번 돈, myMoney = myMoney + money
		return num;
	}

	void ShowSalesResult()
	{
		cout << "남은 사과: " << numofApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int nummofApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		nummofApples = 0;
	}

	void BuyApples(FruitSeller &refseller, int money)	// int& num = n;
	{
		nummofApples += refseller.SalesApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << nummofApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}