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

//strstr �����Ӵ���һ������


char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1!='\0' && *s2!='\0' && *s1 == *s2) //�ж϶������ �����ַ����Ƿ���ĩβ �����ַ��Ƿ����
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;
}

//int main()
//{
//	char email[] = "12345.com";
//	char substr[] = "12345";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//KMP�㷨
//����㷨Ҳ������ʵ����һ���ַ����в������ַ�����
//Ч�ʸߣ�����ʵ���Ѷȴ�

//strtok
//�и��ַ���

//int main()
//{
//	const char* sep = "@.";
//	char email[] = "wangbing@12345.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//
//	//char* ret = strtok(cp, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//
//	//����������Ż�
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strerror ���ش�������Ϣ����
//C���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô�����
//0 1 2 3 4 5 

#include <errno.h>

//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//
//	//errno - C�������õ�һ��ȫ�ֵĴ������ŵı���
//
//	FILE* pf = fopen("test1.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		//
//	}
//	return 0;
//}

//memcpy �ڴ濽��
//memmove ��ǿ���ڴ濽��

void* my_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

//memcpy ���𿽱���������ռ������
//�ص��ڴ�Ŀ���������ô�����أ� memmove

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;

	if (dest < src)//��ǰ��󿽱�
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else//�Ӻ���ǰ����
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr1 + 2, arr1, 20);
//
//	//memmove(arr1 + 2, arr1, 20);
//	my_memmove(arr1, arr1+2, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//memcmp �ڴ�Ƚ�

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,3,2 };
//	int ret = memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//
//	return 0;
//}

//memset �ڴ�����

int main()
{
	char arr[] = "hello bit";
	memset(arr, '0', 5);
	memset(arr + 6, 'x', 3);
	char arr1[] = "00000";
	memset(arr1, 49, 5); //49Ϊ1��ASCIIֵ
	printf("%s\n", arr1);
	//memset ����ڴ�ʱ�����ֽ�Ϊ��λ����
	return 0;
}