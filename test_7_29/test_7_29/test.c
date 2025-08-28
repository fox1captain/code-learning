#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//	}
//	return 0;
//}

void bubble_sort(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//数组
	//把数组的数组排成升序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	//0 1 2 3 4 5 6 7 8 9
	//冒泡排序的算法 对数组进行排序
	bubble_sort(arr,sz);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//数组名确实能表示首元素的地址
//但是有2个例外：
//1.sizeof（数组名），这里数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组地址


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("---------------\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("---------------\n");
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	return 0;
//}


//二维数组的数组名的理解

//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	arr;//二维数组的数组名也表示数组首元素的地址，但这个首元素指的是第一行整体的地址
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);
//
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	return 0;
//}


//数组练习题

//sizeof
//sizeof是一个操作符
//是用来计算变量（类型）所占内存空间的大小，不关注内存中存放的具体内容
//单位是字节

//strlen
//strlen是一个库函数，是专门求字符串长度的，只能针对字符串
//从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数
//
//int main()
//{
//	char str[] = "hello bit";
//	//[h e l l o _ b i t \0]
//	//
//	printf("%d %d\n", sizeof(str), strlen(str));
//
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//实现函数init()初始化数组为全0
//实现print()打印数组中的每个元素
//实现reverse()函数完成数组元素的逆置

//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	reverse(arr, sz);
//	print(arr, sz);
//
//	init(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}