#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ�����;�����ָ����н�Ӧ�ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p��* p�ܹ�����4���ֽ�
//char* p��* p�ܹ�����1���ֽ�
//double* p��* p�ܹ�����8���ֽ�
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char c = 0x11223344;
	char* pc = &c;
	printf("%p\n", pa);
	printf("%p\n", pa + 1);//+1ֱ�ӵ�ַҪ��һ�����͵Ĵ�С��4��

	printf("%p\n", pc);
	printf("%p\n", pc + 1);//+1ֻ��һ��char�Ĵ�С��1��

	return 0;
}