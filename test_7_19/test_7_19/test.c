#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//
//		//比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//		//如果返回值为0，表示两个字符串相等
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}

//1.电脑产生一个随机数（1-100）
//2.猜数字
//猜大了
//猜小了
//直到猜对，结束

#include <time.h>

void menu()
{
	printf("*********************\n");
	printf("***** 1.play ********\n");
	printf("***** 0.exit ********\n");
	printf("*********************\n");

}

//0-RAND_MAX(32767)
void game()
{
	int guess = 0;
	//生成随机数
	int ret = rand()%100+1;//生成随机数的函数
	//printf("%d\n", ret);
	//猜数字

	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

//指针
//int *p = NULL;
//int a = 0;s


//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的逻辑
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 90");
//again:
//	printf("请注意，你的电脑将在90秒内关机，如果输入:我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 5);
//	printf("%s\n", arr);
//
//	return 0;
//}

void Swap(int* px, int* py)
{
	int z = *px;
	*px = *py;
	*py = z;
}

//当实参传递给形参的时候，，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d\n", a, b);
//	//a和b叫实参
//	Swap(&a, &b);
//
//	printf("交换后:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//传值调用 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用 传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数和函数外边的变量建立真正的联系，也就是函数内部可以直接操作函数外部的变量

//打印出100-200间的素数
//素数只能被1和他本身整除
//判断逻辑用2~i-1之间的数字去试除i

#include <math.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d", count);
//
//	return 0;
//}


//写一个函数判断一年是不是闰年
//打印1000~2000年之间的闰年
//闰年判断的规则：
//1.能被4整除，并且不能被100整除是闰年
//2.能被400整除是闰年


int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

int binary_search(int arr[], int k, int sz) //形参arr看上去是数组，本质是指针变量
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//找到了返回下标
		}
	}

	return -1;//找不到

}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////                0 1 2 3
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	//找到了，返回下标
//	//找不到，返回-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

//数组传参实际上传递的是数组首元素的地址
//而不是整个数组
//所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的


void add(int* p)
{
	(*p)++;
}

//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

int main()
{
	//int len = strlen("abcdef");
	//printf("%d\n", len);
	//int len2 = sizeof("abcdef");
	//printf("%d\n", len2);

	//链式访问 一个函数的返回值作为另一个函数的参数
	printf("%d\n", strlen("abcdef"));

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}

//明确的说明，main函数不需要参数
//int main(void)
//{
//	return 0;
//}

//本质上main函数是有三个参数的
int main(int argc, char* argv[], char* envp[])
{
	return 0;
}