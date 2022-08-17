#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//����;����s1 = AABCD��s2=BCDAA������1
//����s1=abcd��s2=ABCD������0��
void reverse(char* const s1,int k)
{
	assert(s1);
	int left = 0;
	int right = strlen(s1);
	int temp = 0;
	//��ѭ��ʵ����������ת
	for (left = 0, right = k-1; left < right; left++, right--)
	{
		temp = *(s1 + left);
		*(s1 + left) = *(s1 + right);
		*(s1 + right) = temp;
	}
	for (left = k, right = strlen(s1)-1; left < right; left++, right--)
	{
		temp = *(s1 + left);
		*(s1 + left) = *(s1 + right);
		*(s1 + right) = temp;
	}
	for (left = 0, right = strlen(s1) - 1; left < right; left++, right--)
	{
		temp = *(s1 + left);
		*(s1 + left) = *(s1 + right);
		*(s1 + right) = temp;
	}
}
int is_left_move(char* const s1, char* const s2)
{
	assert(s1);
	assert(s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i = 0;
	if (len1 != len2)
		return 0;
	else
	{
		//��٣�
		for (i = 0; i < len1; i++)
		{
			if (strcmp(s1, s2) == 0)
				return 1;
			else
			{
				//���������Ҫ��ת���������Ҫ��ת�ĸ���
				reverse(s1,1);
			}
		}
		return 0;
	}
}
int main()
{
	char s1[] = "abcdef";
	char s2[] = "defabc";
	int ret = is_left_move(s1, s2);
	if (ret == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}