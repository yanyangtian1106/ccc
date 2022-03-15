#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int se)                                    //冒泡排序
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < se - 1; i++)
	{
		int flag = 1;//假设这一趟数据已经有序                   优化
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < se - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数据不完全有序
			}
		}
		if (flag == 1)                                     //优化
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int se = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，排成升序
	//arr是数组，对数组进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
	bubble_sort(arr, se);//冒泡排序函数
	for (i = 0; i < se; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
