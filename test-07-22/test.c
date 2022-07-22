#define _CRT_SECURE_NO_WARNINGS

//需求，计算n的阶乘
#include <stdio.h>
int main()
{
	double a = 0;
	int b = 0;
	int i = 0;
	int sum = 1;
	printf("计算n的阶乘，输入n的值：\n");
	scanf("%lf", &a);
	b = (int)a;
	if (0 != (a - b))
		printf("不支持小数的阶乘。");
	else
	{
		if (0 == (b % 2))
		{
			for (i = 1, b = (int)a; i < b; i++, b--)
			{
				sum *= (i * b);
			}
			printf("n的阶乘sum = %d", sum);
			return 0;
		}
		else
		{
			for (i = 1, b = (int)a; i <= b; i++, b--)
			{
				if (i == b)
				{
					sum *= i;
				}
				else
				sum *= (i * b);
			}
			printf("n的阶乘sum = %d\n", sum);
			return 0;
		}
	}
	return 0;
}
