//Fibonacci sequence �����õݹ�����õ���
int Fibonacci(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}