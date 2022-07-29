
#include <stdio.h>
int binary_search(int arr[], int k,int right)
{
	int left = 0;
	int mid = 0;
	for (left = 0; left <= right; )
	{
		mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] == k)
		{
			return mid;
		}
		else
			right = mid - 1;
	}
	return -1;
}
int main()
{
	//���ֲ���
	//��һ�����������в��Ҿ����ĳ����
	//����ҵ��˷�����������±꣬�Ҳ�������-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 17;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
	int ret = binary_search(arr,k,right);
	if (ret == -1)
		printf("�Ҳ���ָ��������\n");
	else
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	return 0;
}