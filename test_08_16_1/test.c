#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
//类比水仙花数，打印0~10000的自幂数
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int n = 1;
		int temp = i;
		int sum = 0;
		while (temp/=10)
		{
			n++;
		}
		temp = i;
		sum = 0;
		while (temp)
		{
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}

	}
	return 0;
}