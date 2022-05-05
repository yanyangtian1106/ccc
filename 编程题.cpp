#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//创建一个整型数组，完成对数组的操作
//1，实现函数init（）初始化数组为权0
//2，实现print（）打印数组的每个元素
//3，实现revers（）函数完成数组元素的逆置
void init(int arr[], int se)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int se)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void revers(int arr[], int se)
{
	int right = se - 1;
	int left = 0;
	while (left < right)
	{
		
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int se = sizeof(arr) / sizeof(arr[0]);
	/*init(arr,se);*/
	print(arr, se);
	revers(arr, se);
	print(arr, se);
	return 0;
}