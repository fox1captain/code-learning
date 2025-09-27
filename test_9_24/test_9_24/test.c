#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int Add(int x, int y);

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//定义标识符
//define 后面不加分号
//#define MAX 1000
//#define STR "hello bit"
//#define print printf("hehe\n")
//
//int main()
//{
//	int m = MAX;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	print;
//
//	return 0;
//}


//#define 宏定义

//#define SQUARE(X) X*X
#define SQUARE(X) ((X)*(X))
//宏只完成参数的替换，注意加括号已完成功能

//int main()
//{
//	int r = SQUARE(5+1);
//	//int r = ((5 + 1) * (5 + 1)) //36
//	//int r = 5 + 1 * 5 + 1;//11
//	printf("%d\n", r);
//
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int r = 10 * DOUBLE(3);
//	printf("%d\n", r);
//
//	return 0;
//}

//#define M 100
//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	DOUBLE(M + 2);
//	//((100 + 2) + (100 + 2))
//	return 0;
//}


//#N 把参数插入到字符串中 (一般情况下字符串中的参数不做替换)

//#define PRINT(N) printf("the value of "#N" is %d\n", N)
//#define PRINT(N, FORMAT) printf("the value of "#N" is "FORMAT"\n", N)
//int main()
//{
//	//int a = 10;
//	//PRINT(a);
//
//	//int b = 20;
//	//PRINT(b);
//
//	int a = 10;
//	PRINT(a, "%d");
//
//	float f = 3.14f;
//	PRINT(f, "%lf");
//
//	return 0;
//}


//##可以把位于它两边的参数合并成一个参数

//#define CAT(Class, Num) Class##Num
//
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//
//	return 0;
//}

//#define MAX(A,B) ((A)>(B)?(A):(B))
//
//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 5;
//	int b = 4;
//	int m = MAX(a++, b++);
//
//	printf("m=%d\n", m);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//宏和函数对比

//宏
#define MAX(x,y) ((x)>(y)?(x):(y))

//函数
int Max(int x, int y)
{
	return (x > y ? x : y);
}

//宏的优点
//宏比函数在程序的规模和速度方面更胜一筹
//宏不限定类型，而函数的参数必须使用特定的类型

//宏的缺点
//每次使用宏时，一份宏定义的代码将插入程序中。除非宏比较短，否则可能大幅度增加程序的长度
//宏是没法调试的，在预处理已完成替换的操作
//宏由于类型无关，存在不够严谨的问题
//宏可能会带来运算符优先级问题，导致程序容易出错

//#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))
//
//int main()
//{
//	//malloc(40);
//	//malloc(10.int);//malloc函数不支持这种写法，可以用宏来实现
//	int* p = MALLOC(10, int);
//
//	//int* p = (int*)malloc((10) * sizeof(int));
//
//	return 0;
//}

//条件编译
//在编译一个程序的时候通过条件编译指令来将一条语句(一组语句)进行选择性的编译
//比如调试性的代码，删除可惜，保留碍事，此时进行选择性编译

//#define __DEBUG__

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d\n", arr[i]);//为了观察数组是否赋值成功
//#endif
//	}
//	return 0;
//}

//#define M 3
//
//int main()
//{
//#if M < 5
//	printf("hehe\n");
//#elif M == 5
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//以上两条语句效果等价 如果定义了则进行编译

//#if !defined(symbol)
//#ifndef symbol
//以上两条语句效果等效 如果没定义则进行编译

//文件包含#include

//#include "test.h"
//
//int main()
//{
//
//	return 0;
//}

//<> 和 ""的区别是查找的策略不同
//#include <stdio.h>
//<>查找策略：直接去库目录下查找

//#include "test.h"
//""查找策略：1.先去代码所在的路径下查找 2.如果上面找不到，再去库目录下查找

#include <stddef.h>

struct S
{
	char c1;
	int i;
	char c2;
};

#define OFFSETOF(type, m_name) (size_t)&(((type*)0)->m_name) //自己写函数宏来实现offsetof功能

int main()
{
	struct S s = { 0 };
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));

	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S, i));
	//printf("%d\n", offsetof(struct S, c2));

	return 0;
}