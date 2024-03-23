#include <stdio.h>
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//}p1, p2; p1和p2是两个全局的结构体变量

//int main()
//{
//	struct Peo p1 = { 0 };//结构体变量的创建
//	return 0; 
//}

//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//女 男 保密
//	int high;
//};
//
//struct St
//{
//	struct Peo P;
//	int num;
//	float f;
//};

struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];//女 男 保密
	int high;
}p1, p2; //p1和p2是两个全局的结构体变量

struct St
{
	struct Peo P;
	int num;
	float f;
};

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->sex, sp->high);//结构体指针，成员变量
}

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量，成员变量
}


int main()
{
	struct Peo p1 = { "张三", "1789798078", "男", 181 };//结构体变量的创建
	struct St s = { {"李四", "2190890890", "女", 166}, 100, 3.14f };


	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %f\n", s.P.name, s.P.tele, s.P.sex, s.P.high, s.num, s.f);
	print1(p1);
	print2(&p1);

	return 0;
}
