#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ѱ��һ�����Ķ��������ж��ٸ�һ
int sae(int a)
{
	int count = 0;
	while (a)
	{
		a = a & (a - 1);           //���Ӽ����㷨
		count++;
	}
	return count;
}


//int sae(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)                              //ʹ�ð�λ��ķ�������
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}


//int sae(unsigned int a)//ֱ������a�޷����㸺��������һ��unsigned�Ϳ��Լ��㸺����
//{	int count=0;
//while (a)
//{
//	if ((a % 2) == 1)
//	{
//		count++;
//	}
//	a = a / 2;
//	}
//return count;
//}
int main()
{
	int a = 0;

	scanf("%d", &a);
	int count = sae(a);
	printf("%d\n", count);
}