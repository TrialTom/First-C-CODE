#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("please password\n");
	scanf("%d", password);
	//scanf 从数据缓冲区读取完想要的会剩余不符合读取的以及‘\n’
	//getchar 将从数据缓冲区读取数据
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("please confirm(Y/N)\n"); 
	ret = getchar();
	if (ret == 'Y')
	{
		printf("Confirm success");
	}
	else
	{
		printf("Confirm failed");
	}
	return 0;
}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//		//ctrl+z可跳出循环
//	}
//	return 0;
//}