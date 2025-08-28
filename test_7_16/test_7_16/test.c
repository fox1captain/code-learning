#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//
//	//sizeof(arr) 计算的是数组的总大小，单位是字节
//	//sizeof(arr[0]) 计算的是数组元素的大小
//
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	while (i < num)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//
//	return 0;
//
//}

//int main()
//{
//	int id = 0;
//	float c = 0.0;
//	float math = 0.0f;
//	float eng = 0.0f;
//
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//
//	printf("NO %d is %.2f,%.2f,%.2f.\n", id, c, math, eng);
//
//
//	return 0;
//
//}


//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	return 0;
//
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"hello world!\" << endl;\n");
//
//	return 0;
//
//}


//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//
//	printf("%.3lf\n", v);
//
//	return 0;
//}

//int main()
//{
//	int w = 0;
//	int h = 0;
//
//	scanf("%d %d", &w, &h);
//
//	float bmi = w / (h / 100.0) / (h / 100.0);
//
//	printf("%.2f\n", bmi);
//
//	return 0;
//}

//int main()
//{
//	printf("%.2f\n", 180 / 100.0);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//1.初始化 2.判断 3.调整 

//for循环的判断部分省略意味着判断会恒成立

//for (;;)
//{
//	printf("hehe\n");
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int j = 0;
//	int n = 1;
//	int ret = 1;
//	int ret2 = 0;
//
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	for (j = 1, ret =1; j <= n; j++) 
//	//	{
//	//		ret = ret * j;
//	//	}
//	//	ret2 = ret2 + ret;
//	//}
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		ret2 = ret2 + ret;
//	}
//	//优化代码为一个循环，提高效率
//
//	printf("%d\n", ret2);
//
//	return 0;
//
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;
	//在一个有序数组中查找具体的某个数字n
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);


	//for (i = 0; i < sz; i++)
	//{
	//	if (arr[i] == k)
	//	{
	//		printf("找到了，下标是：%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("找不到\n");
	//}

	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
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
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	//二分查找，效率很高
	return 0;
}