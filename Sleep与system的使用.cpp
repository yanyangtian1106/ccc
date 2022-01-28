#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
	char passworld[30] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", passworld);
		if (strcmp(passworld, "1035282452") == 0)                                       //==不能用来比较两个字符串是否相等，应该使用strcmp( , )==0 来进行比较，strcmp是库函数需要引用头文件<string.h>
		{
			printf("密码正确");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("冻结24小时");
	}

	return 0;
}