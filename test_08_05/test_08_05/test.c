#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void exchange(int arr1[], int arr2[],int sz)
{
	int temp = 0;
	for (temp = 0; temp < sz; temp++)
	{
		arr1[temp] = arr1[temp] ^ arr2[temp];
		arr2[temp] = arr1[temp] ^ arr2[temp];
		arr1[temp] = arr1[temp] ^ arr2[temp];
	}
}
void Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int sz = sizeof(arr1) / sizeof(arr1[1]);
	exchange(arr1, arr2,sz);
	Print(arr1, sz);
	Print(arr2, sz);
	return 0;
}