#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char arr1[] = { "wellcome to bit ! ! !" };//在数组中储存字符串的方式
	char arr2[] = { "                     " };
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof计算字符串的长度是包括\0的所以要表示右下角的下标是需要-2的
	int right = strlen(arr1) - 1;//strlen计算字符串长度是不计算\0的所以只需要-1
	while (left <=right)
	{
		arr2[left] = arr1[left];                                             
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);                                                       //Sleep( )使程序休息一会儿再运行（库函数要引头文件#include <windows.h>）
		system("cls");                                                     //system("cls")执行系统命令的一个函数是库函数需要引用头文件#include <stdlib.h>-cls-清空屏幕
		left++;
		right--;
	}                                                                      //使字符串从两边两两一组向中间移动
	printf("wellcome to bit ! ! !");
	return 0;
}