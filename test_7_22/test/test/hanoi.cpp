#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;
void move(int n, char x, char y);
void hanoi(int n, char A, char B, char C);

int main()
{
	int num = 0;
	printf("请输入需要移动盘子的次数: ");
	scanf("%d", &num);
	hanoi(num, 'A', 'B', 'C');
	printf("\n");
	printf("移动的次数%d\n", count);
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
		count++;
		move(n, A, C);
		hanoi(n - 1, B, A, C);
	}
}

void move(int n, char x, char y)
{
	printf("第%d个盘子移动，从%c-->%c\n", n, x, y);
}
