#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void add(int* p)
{
	(*p)++;                                         //++�����ȼ���*p������Ӧ�ã�����*p���������ܴﵽʹnum��һ��Ŀ��
}
int main()
{
	int num = 0;
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);                                                       //ÿ����һ���ⲿ����ʹnum��һ
	add(&num);
	printf("num=%d\n", num);
	return 0;
}