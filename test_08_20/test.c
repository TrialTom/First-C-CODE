#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stddef.h>
//struct s
//{
//	double c;
//	int a;
//	int b;
//};
//struct t
//{
//	int a;
//	double c;
//	int b;
//};
//int main()
//{
//	struct s S = { 0 };
//	printf("%d \n",(int) sizeof(struct s));
//	printf("%d \n",(int) sizeof(struct t));
//	//�ڱ�֤�����ǰ���£�Ϊ�˼��ٿռ���˷ѣ�������ռ�ÿռ�С�ĳ�Ա����������һ��
//	printf("%d ",(int)offsetof(struct s, c));
//	printf("%d ",(int)offsetof(struct s, a));
//	printf("%d ",(int)offsetof(struct s, b));
//	return 0;
//}

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

int main()
{
	struct S s;
	printf("%d ", sizeof(s));
	return 0;
}