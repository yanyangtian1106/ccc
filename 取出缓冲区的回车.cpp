#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch;
//	int ret;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s",password);            //scanf给数组赋值时不用&
//	while ((ch = getchar()) != '\n');//scanf输入时输入的数字会在缓冲区域保存，输入的数字被scanf取走，
//	                                 //但是会剩下一个回车（\n）用一个while循环的getchar来取走缓冲区中的东西，
//	                                 //直到取走最后的\n使下一个getchar不受影响
//	{
//		;
//	}
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}