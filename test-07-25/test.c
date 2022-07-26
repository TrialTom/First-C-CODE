#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//求两个数的最大公约数

//思路：辗转相除法
int main()
{
	int i = 56, k = 23;
	int n = 1;
	int m = 0;
	scanf("%d%d", &i, &k);
	for (;; )
	{
		if (k > i)
		{
			m = k;
			k = i;
			i = m;
		}
		else
		{
			n = i % k;
			if (n != 0)
			{
				i = k;
				k = n;
			}
			else
			{
				printf("两数的最大公约数为： %d", k);
				break;
			}
		}
	}
	return 0;
}