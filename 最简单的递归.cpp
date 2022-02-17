#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	printf("hehe");          //程序调用自身的编程技巧称之为递归
	main();                 //最简单的递归，会出现递归常见错误 stack overflow（栈溢出）指的就是栈空间被耗干了
	return 0;
}