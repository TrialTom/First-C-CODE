#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//统计函数返回参数二进制中的1的个数
int StatisticalOne(unsigned int num)
{
	int count = 0;
	for (;num > 0;)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}
	return count;
}int count_bit_one(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0;i < 32;i ++)
	{
		if (n & 1 == 1)
		{
			count++;
		}
		n = n >> 1;
	}
	return count;
}
int Statistical_One1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
}
int main()
{
	int n = 0;
	int n1 = 0;
	int n2 = 0;
	scanf("%d", &n);
	n1 = StatisticalOne(n);
	n2 = count_bit_one(n);
	printf("StatisticalOne； %d\n", n1);
	printf("count_bit_one  %d\n", n2);
	n1 = Statistical_One1(n);
	printf("Statistical_One1 %d", n1);
	return 0;
}