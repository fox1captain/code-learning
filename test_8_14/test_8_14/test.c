#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




//指针理解的2个要点
//1.指针是内存中一个最小单元的编号，也是地址
//2.平时口语说的指针，通常指的是指针变量，是用来存放内存地址的变量


//int main()
//{
//	int a = 10;//a是整型变量，占用4个字节的内存空间
//	int* p = &a;
//
//	return 0;
//}

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(ps));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//	//指针的大小在32位平台是4个字节，在64位平台是8个字节。
//
//	return 0;
//}

//指针类型的意义
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//
//	char* pc = (char*)&a;
//	*pc = 0;
//
//	return 0;
//}
//结论1：指针类型决定了指针在被解引用的时候访问几个字节
//如果是int*的指针，解引用访问4个字节
//如果是char*的指针，解引用访问1个字节
//同理可以推广到其他类型

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc+1 = %p\n", pc + 1);
//
//	return 0;
//}
//结论2:指针类型决定了指针+/-1操作的时候，跳过几个字节
//决定了指针的步长


//野指针：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）

//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xcccccccc
//
//	*p = 10;//非法访问内存了，这里的p就是野指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//&arr[0]
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++; //当指针指向的范围超出数组arr的范围时，p就是野指针
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	printf("%p\n", p);
//
//	int* p2 = NULL;
//	printf("%p\n", p2);
//
//	return 0;
//}

//指针运算
// 1.指针+-整数

//float values[5];
//float* vp;
//
//for (vp = &values[0]; vp < &values[5]; )
//{
//	*vp++ = 0;
//	//拆为两步
//	//1.*vp = 0;
//	//2.vp++;
//}

// 2.指针-指针
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}
//指针-指针的绝对值得到的是指针和指针之间元素的个数
//不是所有的指针都能相减
//指向同一块空间的2个指针才能相减

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}

//指针的关系运算
 

//指针和数组
//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址

//int main()
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址
//	//&arr[0]
//	int* p = arr;
//	//通过指针来访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p -------- %p\n", &arr[i], p + i);
//	}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量，一级指针变量
//	int** ppa = &pa;//ppa是一个二级指针变量，二级指针变量是用来存放一级指针变量的地址的
//
//	**ppa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//指针数组
//存放指针的数组就是指针数组

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int arr[10];
	
	//parr就是存放指针的数组
	//指针数组
	int* parr[10] = { &a, &b, &c };


	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}

	return 0;
}
