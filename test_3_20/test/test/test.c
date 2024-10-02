#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[50];
	//接收n个数字
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	//接收删除的值
	scanf("%d", &del);
	int j = 0;//j作为下标锁定的位置就是用来存放不删除的数据的
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
 