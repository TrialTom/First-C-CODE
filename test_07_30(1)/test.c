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
	printf("��n�Ľ׳ˣ����Լ���n��쳲���������\n");
	scanf("%d", &n);
	ret = Facl(n);
	Fib = Fibonacci(n);
	printf("%d\n", ret);
	printf("��%d��쳲��������ǣ�%d\n", n, Fib);

	return 0;
}