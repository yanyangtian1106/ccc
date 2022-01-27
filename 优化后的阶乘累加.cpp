#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int b = 1;
	int c = 0;
	for (a = 1; a <= 10; a++)                                    //优化后的阶乘累加
	{
		b = a * b;
		c = c + b;
	}
	printf("%d\n",c);
	return 0;
}