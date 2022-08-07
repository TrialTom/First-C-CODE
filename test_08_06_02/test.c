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
	//����дһ���ݹ麯��DigitSum��n��������һ���Ǹ����������������������֮��
	//unsigned int n = 0;
	//int sum = 0;
	//scanf("%d", &n);
	//sum = DigitSum(n);
	//printf("%d", sum);
	//���󣬱�дһ������ʵ��n��k�Ĵη���ʹ�õݹ�ʵ��
	int n = 10;
	int k = 3;
	scanf("%d%d",& n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}