#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int arr[], int sz)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	for (i = sz-1; i >=0; i--)
	{
		for (j = i -1; j >=0; j--)
		{
			if (arr[i] < arr[j])
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[1]), cmp_float);
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小-单位字节
	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
	//函数指针的两个参数是：待比较的两个元素的地址
	int j = 0;
	printf("\n");
	for (j = 0; j < sz; j++)
	{
		printf("%2.1f ", f[j]);
	}
}
int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//只能排整型，鸡肋
	//bubble_sort(arr, sz);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	test2();
	return 0;
}