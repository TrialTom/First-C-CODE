#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//判断计算机存储是大端存储还是小端存储
int check_sys()
{
	int a = 1;
	
	//返回1小端，返回0大端
	return *((char*)&a);
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}