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

//���󣺱�д��������������ʱ���������ַ����ĳ���
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
	int len = my_strlen(arr);//arr�����飬���鴫�δ���ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ��
	printf("%d\n", len);
	return 0;
}