#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//�������ͣ�char short int float double 

//���Ӷ����ˡ���

//�Զ������ͣ��ṹ�塢�����塢ö��

//struct Stu
//{
//	//ѧ�����������
//	char name[20];
//	int age;
//};

//int main()
//{
//	struct Stu s3;
//
//	return 0;
//}

//���ݽṹ
//�������ڴ��еĴ洢�ṹ

//����
//˳���
//����

//����
//������

struct Node
{
	int data;
	struct Node* next;
};

//�������ṹ��ָ������ַ�ʽ
//1
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}* linklist;

//2
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;

struct score
{
	int math;
	int literature;
	int english;
};

struct Stu
{
	char name[20];
	int age;
	struct score s;
};

//int main()
//{
//	struct Stu s1 = { "zhangsan", 20, {100, 99, 98} };
//	printf("%s %d %d %d %d\n", s1.name, s1.age, s1.s.math, s1.s.literature, s1.s.english);
//	return 0;
//}

//�ṹ���ڴ����

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	
//	struct S1 ss1;
//	struct S2 ss2;
//
//	//printf("%d\n", sizeof(struct S2));
//
//	printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//
//	printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));
//
//	return 0;
//}

//struct S
//{
//	int data[100];
//	int num;
//};
//
//void print1(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(&s);
//
//	return 0;
//}

//λ��
//�ýṹ��ʵ��λ��

//λ�ε������ͽṹ�����ƣ���������ͬ
//1.λ�εĳ�Ա������int unsigned int ��signed int
//2.λ�εĳ�Ա�������һ��ð�ź�һ������

//λ�εĿռ��ǰ�����Ҫ��4���ֽ�(int)����1���ֽ�(char)�ķ�ʽ�����ٵ�
//struct A
//{
//	//4byte-32bit
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	//4byte-32bit
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//���ڴ�ռ���&s����ŵ�������62 03 04 ռ�������ֽڿռ�
//	//��С���ֽ��� �ڳ���һ���ֽ�ʱʹ�� ���ж����ݵĴ洢��ʽ char��������Ϊһ���ֽ� ���漰��С������
//	return 0;
//}

//ö������

//enum Day
//{
//	Mon = 1,
//	Tues,
//	Weds,
//	Thurs,
//	Fri,
//	Sat,
//	Sun
//};
//
//enum Sex
//{
//	Male,
//	Female,
//	Secret
//};
//
//int main()
//{
//	enum Day d = Fri;
//	printf("%d\n", Fri);
//	printf("%d\n", d);
//
//	return 0;
//}

//ö�ٵ��ŵ�
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//3.��ֹ������Ⱦ����װ��
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������

//����(������)
//union Un
//{
//	int a;
//	char c;
//};
////����ͬһ��ռ�
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(union Un));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//
//	return 0;
//}

//���ù�����д�жϴ�С���ֽ���洢��ʽ�ĺ���
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//���ϴ�С�ļ���
//1.���ϵĴ�С����������Ա�Ĵ�С��
//2.������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������
union Un
{
	char arr[5];//5
	int i;//4
};

int main()
{
	printf("%d\n", sizeof(union Un));//8

	return 0;
}