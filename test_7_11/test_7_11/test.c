#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//typedef unsigned int unit;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//int main()
//{
//	unsigned int num = 0;
//	unit num2 = 1;
//
//	struct Node n;
//	Node n2;
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;  
//static���ξֲ�������ʱ�򣬾ֲ��������������򣬲����ٵġ�
//�����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�õģ��洢�ھ�̬��
//Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = Add(a, b);
//	printf("%d\n", r);
//
//	return 0;
//}

//#define�����ʶ����
#define NUM 100

//#define����� �����в���
#define ADD(x,y) ((x)+(y))

//int main()
//{
//	//printf("%d\n", NUM);
//	//int n = NUM;
//	//printf("%d\n", n);
//	//int arr[NUM] = { 0 };
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	&a;
//	printf("%p\n", &a);
//	int* p = &a;
//	//p����ָ�����
//	*p = 20;
//	//�����ò���������˼����ͨ��p��ŵĵ�ַ���ҵ�p��ָ��Ķ���
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//
//	printf("%zu", sizeof(char*));
//	printf("%zu", sizeof(short*));
//	printf("%zu", sizeof(int*));
//	printf("%zu", sizeof(float*));
//	printf("%zu", sizeof(double*));
//	//������ʲô���͵�ָ����������Ǵ�ŵ�ַ�ģ�ָ�������Сȡ���ڵ�ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λƽ̨�ϵĵ�ַ��32bits��4byte��ָ�������СΪ4���ֽ�
//	//64λƽ̨�ϵĵ�ַ��64bits��8byte��ָ�������СΪ8���ֽ�
//	return 0;
//
//}

struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tele[20];
};

void print(struct Stu* pp)
{
	printf("%s %d %s %s\n", (*pp).name, (*pp).age, (*pp).sex, (*pp).tele);
	//->
	//�ṹ��ָ�����->��Ա��
	printf("%s %d %s %s\n", pp->name, pp->age, pp->sex, pp->tele);
}

int main()
{
	struct Stu s = { "����",20,"male","15545685942" };
	//�ṹ�����.��Ա��
	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
	print(&s);
	return 0;
}
