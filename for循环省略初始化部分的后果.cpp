#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)                                     //省略初始化部分后导致内部的for循环10次之后j=10
			                                                    //外部循环循环第二次时再进入内部循环时j=10，导致无法
			                                                    //继续打印hehe，从而使打印100个hehe变成了打印10个hehe
			                                                    //如果将初始化部分补上就能实现打印100个hehe
		{
			printf("hehe\n");
		}
	}
	return 0;
}