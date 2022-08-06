#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//×Ö·û´®ÄæÐò£¨µÝ¹éÊµÏÖ£©
int reverse_string(char arr[])
{
	char temp = arr[0];
	int len = StrLen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if(StrLen(arr+1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = temp;
}
int StrLen(char arr[])
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
//²»¿¼ÂÇµÝ¹é
void Reverse_string(char arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	char temp = 0;
	while (right >= left)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		right--;
		left++;
		
	}
}
int main()
{
	char arr[] = "abcdef";
	int sz = strlen(arr);
	//Reverse_string(arr, sz);
	reverse_string(arr, sz);
	printf("%s", arr);
	
	return 0;
}