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
	//����
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//����
	//������������ų�����
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	//0 1 2 3 4 5 6 7 8 9
	//ð��������㷨 �������������
	bubble_sort(arr,sz);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}


//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//������2�����⣺
//1.sizeof������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�������飬ȡ���������������ַ


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


//��ά����������������

//int main()
//{
//	int arr[3][4];
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	arr;//��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ���������Ԫ��ָ���ǵ�һ������ĵ�ַ
//
//	//printf("%p\n", arr);
//	//printf("%p\n", arr + 1);
//
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
//
//	return 0;
//}


//������ϰ��

//sizeof
//sizeof��һ��������
//������������������ͣ���ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
//��λ���ֽ�

//strlen
//strlen��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ���
//�Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
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

//������A�е����ݺ�����B�е����ݽ��н�����������һ����

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

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init()��ʼ������Ϊȫ0
//ʵ��print()��ӡ�����е�ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص�����

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