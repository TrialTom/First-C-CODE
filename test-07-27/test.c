

#include <math.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
//����дһ���������ж�һ�����ǲ�������
int isprime(int x)
{
	int i = 2;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
		else
			continue;
	}
	return 1;
}
//�����ж�����
void leapyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
		printf("��ͨ����\n");
	else if (x % 400 == 0)
		printf("��������\n");
	else
		printf("ƽ��\n");
}
int main()
{
	printf("��һ��\n");
	Sleep(1000);
	system("cls");
	int a = 10;
	int x = 0;
	int year = 0;
	printf("��һ��\n");
	Sleep(1000);
	system("cls");
	printf("����һ������\n");
	scanf("%d",&a);
	if (0 == a || 1 == a)
		printf("�Ȳ�������Ҳ���Ǻ���.\n");
	else
	{
		x = isprime(a);
		if (x == 0)
			printf("Composite number\n");
		else
			printf("Prime number\n");
	}
	Sleep(2000);
	system("cls");
	printf("�ڶ���\n");
	Sleep(1000);
	system("cls");
	printf("������ݣ�\n");
	scanf("%d", &year);
	leapyear(year);
	return 0;
}