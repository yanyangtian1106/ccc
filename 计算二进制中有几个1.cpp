#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//寻找一个数的二进制中有多少个一
int sae(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);           //更加简便的算法
		count++;
	}
	return count;
}


//int sae(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)                              //使用按位与的方法计算
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int sae(unsigned int a)//直接引入a无法计算负数，加上一个unsigned就可以计算负数了
//{	int count=0;
//while (a)
//{
//	if ((a % 2) == 1)
//	{
//		count++;
//	}
//	a = a / 2;
//	}
//return count;
//}
int main()
{
	int a = 0;

	scanf("%d", &a);
	int count = sae(a);
	printf("%d\n", count);
}