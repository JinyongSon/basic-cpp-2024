#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
//#define _CRT_SECURE_NO_WARNINGS
/*
	C언어에서 사용
*/

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);	// C:heap영역에 20Byte 메모리 할당
	printf("char size: %llu\n", sizeof(char));
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	cout << str << endl;
	free(str);
	return 0;
}