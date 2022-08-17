#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
//�ַ�������
//ʵ��һ���������������ַ��еĸ��ַ�
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
// 
// 
//�������
//void left_spin(char arr[], int k,int sz)
//{
//	assert(arr);
//	if (k == 0)
//		return ;
//	else
//	{
//		int i = 0;
//		int temp = 0;
//		temp = arr[0];
//		for (i = 0; i < sz - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz - 1] = temp;
//		left_spin(arr, k - 1, sz);
//	}
//		
//}
//int main()
//{
//	int k = 5;
//	int i = 0;
//	char arr[] = "abcdefg";
//	int sz = strlen(arr);
//	left_spin(arr, k,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//������ת��
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	int temp = 0;
	while (left<right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
void left_spin(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert((len - k)>=0);
	reverse(arr,arr+k-1);
	reverse(arr+k,arr+len-1);
	reverse(arr,arr+len-1);
}
int main()
{
	char arr[] = "abcdef";
	int k = 5;
	left_spin(arr, k);
	printf("%s\n", arr);
	return 0;
}