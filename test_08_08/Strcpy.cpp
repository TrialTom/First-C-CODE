#define _CRT_SECURE_NO_WARNINGS

//ʵ�ֿ⺯��strcpy�Ĺ��ܣ���׼��ʽ
#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬������\0���ַ�
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[] = "###";
	char arr2[] = "abc";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}