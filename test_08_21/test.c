#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�жϴ�С�洢
int check_sys()
{
	union Un
	{
		char c;
		int i;
	}u;
	u.i = 1;
	return u.c;
}

enum HUMAN
{
	NAME,
	SEX,
	HIGHT
}human;
int main()
{
	int a = 0X11223344;
	//
	//��С����������
	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��

	//char* b = (char*)&a;
	//printf("%x ", *b);
	//int ret = check_sys();
	//if (1 == ret)
	//{
	//	printf("С���ֽ���洢\n");
	//}
	//else
	//{
	//	printf("����ֽ���洢\n");
	//}
	printf("%d", sizeof(enum HUMAN));

	return 0;
}