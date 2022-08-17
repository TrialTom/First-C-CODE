#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
//承接上码，另一种实现方式
int is_left_move(char* arr1, char* arr2)
{
	int len = strlen(arr1);
	int len1 = strlen(arr2);
	if (len != len1)
		return 0;
	else
	{
		strncat(arr1, arr1, len);
		if (strstr(arr1, arr2) == NULL)
			return 0;
		else
			return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}