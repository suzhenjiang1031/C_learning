#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ͳ�ƶ����Ƶ�1������
//int count_num_of_1(int n)
//int count_num_of_1(unsigned n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//n = 15
//n = n & (n-1)
//1111 (n)
//1110 (n-1)
//1110 (n)
//1101 (n-1)
//1100 (n)
//1011 (n-1)
//1000 (n)
//0111 (n-1)
//0000 (n)

//int count_num_of_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int n = count_num_of_1(num);
//	printf("%d\n", n);
//	return 0;
//}

//������int(32λ)����m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ
//int count_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//}

//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^ ��������
//	//��ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	//ͳ��ret�ж�����λ���м���1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//}

//��ȡһ����������������������ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	//��ȡ����λ
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d", (num >> i) & 1);
//	}
//	return 0;
//}

//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ

//X��ͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//������ݺ��·ݣ��ж�һ��������ж�����
//int is_leap_year(int y)
//{
//	return((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if (is_leap_year(y) == 1 && m==2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}