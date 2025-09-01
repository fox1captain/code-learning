#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//
//	//数组指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//
//	return 0;
//}

int test(const char* str)
{
	printf("test()\n");
	return 0;
}

//int main()
//{
//	//函数指针  - 也是一种指针，是指向函数的指针
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//
//	int(*pf)(const char*) = test;
//	(*pf)("abc");
//	//pf 和 test
//	test("abc");
//	pf("abc");
//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();
//
//	return 0;
//}

//void(*p)() p是函数指针
//void(*)() 是函数指针类型
//(void(*)())0 对int类型的0进行强制类型转换 转为函数指针类型

//以上代码是一次函数调用，调用的是0作为地址处的函数
//1.把0强制类型转换为：无参，返回类型是void的函数的地址
//2.调用0地址处的这个函数


//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	return 0;
//}

//signal是函数名，以上代码是一次函数声明
//声明的signal函数的第一个参数的类型是int，第二个参数的类型是函数指针，该函数指针指向的函数参数是int，函数返回类型是void，signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，函数返回类型是void

//对上述代码进行优化

typedef void(* pf_t)(int); //把void(*)(int)类型重命名为pf_t

//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

//void menu()
//{
//	printf("**************************\n");
//	printf("*****  1.add   2.sub *****\n");
//	printf("*****  3.mul   4.div *****\n");
//	printf("*****  0.exit        *****\n");
//	printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//回调函数
//
//calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入两个数：");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//函数指针也是指针
//把函数指针放在数组中，其实就是函数指针的数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int(*pf)(int, int) = Add;//pf是函数指针
//	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//
//	return 0;
//}

//使用函数指针数组优化上面的代码
//想要再添加一些函数功能
//x&y
//x^y
//x|y
//x&&y
//x||y
//x>>y
//x<<y

//void menu()
//{
//	printf("**************************\n");
//	printf("*****  1.add   2.sub *****\n");
//	printf("*****  3.mul   4.div *****\n");
//	printf("*****  0.exit        *****\n");
//	printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//使用函数指针数组
//	//转移表
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y); //通过函数指针数组下标调用函数，从而优化代码
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//
//	return 0;
//}


//指向函数指针数组的指针

//int main()
//{
//	//函数指针数组
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	//指向[函数指针数组]的指针
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//回调函数
//回调函数就是通过函数指针调用的函数，如果把函数的指针（地址）作为参数传递给另一个函数，
//当这个指针被用来调用其指向的函数时，我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，
//而是在特定的事件或条件发生时由另一方调用的，用于对该事件或条件进行响应。
//


//冒泡排序

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//设置标志位来判断数组是否已经排好序
		//一趟冒泡排序的过程
		int j = 0;
		for (j = 0; j < sz -1 -i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//表示数组顺序有变化
			}
		}
		if (flag == 1)
		{
			break;//如果标志位为1表示数组初始顺序没变，已排好顺序，跳出循环
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//把数组排成升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}