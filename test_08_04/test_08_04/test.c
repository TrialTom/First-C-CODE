#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void Init(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}int Print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	
}
int reverse(int arr[], int sz)
{
	int right = sz - 1;
	int left = 0;
	int i = 0;
	for (left = 0; left < right; left++, right--)
	{
		i = arr[left];
		arr[left] = arr[right];
		arr[right] = i;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//实现Init函数初始化数组全为0
	//实现Print函数打印
	//实现reverse函数逆置数组
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[2]);
	/*Init(arr,sz);
	Print(arr, sz);*/
	reverse(arr, sz);
	Print(arr, sz);
}