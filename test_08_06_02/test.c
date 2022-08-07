#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int DigitSum(unsigned int n)
{
	if (n / 10 == 0)
		return n;
	else
		return n % 10 + DigitSum(n / 10);
}
double Pow(int n, int k)
{
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if(k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	//需求，写一个递归函数DigitSum（n），输入一个非负整数，返回组成他的数字之和
	//unsigned int n = 0;
	//int sum = 0;
	//scanf("%d", &n);
	//sum = DigitSum(n);
	//printf("%d", sum);
	//需求，编写一个函数实现n的k的次方，使用递归实现
	int n = 10;
	int k = 3;
	scanf("%d%d",& n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}