#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
	//��������
int add(int x,int y);                                                   //һ��ͬһ��Դ�ļ�������д
#include "add.h"
 
int main()
{
	int a = 10;
	int b = 20;
	int Add(int x, int y);
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

	//�����Ķ���
int add(int a, int b)
{
	int z = a + b;
	return z;
}