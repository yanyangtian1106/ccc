#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Fib2(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (x > 2)
	{                                                                  //���㷨���Ӹ�Ч
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}
int count = 0;
//ȫ�ֱ���
int Fib1(int x)
{
	if (x == 3)
	{
		//���Ե�����쳲��������ļ������������һ�Σ�count+1��
		count++;
	}
	if (x <= 2)
	{
		return 1;                                                      //���㷨Ч�ʵ��£��ݹ鲢�����ʺϽ����������
	}
	else
	{
		return Fib1(x - 2) + Fib1(x - 1);                                                //ʹ�õݹ������n��쳲���������
	}
}
int main()
{
	int n;
	scanf("%d", &n);            //��д����ʹ�ú�����д�����ڲ���д������TDD-������������
	int ret;
	ret = Fib2(n);
	printf("%d\n", ret);
	printf("count=%d\n", count);
	return 0;
}