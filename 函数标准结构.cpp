#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __ADD_H__
#define __ADD_H__

//函数的申明
int Add(int x, int y);

#endif 
//函数的定义
int Add(int x, int y)  //函数的申明和函数的定义都要放在头文件中
{
	return x + y;
}
#include <stdio.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	//函数的调用
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}