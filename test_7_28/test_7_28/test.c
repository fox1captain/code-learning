#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//
//int main()
//{
//	int ret = Fun(2);
//	printf("%d\n", ret);
//
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�
//��дһ�������������ַ����е��ַ��������У����������ӡ��

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse(char* str)
{
	char tmp = *str;
	int len = my_strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}

//int main()
//{
//	char arr[] = "abcdefg";//[a b c d e f g \0]
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left = 0;
//	////int right = sz - 2;
//	//int right = strlen(arr) - 1;
//
//	//while (left < right)
//	//{
//	//	char tmp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = tmp;
//
//	//	left++;
//	//	right--;
//	//}
//
//	reverse(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



//����һ������ÿλ֮��(�ݹ�ʵ��)

//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//
//	return 0;
//}

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��

//k>0, Pow(n,k) -> n*Pow(n, k-1)
//k=0, 1
//k<0, 1/(Pow(n, -k));


double Pow(int n, int k)
{
	if (k > 0)
		return n * Pow(n, k - 1);
	else if (k == 0)
		return 1;
	else
		return 1.0 / Pow(n, -k);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	double ret = Pow(n, k);

	printf("%lf\n", ret);

	return 0;
}