#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//�ж�һ�����Ƿ�Ϊ����
int main()
{
	double  a = 0;
	int A = 0;
	printf("����һ��������");
	scanf("%lf", &a);
	/*printf("%lf\n", a);*/
	A = (int)a;
	if (0 != a - A)
	{
		printf("�������С����С���Ȳ�������Ҳ����ż����");
		return 0;
	}
	else
	{
		if (0 == A % 2 || 0 == A)
		{
			printf("ż��");
			return 0;
		}
		else {
			printf("����");
			return 0;
		}
	}
	return 0;
}