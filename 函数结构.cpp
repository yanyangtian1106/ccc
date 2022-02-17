#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
	//函数申明
int add(int x,int y);                                                   //一般同一个源文件不这样写
#include "add.h"
 
int main()
{
	int a = 10;
	int b = 20;
	int Add(int x, int y);
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

	//函数的定义
int add(int a, int b)
{
	int z = a + b;
	return z;
}