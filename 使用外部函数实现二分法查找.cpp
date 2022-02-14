#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int arr[], int k, int se)
{
	//算法的实现
	int left = 0;
	int right = se - 1;
	
	while (left <= right)//必须要是<=，不然左右下标相同时并且都是要找的那个数时就会找不到
	{
		int mid = (left + right) / 2;//mid必须要放在while循环里面，不然每一次循环时mid都会是一样的
		if (arr[mid] < k)
		{
			left = mid+1;
		}
		else if(arr[mid]>k )                                                                    //用外部函数的形式使用二分法
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 1;
	int se = sizeof(arr) / sizeof(arr[0]);
	int re = binary_search(arr, k, se);
	if (re == -1)
	{
		printf("找不到指定数字\n");
	}
	else
	{
		printf("找到了，下标是；%d\n", re);
	}
	return 0;
}