#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//char* my_strcpy(char* dest,const char* src)
//{}
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//int main()
//{
//	//char* (*pf)(char*, const char*) = my_strcpy;
//	//char* (*pfArr[4])(char*, const char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};
//	return 0;
//}

//ʵ�ּ�����
void menu()
{
	printf("*************************\n");
	printf("***1.add    2.sub  ******\n");
	printf("***3.mul    4.div  ******\n");
	printf("*****    0.exit   *******\n");

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
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pArr[])(int, int) = { 0,Add,Sub,Mul,Div };
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input > 0 && input <= 4)
		{
			printf("������������������>\n");
			scanf("%d%d", &x, &y);
			ret = pArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳���\n");
		}
		else
		{
			printf("�����ʽ����\n");
		}
	} while (input);
	return 0;
}