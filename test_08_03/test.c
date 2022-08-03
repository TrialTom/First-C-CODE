#define _CRT_SECURE_NO_WARNINGS

//编写代码实现，求一个整数存储在内存中的二进制中1的个数。

#include <stdio.h>

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	printf("%d存储在内存中的二进制中1的个数为：", num);
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
	printf("%d存储在内存中的二进制中1的个数为：", num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
}