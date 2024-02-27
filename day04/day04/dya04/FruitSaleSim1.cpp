// file: FruitSaleSim1.cpp
// desc: �� ��ü�� ��ȭ

#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)		//---> ������(���: ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�.)
	{
		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;
	}

	int SalesApples(int money)
	{
		int num = money / APPLE_PRICE;		// �ǸŰ���
		numofApples -= num;					// ���� �������, numofApples = numofApples - num
		myMoney += money;					// �� ��, myMoney = myMoney + money
		return num;
	}

	void ShowSalesResult()
	{
		cout << "���� ���: " << numofApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
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
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << nummofApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}