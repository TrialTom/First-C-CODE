#define _CRT_SECURE_NO_WARNINGS
//代码是在vs2022环境下跑的
#include <stdio.h>
//判断一个数是否为奇数
int main()
{
	double  a = 0;
	int A = 0;
	printf("输入一个整数：");
	scanf("%lf", &a);
	/*printf("%lf\n", a);*/
	A = (int)a;
	if (0 != a - A)
	{
		printf("输入的是小数，小数既不是奇数也不是偶数！");
		return 0;
	}
	else
	{
		if (0 == A % 2 || 0 == A)
		{
			printf("偶数");
			return 0;
		}
		else {
			printf("奇数");
			return 0;
		}
	}
	return 0;
}
