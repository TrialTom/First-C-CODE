#define _CRT_SECURE_NO_WARNINGS
//��������Ϸ
//����
//1.��������һ�������
//2��������
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void grame()
{
	int i = 0;
	int num = 0;
	
	i = rand() % 100;
	printf("���������е�����\n");

	while (1)
	{
		scanf("%d", &num);
		if (i == num)
		{
			printf("�¶��ˣ�\n");
			break;
		}
		else if (i < num)
		{
			printf("���ִ��ˣ���\n");
			continue;
		}
		else
		{
			printf("����С�ˣ���\n");
			continue;
		}

	}
}
int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
	
		printf("********������********\n");
		printf("1����ʼ��Ϸ��\n");
		printf("2��������Ϸ!\n");
		printf("��ѡ��1/2��:\n");
		scanf("%d", &i);
		if (1 == i)
			grame();
		else if (2 == i)
			break;
		else
		{
			printf("����������������롣");
			Sleep(1000);
			system("cls");
			continue;
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}