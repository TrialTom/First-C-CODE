#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void print(int num)
//{
//	if (num > 9)
//		print(num / 10);
//	printf("%d ", num % 10);
//}
//int main()
//{
//	//printf("hello");
//	//main();
//	//return 0;
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//}

//需求：编写函数不允许创建临时变量，求字符串的长度
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);//arr是数组，数组传参传过去的不是整个数组，而是第一个元素的地址；
	printf("%d\n", len);
	return 0;
}