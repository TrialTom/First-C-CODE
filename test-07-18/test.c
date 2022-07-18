
#include <stdio.h>

int main()
{
	int num = 10;
	int* p = &num;
	printf("%p\n", p);
	*p = 30;
	printf("%d\n", sizeof(p));
	printf("num = %d\n", num);
	return 0;
}