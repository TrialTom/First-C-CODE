#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
typedef struct Stu
{
	char name[10];
	int age;
	char tale[13];
	char sex[8];
}Stu;
void Print(Stu* p)
{
	printf("name: %s\n", p->name);
	printf("age: %d\n", p->age);
	printf("tale: %s\n", p->tale);
	printf("sex: %s\n", p->sex);
}
int main()
{
	Stu s = { "’≈»˝",19,"1234567890","±£√‹" };
	Print(&s);
	return 0;
}