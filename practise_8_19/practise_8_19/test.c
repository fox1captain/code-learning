#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int count_num(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);

	int n = count_num(num);
	printf("%d\n", n);

	return 0;
}