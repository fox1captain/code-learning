#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//指针进阶
//1.字符指针
//2.数组指针
//3.指针数组
//4.数组传参和指针传参
//5.函数指针
//6.函数指针数组
//7.指向函数指针数组的指针
//8.回调函数
//9.指针和数组面试题解析

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	if (p1 == p2)
//		printf("p1 == p2\n");
//	else
//		printf("p1 != p2\n");
//
//	if (arr1 == arr2)
//		printf("arr1 == arr2\n");
//	else
//		printf("arr1 != arr2\n");
//
//	return 0;
//}


//指针数组 - 是数组，用来存放指针的数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1, arr2, arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			//*(p+i) --> p[i]
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//数组指针 指向数组的指针

//int* p1[10]; p1是指针数组
//int (*p2)[10]; p2是数组指针，p2可以指向一个数组，该数组有10个元素，每个元素是int类型。

//再次讨论数组名
//int main()
//{
//	char* arr[5] = { 0 };
//	char* (*pc)[5] = &arr;
//	
//	char ch = 'w';
//	char* p1 = &ch;
//	char** p2 = &p1;
//
//	//int arr[10] = { 0 };
//
//	//int* p = arr;
//
//	//int(*p2)[10] = &arr;
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr+1);
//
//	//printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr[0]+1);
//
//	//printf("%p\n", &arr);
//	//printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//数组名通常表示的都是数组首元素的地址
//但是有2个例外
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，这里的数组名表示的也是整个数组，所以&数组名取出的是整个数组的地址

void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}


void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);
//	//arr数组名 表示数组首元素的地址
//	//二维数组的首元素是他的第一行
//	//第一行的地址，是一个一维数组的地址
//	return 0;
//}

//int arr[5] arr是整型数组
//int* arr1[5] arr1是整型指针数组
//int (*parr2) [10] parr2是数组指针
//int (*parr3[10])[5] parr3是存放数组指针的数组


//数组传参和指针传参

//一维数组传参
//void test (int arr[])
//{}
//void test (int arr[10])
//{}
//void test (int* arr)
//{}
//
//void test2 (int* arr[20])
//{}
//void test2 (int** arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[10] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//二维数组传参

//void test (int arr[3][5])
//{}
//void test (int arr[][]) //err 形参的二维数组，行可以省略，列不能省略！
//{}
//void test (int arr [][5])
//{}
//
//void test(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int arr[5] = { 0 };
	//&数组名-取出的是数组的地址
	int(*p)[5] = &arr;//数组指针

	printf("%p\n", &Add);
	printf("%p\n", Add);
	//对于函数来说，&函数名和函数名都是函数的地址

	int(*pf)(int, int) = &Add;

	int ret = (*pf)(2, 3);
	int ret = pf(2, 3);

	//int ret = Add(2, 3);

	printf("%d\n", ret);

	return 0;
}