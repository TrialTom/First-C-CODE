#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//ʵ�ּ�����
void menu()
{
	printf("********************\n");
	printf("***1.Add  2.Sub  ***\n");
	printf("***3.Mul  4,Div  ***\n");
	printf("***    0.exit    ***\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	menu();
//	do
//	{
//		printf("��ѡ��>\n");
//		scanf("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("������������������\n");
//			scanf("%d%d", &x, &y);
//			ret = pArr[input](x, y);
//			printf("���Ϊ�� %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("�����ʽ���󣡣�\n");
//		}
//		menu();
//	} while (input);
//	
//	return 0;
//}
void Calc(int* pf(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("������������������\n");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("���Ϊ��%d\n", ret);

}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�˳�������\n");
			return 0;
		default:
			printf("��ʽ������󣡣�����\n");
			break;
		}

	} while (input);
	return 0;
}