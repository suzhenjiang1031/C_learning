#include <stdio.h>
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//Ů �� ����
//	int high;
//}p1, p2; p1��p2������ȫ�ֵĽṹ�����

//int main()
//{
//	struct Peo p1 = { 0 };//�ṹ������Ĵ���
//	return 0; 
//}

//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];//Ů �� ����
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
	char sex[5];//Ů �� ����
	int high;
}p1, p2; //p1��p2������ȫ�ֵĽṹ�����

struct St
{
	struct Peo P;
	int num;
	float f;
};

void print2(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->sex, sp->high);//�ṹ��ָ�룬��Ա����
}

void print1(struct Peo p)
{
	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ���������Ա����
}


int main()
{
	struct Peo p1 = { "����", "1789798078", "��", 181 };//�ṹ������Ĵ���
	struct St s = { {"����", "2190890890", "Ů", 166}, 100, 3.14f };


	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %f\n", s.P.name, s.P.tele, s.P.sex, s.P.high, s.num, s.f);
	print1(p1);
	print2(&p1);

	return 0;
}
