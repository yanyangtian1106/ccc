#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void add(int* p)
{
	(*p)++;                                         //++的优先级比*p高所以应用（）把*p括起来才能达到使num加一的目的
}
int main()
{
	int num = 0;
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);                                                       //每调用一次外部函数使num加一
	add(&num);
	printf("num=%d\n", num);
	return 0;
}