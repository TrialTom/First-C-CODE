#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//判断大小存储
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

enum HUMAN
{
	NAME,
	SEX,
	HIGHT
}human;
int main()
{
	int a = 0X11223344;
	//
	//大小端字序问题
	//讨论一个数据，放在内存中的存放的字节顺序

	//char* b = (char*)&a;
	//printf("%x ", *b);
	//int ret = check_sys();
	//if (1 == ret)
	//{
	//	printf("小端字节序存储\n");
	//}
	//else
	//{
	//	printf("大端字节序存储\n");
	//}
	printf("%d", sizeof(enum HUMAN));

	return 0;
}