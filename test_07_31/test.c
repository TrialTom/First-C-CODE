
#include <stdio.h>
void bubble_sort(int arr[], int sl)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int flag = 0;
	for (i = 0; i < sl - 1; i++)
	{
		flag = 1;
		for (j = 0; j < sl - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sl = sizeof(arr) / sizeof(arr[0]);
	//¶Ôarr½øĞĞÅÅĞò£¬ÅÅ³ÉÉıĞò
	bubble_sort(arr,sl);//Ã°ÅİÅÅĞò
	for (i = 0; i < sl; i++)
	{
		printf("%4d", arr[i]);
	}
	return 0;
}