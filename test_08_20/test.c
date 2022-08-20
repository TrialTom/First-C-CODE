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
//	//在保证对齐的前提下，为了减少空间的浪费，可以让占用空间小的成员尽量集中在一起。
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