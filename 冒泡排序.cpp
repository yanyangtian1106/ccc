#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int se)                                    //ð������
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < se - 1; i++)
	{
		int flag = 1;//������һ�������Ѿ�����                   �Ż�
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < se - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//������������ݲ���ȫ����
			}
		}
		if (flag == 1)                                     //�Ż�
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
	//��arr���������ų�����
	//arr�����飬��������д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
	bubble_sort(arr, se);//ð��������
	for (i = 0; i < se; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
