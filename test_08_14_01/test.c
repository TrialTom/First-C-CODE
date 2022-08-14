#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int�������ݵıȽϺ���
int Cmp_Int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
//����
//�ؼ����ڶԲ�ͬ�����ݶ��ܹ����н���
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
//�����ʵ�� ��ģ��qsort�⺯��ʵ��
void Bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			//�ؼ��㣺���ڴ�������ݿ����ǲ�ͬ���ͽ��бȽϣ����Կ��԰ѱȽ�������������һ������ָ�룬�ɲ����ߴ���
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			//������������
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
//�������ıȽϺ���
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;
}
void test2()
{
	//���������и���������
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