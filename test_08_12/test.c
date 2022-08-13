#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//char* my_strcpy(char* dest,const char* src)
//{}
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//int main()
//{
//	//char* (*pf)(char*, const char*) = my_strcpy;
//	//char* (*pfArr[4])(char*, const char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};
//	return 0;
//}

//实现计算器
void menu()
{
	printf("*************************\n");
	printf("***1.add    2.sub  ******\n");
	printf("***3.mul    4.div  ******\n");
	printf("*****    0.exit   *******\n");

}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	int ret = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input > 0 && input <= 4)
		{
			printf("请输入两个操作数：>\n");
			scanf("%d%d", &x, &y);
			ret = pArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出！\n");
		}
		else
		{
			printf("输入格式错误！\n");
		}
	} while (input);
	return 0;
}