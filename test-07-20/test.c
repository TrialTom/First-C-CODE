#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("please password\n");
	scanf("%d", password);
	//scanf �����ݻ�������ȡ����Ҫ�Ļ�ʣ�಻���϶�ȡ���Լ���\n��
	//getchar �������ݻ�������ȡ����
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
//		//ctrl+z������ѭ��
//	}
//	return 0;
//}