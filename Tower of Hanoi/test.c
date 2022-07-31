//汉诺塔问题
#include <stdio.h>
void move(char A, char B,int x)
{
	static int cout = 0;
	cout++;
	printf("第%d步:将%d从%c ->移动到 %c  \n",cout,x, A, B);
}
void Hanoi(int x,char source,char target,char auxiliary)
{
	if (x == 0)
		return;
	Hanoi(x - 1, source, auxiliary,target);
	move(source, target,x);
	Hanoi(x - 1, auxiliary, target, source);
}
int main()
{
	Hanoi(3,'A','B','C');
	return 0;
}