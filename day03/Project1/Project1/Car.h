#define __CAR_H__

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
	// 멤버변수, 필드, 속성
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
	// 멤버함수, 메서드, 기능
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};
