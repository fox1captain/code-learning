#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>




//ָ������2��Ҫ��
//1.ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ�ǵ�ַ
//2.ƽʱ����˵��ָ�룬ͨ��ָ����ָ�����������������ڴ��ַ�ı���


//int main()
//{
//	int a = 10;//a�����ͱ�����ռ��4���ֽڵ��ڴ�ռ�
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
//	//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽڡ�
//
//	return 0;
//}

//ָ�����͵�����
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
//����1��ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
//�����int*��ָ�룬�����÷���4���ֽ�
//�����char*��ָ�룬�����÷���1���ֽ�
//ͬ������ƹ㵽��������

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
//����2:ָ�����;�����ָ��+/-1������ʱ�����������ֽ�
//������ָ��Ĳ���


//Ұָ�룺Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�

//int main()
//{
//	int* p;
//	//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ��0xcccccccc
//
//	*p = 10;//�Ƿ������ڴ��ˣ������p����Ұָ��
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
//		p++; //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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

//ָ������
// 1.ָ��+-����

//float values[5];
//float* vp;
//
//for (vp = &values[0]; vp < &values[5]; )
//{
//	*vp++ = 0;
//	//��Ϊ����
//	//1.*vp = 0;
//	//2.vp++;
//}

// 2.ָ��-ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}
//ָ��-ָ��ľ���ֵ�õ�����ָ���ָ��֮��Ԫ�صĸ���
//�������е�ָ�붼�����
//ָ��ͬһ��ռ��2��ָ��������

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

//ָ��Ĺ�ϵ����
 

//ָ�������
//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	//arr ����Ԫ�صĵ�ַ
//	//&arr[0]
//	int* p = arr;
//	//ͨ��ָ������������
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

//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ�������һ��ָ�����
//	int** ppa = &pa;//ppa��һ������ָ�����������ָ��������������һ��ָ������ĵ�ַ��
//
//	**ppa = 20;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//ָ������
//���ָ����������ָ������

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int arr[10];
	
	//parr���Ǵ��ָ�������
	//ָ������
	int* parr[10] = { &a, &b, &c };


	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *parr[i]);
	}

	return 0;
}
