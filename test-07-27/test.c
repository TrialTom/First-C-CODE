

#include <math.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
//需求：写一个函数，判断一个数是不是质数
int isprime(int x)
{
	int i = 2;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
		else
			continue;
	}
	return 1;
}
//需求：判断闰年
void leapyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
		printf("普通闰年\n");
	else if (x % 400 == 0)
		printf("世纪闰年\n");
	else
		printf("平年\n");
}
int main()
{
	printf("第一题\n");
	Sleep(1000);
	system("cls");
	int a = 10;
	int x = 0;
	int year = 0;
	printf("第一题\n");
	Sleep(1000);
	system("cls");
	printf("输入一个数：\n");
	scanf("%d",&a);
	if (0 == a || 1 == a)
		printf("既不是质数也不是合数.\n");
	else
	{
		x = isprime(a);
		if (x == 0)
			printf("Composite number\n");
		else
			printf("Prime number\n");
	}
	Sleep(2000);
	system("cls");
	printf("第二题\n");
	Sleep(1000);
	system("cls");
	printf("输入年份：\n");
	scanf("%d", &year);
	leapyear(year);
	return 0;
}