#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�������������Լ��

//˼·��շת�����
int main()
{
	int i = 56, k = 23;
	int n = 1;
	int m = 0;
	scanf("%d%d", &i, &k);
	for (;; )
	{
		if (k > i)
		{
			m = k;
			k = i;
			i = m;
		}
		else
		{
			n = i % k;
			if (n != 0)
			{
				i = k;
				k = n;
			}
			else
			{
				printf("���������Լ��Ϊ�� %d", k);
				break;
			}
		}
	}
	return 0;
}