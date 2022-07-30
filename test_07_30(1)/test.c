#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int Facl(int n)
{
	if (n >= 1)
		return  n * Facl(n - 1);
	else
		return 1;
}
extern Fibonacci(int);
int main()
{
	int ret = 0;
	int n = 0;
	int Fib = 0;
	printf("求n的阶乘！！以及第n个斐波那契数列\n");
	scanf("%d", &n);
	ret = Facl(n);
	Fib = Fibonacci(n);
	printf("%d\n", ret);
	printf("第%d个斐波那契数是：%d\n", n, Fib);

	return 0;
}