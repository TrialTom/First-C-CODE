#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
//奇数在前，偶数在后，排序
void The_sorting(int arr[],int sz)
{
	int L = 0;
	int R = sz - 1;
	assert(arr);
	for (L = 0; L < R; L++)
	{
		if (arr[L] % 2 == 0)
		{
			for (R ; L < R; R--)
			{
				if (arr[R] % 2 == 1)
				{
					arr[R] = arr[R] ^ arr[L];
					arr[L] = arr[R] ^ arr[L];
					arr[R] = arr[R] ^ arr[L];
					break;
				}
			}
		}
	}
	
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = { 0 ,1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[1]);
	The_sorting(arr,sz);
	print(arr, sz);
	return 0;
}