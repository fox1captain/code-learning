#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//ָ�����
//1.�ַ�ָ��
//2.����ָ��
//3.ָ������
//4.���鴫�κ�ָ�봫��
//5.����ָ��
//6.����ָ������
//7.ָ����ָ�������ָ��
//8.�ص�����
//9.ָ����������������

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


//ָ������ - �����飬�������ָ�������

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

//����ָ�� ָ�������ָ��

//int* p1[10]; p1��ָ������
//int (*p2)[10]; p2������ָ�룬p2����ָ��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����int���͡�

//�ٴ�����������
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

//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//������2������
//1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С
//2.&���������������������ʾ��Ҳ���������飬����&������ȡ��������������ĵ�ַ

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
//	//arr������ ��ʾ������Ԫ�صĵ�ַ
//	//��ά�������Ԫ�������ĵ�һ��
//	//��һ�еĵ�ַ����һ��һά����ĵ�ַ
//	return 0;
//}

//int arr[5] arr����������
//int* arr1[5] arr1������ָ������
//int (*parr2) [10] parr2������ָ��
//int (*parr3[10])[5] parr3�Ǵ������ָ�������


//���鴫�κ�ָ�봫��

//һά���鴫��
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


//��ά���鴫��

//void test (int arr[3][5])
//{}
//void test (int arr[][]) //err �βεĶ�ά���飬�п���ʡ�ԣ��в���ʡ�ԣ�
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
	//&������-ȡ����������ĵ�ַ
	int(*p)[5] = &arr;//����ָ��

	printf("%p\n", &Add);
	printf("%p\n", Add);
	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ

	int(*pf)(int, int) = &Add;

	int ret = (*pf)(2, 3);
	int ret = pf(2, 3);

	//int ret = Add(2, 3);

	printf("%d\n", ret);

	return 0;
}