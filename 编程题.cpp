#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ���������飬��ɶ�����Ĳ���
//1��ʵ�ֺ���init������ʼ������ΪȨ0
//2��ʵ��print������ӡ�����ÿ��Ԫ��
//3��ʵ��revers���������������Ԫ�ص�����
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