#include <stdio.h>

//二维数组的创建
//int main()
//{
//	int arr1[3][4];
//	char arr2[5][10];
//
//	return 0;
//}
//
////二维数组的初始化
//int main()
//{
//	int arr1[3][4];
//	char arr2[5][10];
//
//	return 0;
//}

//数组越界

//冒泡排序
//数组传参的时候，形参有2种写法：
//1.数组
//2.指针
// 
// 
//形参是数组的形式

//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)  
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//0 1 2 3 4 5 6 7 8 9 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序的算法，对数组进行排序
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return  0;
//}

//数组名确实能表示首元素的地址
//但是有两个例外
//1.sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	int n = sizeof(arr);//
//	printf("%d\n", n);
//	return 0;
//}

//二维数组的数组名的理解
//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//	arr;//二维数组的数组名也表示数组首元素的地址
//	return 0;
//}