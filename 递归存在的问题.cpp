#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib2(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{                                                                  //该算法更加高效
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int count = 0;
//全局变量
int Fib1(int x)
{
	if (x == 3)
	{
		//测试第三个斐波那契数的计算次数，计算一次，count+1，
		count++;
	}
	if (x <= 2)
	{
		return 1;                                                      //该算法效率低下，递归并不是适合解决所有问题
	}
	else
	{
		return Fib1(x - 2) + Fib1(x - 1);                                                //使用递归来求第n个斐波那契数列
	}
}
int main()
{
	int n;
	scanf("%d", &n);            //先写主体使用函数再写函数内部的写法叫做TDD-测试驱动开发
	int ret;
	ret = Fib2(n);
	printf("%d\n", ret);
	printf("count=%d\n", count);
	return 0;
}