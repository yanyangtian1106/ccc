#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_prime(int n)
{
	//是素数返回1，不是素数返回0
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;                                           //用外部函数寻找素数
		}
	}
	return 1;
}
int main()
{
	//打印100到200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			//判断i是否为素数
			printf("%d ", i);
		}
	}
	return 0;
}