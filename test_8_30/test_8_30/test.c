#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	int** p = arr;
//
//	//����ָ��
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
//	//����ָ��  - Ҳ��һ��ָ�룬��ָ������ָ��
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//
//	int(*pf)(const char*) = test;
//	(*pf)("abc");
//	//pf �� test
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

//void(*p)() p�Ǻ���ָ��
//void(*)() �Ǻ���ָ������
//(void(*)())0 ��int���͵�0����ǿ������ת�� תΪ����ָ������

//���ϴ�����һ�κ������ã����õ���0��Ϊ��ַ���ĺ���
//1.��0ǿ������ת��Ϊ���޲Σ�����������void�ĺ����ĵ�ַ
//2.����0��ַ�����������


//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//	return 0;
//}

//signal�Ǻ����������ϴ�����һ�κ�������
//������signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int����������������void��signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int����������������void

//��������������Ż�

typedef void(* pf_t)(int); //��void(*)(int)����������Ϊpf_t

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
//�ص�����
//
//calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("��������������");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}



//����ָ��Ҳ��ָ��
//�Ѻ���ָ����������У���ʵ���Ǻ���ָ�������

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
//	int(*pf)(int, int) = Add;//pf�Ǻ���ָ��
//	int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr�Ǻ���ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//
//	return 0;
//}

//ʹ�ú���ָ�������Ż�����Ĵ���
//��Ҫ�����һЩ��������
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
//	//ʹ�ú���ָ������
//	//ת�Ʊ�
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y); //ͨ������ָ�������±���ú������Ӷ��Ż�����
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}


//ָ����ָ�������ָ��

//int main()
//{
//	//����ָ������
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	//ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}


//�ص�����
//�ص���������ͨ������ָ����õĺ���������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��������
//�����ָ�뱻����������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã�
//�������ض����¼�����������ʱ����һ�����õģ����ڶԸ��¼�������������Ӧ��
//


//ð������

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//���ñ�־λ���ж������Ƿ��Ѿ��ź���
		//һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz -1 -i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//��ʾ����˳���б仯
			}
		}
		if (flag == 1)
		{
			break;//�����־λΪ1��ʾ�����ʼ˳��û�䣬���ź�˳������ѭ��
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//�������ų�����
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}