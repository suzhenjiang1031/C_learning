
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ������Կ���ѡ����һ�׻��������ף�
//��ô��һ���м����߷���

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