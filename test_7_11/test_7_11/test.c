#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int unit;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//
//	struct Node n;
//	Node n2;
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;  
//static修饰局部变量的时候，局部变量出了作用域，不销毁的。
//本质上，static修饰局部变量的时候，改变了变量的存储位置的，存储在静态区
//影响了变量的生命周期，生命周期变长，和程序的生命周期一样。
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = Add(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}

//#define定义标识常量
#define NUM 100

//#define定义宏 宏是有参数
#define ADD(x,y) ((x)+(y))

//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);
//	int* p = &a;
//	//p就是指针变量
//	*p = 20;
//	//解引用操作符，意思就是通过p存放的地址，找到p所指向的对象
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//
//	printf("%zu", sizeof(char*));
//	printf("%zu", sizeof(short*));
//	printf("%zu", sizeof(int*));
//	printf("%zu", sizeof(float*));
//	printf("%zu", sizeof(double*));
//	//不管是什么类型的指针变量，都是存放地址的，指针变量大小取决于地址存放的时候需要多大空间
//	//32位平台上的地址：32bits即4byte，指针变量大小为4个字节
//	//64位平台上的地址：64bits即8byte，指针变量大小为8个字节
//	return 0;
//
//}

struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[20];
};

void print(struct Stu* pp)
{
	printf("%s %d %s %s\n", (*pp).name, (*pp).age, (*pp).sex, (*pp).tele);
	//->
	//结构体指针变量->成员名
	printf("%s %d %s %s\n", pp->name, pp->age, pp->sex, pp->tele);
}

int main()
{
	struct Stu s = { "张三",20,"male","15545685942" };
	//结构体对象.成员名
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}
