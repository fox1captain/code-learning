#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("������\n");
//
//	return 0;
//
//}

//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		num++;
//		if (num % 2 == 1)
//			printf("%d\n", num);
//	}
//
//	return 0;
//
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default :
//		printf("�������\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:switch (n)
//	{
//	case 1: n++;
//	case 2: m++; n++;
//		break;
//	}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

int main()
{
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	//EOF;
	
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar (ch);
	//}

	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);

	getchar();

	printf("��ȷ������(Y/N):>");
	int ret = getchar();
	if ('Y' == ret)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}


	return 0;
}