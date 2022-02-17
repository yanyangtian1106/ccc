#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void print(int n)
{
	if (n > 9)                                                    //输入一个无符号的数字，打印出他的每一位数
	{
		print(n / 10);
	}
	printf("%d ", n % 10);                                        //递归的两个必要条件
																  //存在限制条件，当满足这个限制条件的时候，递归便不再继续，而是会原路返回
																  //每次递归调用之后越来越接近这个限制条件
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}