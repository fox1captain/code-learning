#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//strlen() �ַ�������

//int main()
//{
//	char arr[] = "abcdef";//abcdef\0
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

#include <assert.h>

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str); //������� ���ָ�������Ƿ�Ϊ��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

//strcpy �ַ�������

//int main()
//{
//	char name[20] = { 0 };
//
//	strcpy(name, "zhangsan");
//	printf("%s\n", name);
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//strcat �ַ���׷��

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҵ�Ŀ��ռ��ĩβ\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.�����ַ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	//strcat(arr1, "world");
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcmp �Ƚ������ַ����Ƿ���� ����ַ���Ƚ�

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[20] = "zhangsan";
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("==\n");
//	else
//		printf(">\n");
//
//	return 0;
//}

//strcpy
//strcmp
//strcat
//����Ϊ���Ȳ������Ƶ��ַ�������

//���������Ƶ��ַ�������
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[] = "abcde";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 5);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[20] = "world man";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcq";
//	int ret = strncmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}