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
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

// 写字符
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputc('a', pf);
//	//char i = 0;
//	//for (i = 'a'; i <= 'z'; i++)
//	//{
//	//	fputc(i, pf);
//	//}
//
//	//写一行数据
//	//fputs(" hello bit", pf);
//
//	//读一行数据
//	char arr[20];
//	fgets(arr, 6, pf);
//
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//读字符
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);//等价于上面一行的printf函数
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//流
//FILE*
//printf
//scanf

//任何一个C程序，只要运行起来就会默认打开3个流
//FILE* stdin - 标准输入流（键盘）
//EILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）

//struct S
//{
//	char name[10];
//	int age;
//	float score;
//};

//int main()
//{
//	struct S s = { "zhangsan", 25, 50.5f };
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制的方式写
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
//	//以二进制的形式写到文件中
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制的方式读
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

/*
功能                函数名       适用于
字符输入函数        fgetc       所有输入流
字符输出函数        fputc       所有输出流     
文本行输入函数      fgets       所有输入流
文本行输出函数      fputs       所有输出流
格式化输入函数      fscanf      所有输入流
格式化输出函数      fprintf     所有输出流
二进制输入          fread       文件
二进制输出          fwrite      文件
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
	//把s中的格式化数据转化成字符串放到buff中
	sprintf(buff, "%s %d %f", s.name, s.age, s.score);

	printf("字符串输出:%s\n", buff);

	//从字符串buff中获取一个格式化的数据到tmp中
	sscanf(buff, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
	printf("格式化输出:%s %d %f\n", tmp.name, tmp.age, tmp.score);

	return 0;
}


/*
scanf  是针对标准输入的格式化输入语句
printf 是针对标准输出的格式化输出语句

fscanf  是针对所有输入流的格式化输入语句
fprintf 是针对所有输出流的格式化输出语句

sscanf  从一个字符中转化出一个格式化的数据
sprintf 把一个格式化的数据转化成字符串

*/