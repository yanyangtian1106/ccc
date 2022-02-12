#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//不改变外部变量时使用传值调用
//改变外部变量时考虑使用传址调用
void swap2(int* pa, int* pb)//形式参数                                             //无返回值用void
//“传址调用”这种传参方式可以让函数和函数外部的变量建立起真正的联系
//也就是函数内部能够直接操作函数外部的变量
{
	int sum = 0;
	sum = *pa;                                                         //需要使用指针变量来远程操控a，b的值的交换
	*pa = *pb;
	*pb = sum;
}
void swap1(int x, int y)
//当实参“传值调用”给形参的时候
//函数的形参和实参分别占用不同的内存块
//形参其实是实参的一份临时拷贝
//对形参的修改其实是不会修改实参的
{
	int sum = 0;                                                 //不能使用x，y直接交换，因为x，y有自己独立的地址与a，b无关
	sum = x;                                                     //会导致a，b的值交换不成功
	x = y;
	y = sum;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d", a, b);
	//调用swap1函数
	//传值调用
	//
	swap1(a, b);
	//调用swap2函数
	//传址调用
	swap2(&a, &b);//实际参数                                           //要引入地址
	printf("a=%d\nb=%d", a, b);
	return 0;
}