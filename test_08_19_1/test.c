#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
//实现memmore的功能
void* my_memmore(void* dest, const void* src, unsigned int size)
{
	assert(dest != NULL&& src != NULL);
	void* ret = dest;
	if (dest < src)
	{
		while (size--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (size--)
		{
			*((char*)dest + size) = *((char*)src + size);
		}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	 my_memmore(arr + 2, arr, 20);
	 int i = 0;
	 for (i = 0; i < 10; i++)
	 {
		 printf("%d ", arr[i]);
	 }
	return 0;
}