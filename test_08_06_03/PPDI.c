#define _CRT_SECURE_NO_WARNINGS

//����ȫ���ֲ�������ˮ�ɻ�����
//���0~100000֮�������ˮ�ɻ��������
//ˮ�ɻ�����ָһ��nλ��Ĭ����λ���ֵ�n�η�֮�͸պõ��ڸ���������153 = 1^3+5^3+3^3;��153��һ��ˮ�ɻ���
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