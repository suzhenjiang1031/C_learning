#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, char A, char B, char C);
void move(int n, char x, char y);
int count = 0;

int main()
{
	int num = 0;;
	printf("��������Ҫ�ƶ����ӵĸ���: ");
	scanf("%d", &num);
	hanoi(num, 'A', 'B', 'C');
	printf("\n");
	printf("�ƶ����ܴ���:%d", count);
	return 0;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		count++;
		move(n, A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		move(n, A, C);
		hanoi(n - 1, B, A, C);
		count++;
	}
}

void move(int n, char x, char y)
{
	printf("��%d�����Ӵ�%c-->%c\n", n, x, y);
}
