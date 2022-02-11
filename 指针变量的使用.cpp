#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap2(int* pa, int* pb)                                             //无返回值用void
{
	int sum = 0;
	sum = *pa;                                                         //需要使用指针变量来远程操控a，b的值的交换
	*pa = *pb;
	*pb = sum;
}
//void swap1(int x,int y)
//{
//	int sum = 0;                                                 //不能使用x，y直接交换，因为x，y有自己独立的地址与a，b无关
//	sum = x;                                                     //会导致a，b的值交换不成功
//	x = y;
//	y = sum;
//}
int main()
{
	int a = 10;
	int b = 20;
	/*swap1(a, b);*/
	swap2(&a, &b);                                            //要引入地址
	printf("a=%d\nb=%d", a, b);
	return 0;
}