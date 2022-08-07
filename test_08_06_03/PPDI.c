#define _CRT_SECURE_NO_WARNINGS

//超完全数字不变数（水仙花数）
//求出0~100000之间的所有水仙花数并输出
//水仙花数是指一个n位数默契各位数字的n次方之和刚好等于该数本身，如153 = 1^3+5^3+3^3;则153是一个水仙花数
#include <stdio.h>
#include <math.h>
int BIT(int n)
{
	int i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return i;
}
void PPDI(int n)
{
	int i = 0;
	int sum = 0;
	int num = 0;
	int bit = 0;
	while (n)
	{
		num = n;
		sum = 0;
		bit = BIT(n);
		while (num >0)
		{
			i =num % 10;
			sum += pow(i, bit);
			num = num / 10;
		}
		if (sum == n)
			printf("%d ", n);
		n--;
	}
}
int main()
{
	unsigned int n = 100000;
	PPDI(n);
	return 0;
}