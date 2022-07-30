//Fibonacci sequence 不适用递归求可用迭代
int Fibonacci(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}