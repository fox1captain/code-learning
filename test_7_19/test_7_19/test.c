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
//		//�����Ļ
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
//		printf("����������:>");
//		scanf("%s", password);
//
//		//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp
//		//�������ֵΪ0����ʾ�����ַ������
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}

//1.���Բ���һ���������1-100��
//2.������
//�´���
//��С��
//ֱ���¶ԣ�����

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
	//���������
	int ret = rand()%100+1;//����������ĺ���
	//printf("%d\n", ret);
	//������

	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

//ָ��
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ��߼�
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	printf("��ע�⣬��ĵ��Խ���90���ڹػ����������:��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
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

//��ʵ�δ��ݸ��βε�ʱ�򣬣��β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	Swap(&a, &b);
//
//	printf("������:a=%d b=%d\n", a, b);
//
//	return 0;
//}

//��ֵ���� �������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ���� ��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//���ִ��η�ʽ�����ú����ͺ�����ߵı���������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���

//��ӡ��100-200�������
//����ֻ�ܱ�1������������
//�ж��߼���2~i-1֮�������ȥ�Գ�i

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


//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//�����жϵĹ���
//1.�ܱ�4���������Ҳ��ܱ�100����������
//2.�ܱ�400����������


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

int binary_search(int arr[], int k, int sz) //�β�arr����ȥ�����飬������ָ�����
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
			return mid;//�ҵ��˷����±�
		}
	}

	return -1;//�Ҳ���

}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
////                0 1 2 3
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}

//���鴫��ʵ���ϴ��ݵ���������Ԫ�صĵ�ַ
//��������������
//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�


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

	//��ʽ���� һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
	printf("%d\n", strlen("abcdef"));

	printf("%d", printf("%d", printf("%d", 43)));

	return 0;
}

//��ȷ��˵����main��������Ҫ����
//int main(void)
//{
//	return 0;
//}

//������main������������������
int main(int argc, char* argv[], char* envp[])
{
	return 0;
}