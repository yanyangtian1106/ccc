#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[3][4] = { {1,2,3} ,{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;                                            //��ӡ��ά�����е�ÿһ�����ĵ�ַ
		for (j = 0; j < 4; j++)                               //��ά����Ҳ��һά����һ���ִ����Ŀռ���������
		{
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}