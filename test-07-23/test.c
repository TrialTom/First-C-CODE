#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�۰�����㷨-���ֲ����㷨
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int a = 7;
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	printf("please input number:\n");
	scanf("%d", &a);
	for (;;)
	{
		mid = (left + right) / 2;
		if (left > right)
		{
			printf("����ʧ�ܣ�");
			break;
		}
		else
		{
			if (arr[mid] > a)
			{
				right = mid - 1;
			}
			else if (arr[mid] < a)
			{
				left = mid + 1;
			}
			else if (arr[mid] == a)
			{
				printf("�����±�Ϊ�� %d", mid);
				break;
			}
		}
	}
	return 0;
}