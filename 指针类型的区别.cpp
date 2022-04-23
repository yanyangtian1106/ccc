#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针类型决定了指针进行解应用操作的时候，能够访问空间的大小
//int* p：* p能够访问4个字节
//char* p：* p能够访问1个字节
//double* p：* p能够访问8个字节
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char c = 0x11223344;
	char* pc = &c;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);//+1直接地址要加一个整型的大小（4）

	printf("%p\n", pc);
	printf("%p\n", pc + 1);//+1只加一个char的大小（1）

	return 0;
}