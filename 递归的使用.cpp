#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//不使用临时变量，计算一个字符的大小
int my_strlen(char* str)                                      //指针传输字符传的是字符的第一个符号的地址
{
	//如果这个字符不是‘0’就加一位再次判断
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}