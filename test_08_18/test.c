#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//���Ͼ���
// ��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
// ���д�����������ľ����в���ĳ�������Ƿ���ڡ�
// Ҫ��ʱ�临�Ӷ�С��O��N��
//
int FindNum(int arr[][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px -1 && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 9;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±�Ϊ��%d,%d", x, y);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}