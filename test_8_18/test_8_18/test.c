#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//�ṹ��

struct person
{
	char name[20];
	char tele[12];
	char sex[5];
	int height;
};

//struct person
//{
//	char name[20];
//	char tele[12];
//	char sex[5];
//	int height;
//}p1,p2;
//p1��p2��ʹ��struct person�ṹ�����ʹ�������������

struct ST
{
	struct person p;
	int num;
	float f;
};

int main()
{
	struct person p1 = { "����", "12332111515", "��", 203 };//�ṹ������Ĵ���
	struct ST s = { {"Lisa", "12332114569", "male", 168}, 100, 3.14f };

	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.height);
	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.height, s.num, s.f);
	
	return 0;
}