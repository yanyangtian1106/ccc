#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_prime(int n)
{
	//����������1��������������0
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
		{
			return 0;                                           //���ⲿ����Ѱ������
		}
	}
	return 1;
}
int main()
{
	//��ӡ100��200֮�������
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			//�ж�i�Ƿ�Ϊ����
			printf("%d ", i);
		}
	}
	return 0;
}