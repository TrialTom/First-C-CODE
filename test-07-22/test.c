#define _CRT_SECURE_NO_WARNINGS

//���󣬼���n�Ľ׳�
#include <stdio.h>
int main()
{
	double a = 0;
	int b = 0;
	int i = 0;
	int sum = 1;
	printf("����n�Ľ׳ˣ�����n��ֵ��\n");
	scanf("%lf", &a);
	b = (int)a;
	if (0 != (a - b))
		printf("��֧��С���Ľ׳ˡ�");
	else
	{
		if (0 == (b % 2))
		{
			for (i = 1, b = (int)a; i < b; i++, b--)
			{
				sum *= (i * b);
			}
			printf("n�Ľ׳�sum = %d", sum);
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
			printf("n�Ľ׳�sum = %d\n", sum);
			return 0;
		}
	}
	return 0;
}
