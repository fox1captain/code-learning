#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "add.h"

#pragma comment(lib, "add.lib")

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}


//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}

//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

#include <string.h>

//��дһ����������������ʱ���������ַ����ĳ���

//int my_strlen(char* str)
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0; 
//}
//
//int main()
//{
//	char arr[] = "abc"; //[a b c \0]
//
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//
//	return 0;
//}

//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}

	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}