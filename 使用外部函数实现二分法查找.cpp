#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int binary_search(int arr[], int k, int se)
{
	//�㷨��ʵ��
	int left = 0;
	int right = se - 1;
	
	while (left <= right)//����Ҫ��<=����Ȼ�����±���ͬʱ���Ҷ���Ҫ�ҵ��Ǹ���ʱ�ͻ��Ҳ���
	{
		int mid = (left + right) / 2;//mid����Ҫ����whileѭ�����棬��Ȼÿһ��ѭ��ʱmid������һ����
		if (arr[mid] < k)
		{
			left = mid+1;
		}
		else if(arr[mid]>k )                                                                    //���ⲿ��������ʽʹ�ö��ַ�
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
		printf("�Ҳ���ָ������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", re);
	}
	return 0;
}