
#include <stdio.h>
//��һ�⣺�������
// ����1-1/2+1/3-1/4+......+1/99-1/100
extern NINE();
int main()
{
	double i = 0;
	double sum = 0;
	for ( i = 1; i <= 100; i++)
	{
		if ((int) i % 2 == 0)
		{
			sum -= (1 / i);
		}
		else
		{
			sum += (1 / i);
		}
	}
	printf("sum = %lf\n\n\n\n", sum);
	// �ڶ��⣺�˷��ھ���
	printf("�ڶ��⣺�˷��ھ���\n");
	NINE();
	return 0;
}