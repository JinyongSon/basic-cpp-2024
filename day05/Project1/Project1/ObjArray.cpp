/*
	°´Ã¼¹è¿­
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char* aname, int bage)
	{
		cout << "»ý¼ºÀÚ È£Ãâ" << endl;
		strcpy(name, aname);
		age = bage;
	}
	void HumanInfo()
	{
		cout << "ÀÌ¸§: " << name << endl;
		cout << "³ªÀÌ: " << age << endl;
	}
	~Human()
	{
		cout << "¼Ò¸êÀÚ È£Ãâ" << endl;
	}
};
int main()
{
	Human h[3] = { Human("¼ÕÁø¿ë", 27), Human("±èÃ¶¼ö", 40), Human("±è¿µÈñ", 30) }; // °´Ã¼¹è¿­

	for (int i = 0; i < 3; i++)
	{
		h[i].HumanInfo();
	}

	Human* h1 = new Human("°¡³ª´Ù", 50);	// °´Ã¼ Æ÷ÀÎÅÍ·Î ¸â¹ö Á¢±Ù
	Human h2("¶ó¸¶¹Ù", 30);					// °´Ã¼·Î ¸â¹öÁ¢±Ù

	h1->HumanInfo();
	h2.HumanInfo();

	delete h1;

	return 0;
}