#define _CRT_SECURE_NO_WARNINGS

//������������в�ͬλ�ĸ���
#include <stdio.h>
int get_diff_bit(m, n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
//��ӡ�����Ƶ�����λ��ż��λ
void Print(int m)
{
	int i = 0;
	printf("����λ ");
	for (i = 30; i >=0; i-=2)
	{
			printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("ż��λ ");
	for (i = 31; i >= 1; i-=2)
	{
			printf("%d ", (m >> i) & 1);
	}
}
int main()
{
	int m = 0;
	int n = 0;
	//scanf("%d%d", &m, &n);
	//int count = get_diff_bit(m, n);
	//printf("count = %d", count);
	scanf("%d", &m);
	Print(m);
	return 0;
}