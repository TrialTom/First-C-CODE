#define _CRT_SECURE_NO_WARNINGS
//猜数字游戏
//需求：
//1.电脑生成一个随机数
//2、猜数字
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void grame()
{
	int i = 0;
	int num = 0;
	
	i = rand() % 100;
	printf("输入你心中的数：\n");

	while (1)
	{
		scanf("%d", &num);
		if (i == num)
		{
			printf("猜对了！\n");
			break;
		}
		else if (i < num)
		{
			printf("数字大了！！\n");
			continue;
		}
		else
		{
			printf("数字小了！！\n");
			continue;
		}

	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
	
		printf("********猜数字********\n");
		printf("1、开始游戏！\n");
		printf("2、结束游戏!\n");
		printf("请选择（1/2）:\n");
		scanf("%d", &i);
		if (1 == i)
			grame();
		else if (2 == i)
			break;
		else
		{
			printf("输入错误！请重新输入。");
			Sleep(1000);
			system("cls");
			continue;
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}