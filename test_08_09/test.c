#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//�жϼ�����洢�Ǵ�˴洢����С�˴洢
int check_sys()
{
	int a = 1;
	
	//����1С�ˣ�����0���
	return *((char*)&a);
}
int main()
{
	int a = 1;
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}