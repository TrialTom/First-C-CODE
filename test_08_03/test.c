#define _CRT_SECURE_NO_WARNINGS

//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����

#include <stdio.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	printf("%d�洢���ڴ��еĶ�������1�ĸ���Ϊ��", num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//
//	printf("%d\n", count);
//	return 0;
//}
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &num);
	printf("%d�洢���ڴ��еĶ�������1�ĸ���Ϊ��", num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
}