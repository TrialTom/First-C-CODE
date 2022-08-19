#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

//strstrµÄÊµÏÖ
char * my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	//int len = strlen(p2);
	//char* temp = p2;
	//if (*p2 == '\0')
	//	return p1;
	//while (*p1)
	//{
	//	if (*p1 == *p2)
	//	{
	//		p1++;
	//		p2++;
	//	}
	//	else if (*p2 == '\0')
	//		return (p1 - len);
	//	else if (p2 != temp)
	//	{
	//		p2 = temp;

	//	}
	//	else
	//		p1++;
	//}
	//if (*p2 == '\0')
	//	return (p1 - len);
	//else
	//	return NULL;
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = p1;
	if (*p2 == '\0')
		return p1;
	while (*cur)
	{
		s1 = cur;
		s2 = p2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;
		}
		cur++;
	}
	return NULL;
}
int main()
{
	//const char* p1 = "ababbabcdef";
	//const char* p2 = "def";
	//char * ret = my_strstr(p1,p2);
	//printf("%s\n", ret);
	//return 0;
	char arr[] = "198.163.11.23";
	char buff[80] = { 0 };
	char* ret = NULL;
	char* p = ".";
	strcpy(buff, arr);
	for (ret = strtok(arr, p);ret != NULL;ret = strtok(NULL,p))
	{
		printf("%s\n", ret);
	}
}