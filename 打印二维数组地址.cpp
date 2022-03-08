#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3} ,{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;                                            //打印二维数组中的每一个数的地址
		for (j = 0; j < 4; j++)                               //二维数组也和一维数组一样粗存数的空间是连续的
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}