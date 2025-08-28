#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//给定两个数，求两个数的最大公约数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (m > 0)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}

//暴力求解 不够高效
//辗转相除法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	
//	printf("%d\n", b);
//
//	return 0;
//}

//编写程序数一下1到100的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//判断十位是不是9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	
//	return 0;
//}

//计算1/1 - 1/2 + 1/3 -1/4 + 1/5 ... + 1/99 - 1/100 的值，打印出结果
//分子总是1
//分母是1~100

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum +flag*( 1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%lf\n", sum);
//
//	return 0;
//}

//求10个整数中的最大值

//int main()
//{
//	int arr[10] = { 0 };
//
//	//输入数字
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int max = arr[0];
//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j<=i;j++)
//		printf("%d*%d=%2d ",i,j,i*j);
//
//		printf("\n" );
//	}
//	return 0;
//}

//栈区：局部变量、形式参数、返回值
//堆区：动态内存分配、malloc、free、calloc、realloc
//静态区：静态变量、全局变量