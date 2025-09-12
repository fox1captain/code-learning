#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>

//内置类型：char short int float double 

//复杂对象：人、书

//自定义类型：结构体、联合体、枚举

//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//};

//int main()
//{
//	struct Stu s3;
//
//	return 0;
//}

//数据结构
//数据在内存中的存储结构

//线形
//顺序表
//链表

//树形
//二叉树

struct Node
{
	int data;
	struct Node* next;
};

//重命名结构体指针的两种方式
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

//结构体内存对齐

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

//位段
//用结构体实现位段

//位段的声明和结构体类似，有两个不同
//1.位段的成员必须是int unsigned int 或signed int
//2.位段的成员名后边有一个冒号和一个数字

//位段的空间是按照需要以4个字节(int)或者1个字节(char)的方式来开辟的
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
//	//在内存空间里&s处存放的数据是62 03 04 占据三个字节空间
//	//大小端字节序 在超过一个字节时使用 来判断数据的存储方式 char类型数据为一个字节 不涉及大小端问题
//	return 0;
//}

//枚举类型

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

//枚举的优点
//1.增加代码的可读性和可维护性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止命名污染（封装）
//4.便于调试
//5.使用方便，一次可以定义多个变量

//联合(共用体)
//union Un
//{
//	int a;
//	char c;
//};
////共用同一块空间
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

//利用共用体写判断大小端字节序存储方式的函数
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
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//联合大小的计算
//1.联合的大小至少是最大成员的大小。
//2.当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
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