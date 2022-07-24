#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int arr[3] = {0,1,2};
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
	int a = 769, b = 4230, c = 666;
	printf("第一题：三数按序排列.\n");
	Sleep(1000);
	printf("please input three number:\n");
	scanf("%d%d%d", &a, &b, &c);
	system("cls");
	printf("第一题：三数按序排列：\n");
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	while (1)
	{
		while (1)
		{
			if (left > right)
			{
				break;
			}
			else
			{
				if (arr[i] <= arr[left])
				{
					left++;
				}
				else
				{
					j = arr[i];
					arr[i] = arr[left];
					arr[left] = j;
					left++;
				}
			}
		}
		i++;
		left = i;
		if (i > right)
		{
			break;
		}
	}
	for (i = 0; i <= (sizeof(arr) / sizeof(arr[0])) - 1; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}