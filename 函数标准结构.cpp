#define _CRT_SECURE_NO_WARNINGS 1

#ifndef __ADD_H__
#define __ADD_H__

//����������
int Add(int x, int y);

#endif 
//�����Ķ���
int Add(int x, int y)  //�����������ͺ����Ķ��嶼Ҫ����ͷ�ļ���
{
	return x + y;
}
#include <stdio.h>
#include "add.h"
int main()
{
	int a = 10;
	int b = 20;
	//�����ĵ���
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}