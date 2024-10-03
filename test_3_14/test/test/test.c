
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以可以选择走一阶或者走两阶，
//那么他一共有几种走法？

int fib(int n)
{
	if (n <= 2)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
int mian()
{
	int n = 0;
	scanf("%d", &n);
	int m = fib(n);
	printf("%d\n", m);
	return 0;
}