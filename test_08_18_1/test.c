#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include <string.h>
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "aAf";
//	int ret = strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

int my_strcmp(char* p1, char* p2)
{
	assert(p1 && p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
			return 0;
		p1++;
		p2++;
	}
	if (*p1 > *p2)
		return 1;
	else
		return -1;
}

int main()
{
	char* arr1 = "abcdff";
	char* arr2 = "abcdef";
	int ret = my_strcmp(arr1, arr2);
	strcmp;	printf("%d ", ret);
	return 0;
}