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
	{                                                              //�׳����
		for (b = 1,d=1; b <=c; b++)                                //dÿһ�ν������ѭ��ʱӦ�ö�Ҫ����1������
		{                                                          //���԰�ȡ����c����a������ʹ�������
			d = b * d;
		}
		e = d + e;
	}
	printf("%d",e);
	return 0;
}