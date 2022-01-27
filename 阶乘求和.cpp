#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c=1;
	int d=1;
	int e=0;
	for (a = 0; a < 10; a++,c++)
	{                                                              //阶乘求和
		for (b = 1,d=1; b <=c; b++)                                //d每一次进这个内循环时应该都要等于1！！！
		{                                                          //可以把取消掉c换成a来代替使代码更简单
			d = b * d;
		}
		e = d + e;
	}
	printf("%d",e);
	return 0;
}