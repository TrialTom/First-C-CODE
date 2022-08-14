#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int类型数据的比较函数
int Cmp_Int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//交换
//关键在于对不同的数据都能够进行交换
void Swap(char* buff1,char* buff2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buff1;
		*buff1 = *buff2;
		*buff2 = tmp;
		buff1++;
		buff2++;
	}
}
//排序的实现 ，模拟qsort库函数实现
void Bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//关键点：由于传入的数据可能是不同类型进行比较，所以可以把比较这个动作抽象成一个函数指针，由操作者传入
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			//交换两个数据
		}
	}
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int i = 0;
	Bubble_sort(arr,sz,sizeof(arr[1]), Cmp_Int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//浮点数的比较函数
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}
void test2()
{
	//按升序排列浮点型数字
	float f[] = { 3.0,4.0,1.0,2.0,9.0,6.0,8.0,7.0 };
	int sz = sizeof(f) / sizeof(f[1]);
	int i = 0;
	Bubble_sort(f, sz, sizeof(f[1]), cmp_float);
	for (i = 0; i < sz; i++)
	{
		printf("%2.1f ", f[i]);
	}
}

int main()
{
	test1();
	printf("\n");
	test2();
	return 0;
}