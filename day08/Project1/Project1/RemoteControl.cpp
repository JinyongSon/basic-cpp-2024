// file: RemoteControl.cpp
// desc: 테스트 문제
#include <iostream>
#include <cstring>
using namespace std;

class RemoteControl
{
public:
	virtual void on()
	{
		cout << "TV를 켭니다." << endl;
	}
};

class SamsungTv: public RemoteControl
{
public:
	virtual void on()
	{
		cout << "삼성 TV on" << endl;
	}
};

class LgTv: public RemoteControl
{
public:
	virtual void on()
	{
		cout << "엘지 TV on" << endl;
	}
};

int main(void)
{
	RemoteControl *remote = new SamsungTv();
	remote->on();

	remote = new LgTv();
	remote->on();;
	
	delete remote;
	
	return 0;
}