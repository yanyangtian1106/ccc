#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int se = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = se - 1;
	while (left <= right)                                      //ʹ�ö��ֲ��ҷ�����Ԫ��
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}

	}
	if (left > right)
	{
		printf("û�ҵ�\n");
	}
	return 0;
	return 0;
}