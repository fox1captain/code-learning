#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//
//	int len = strlen(arr1);
//	printf("%d\n", len);
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return   0;
//}

//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}


//C�����ǽṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ

int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

//int main()
//{
	//int n1 = 0;
	//int n2 = 0;

	//scanf("%d %d", &n1, &n2);

	//int sum = ADD(n1, n2);

	//printf("%d\n", sum);

	//char ch[5] = { 'a','b','c','d','e' };

	//int i = 0;
	//while (i < 5)
	//{
	//	printf("%c\n", ch[i]);
	//	i++;
	//}

	//char ab[6] = { "hello" };

	//printf("%d\n", strlen(ab));

//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = max(a, b);
//	printf("%d\n", c);
//
//
// 	return 0;
//}

//int main()
//{
//	//����
//	int x = 0;
//	int y = 0;
//
//	scanf("%d", &x);
//	
//	//����
//	if (x > 0)
//		y = -1;
//	else if (x == 0)
//		y = 0;
//	else 
//		y = 1;
//
//	//���
//	printf("%d\n", y);
//
//	return 0;
//}

int main()
{
	int a = 10;
	//int b = a++;  ��ʹ�ã���++
	//int b = a; a = a + 1;

	int b = ++a;//ǰ��++����++����ʹ��
	//a=a+1;b=a;

	printf("a=%d\n", a);
	printf("b=%d\n", b);


	return 0;
}