#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* pf = fopen("C:\\Users\\Bling233\\Desktop\\test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//...
//	//���ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// д�ַ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//fputc('a', pf);
//	//char i = 0;
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i, pf);
//	//}
//
//	//дһ������
//	//fputs(" hello bit", pf);
//
//	//��һ������
//	char arr[20];
//	fgets(arr, 6, pf);
//
//	printf("%s\n", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//���ַ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	//printf("%s %d %f\n", s.name, s.age, s.score);
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);//�ȼ�������һ�е�printf����
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//��
//FILE*
//printf
//scanf

//�κ�һ��C����ֻҪ���������ͻ�Ĭ�ϴ�3����
//FILE* stdin - ��׼�����������̣�
//EILE* stdout - ��׼���������Ļ��
//FILE* stderr - ��׼����������Ļ��

//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};

//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//	//�Զ����Ƶ���ʽд���ļ���
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�Զ����Ƶķ�ʽд
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	//�Զ����Ƶ���ʽд���ļ���
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�Զ����Ƶķ�ʽ��
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

/*
����                ������       ������
�ַ����뺯��        fgetc       ����������
�ַ��������        fputc       ���������     
�ı������뺯��      fgets       ����������
�ı����������      fputs       ���������
��ʽ�����뺯��      fscanf      ����������
��ʽ���������      fprintf     ���������
����������          fread       �ļ�
���������          fwrite      �ļ�
*/

struct S
{
	char name[10];
	int age;
	float score;
};

int main()
{
	struct S s = { "zhangsan", 20, 55.5f };
	struct S tmp = { 0 };
	char buff[100] = { 0 };
	//��s�еĸ�ʽ������ת�����ַ����ŵ�buff��
	sprintf(buff, "%s %d %f", s.name, s.age, s.score);

	printf("�ַ������:%s\n", buff);

	//���ַ���buff�л�ȡһ����ʽ�������ݵ�tmp��
	sscanf(buff, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("��ʽ�����:%s %d %f\n", tmp.name, tmp.age, tmp.score);

	return 0;
}


/*
scanf  ����Ա�׼����ĸ�ʽ���������
printf ����Ա�׼����ĸ�ʽ��������

fscanf  ����������������ĸ�ʽ���������
fprintf ���������������ĸ�ʽ��������

sscanf  ��һ���ַ���ת����һ����ʽ��������
sprintf ��һ����ʽ��������ת�����ַ���

*/