#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10, };
	int k = 7 ;
	int i;
	int se = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <se; i++)
	{
		if (k == arr[i])                                 //����������һ��������
		{
			printf("�ҵ��ˣ��±��ǣ�%d",i);
			break;
		}

		}
	if (i ==  se)
	{
		printf("û��");
	}
	return 0;

}