#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	//����ĸʱ
	if (c >= 'A' && c <= 'Z')
	{
		//����
		for (int i = 1; i < c - 'A' + 1; i++)
		{
			//��ӡ�ո�
			for (int j = 1; j <= c - 'A' + 1 - i; j++)//������ȥ�ڼ���
			{
				printf(" ");
			}
			//��ӡ��ĸ
			//����
			for (int j = 1; j <= i; j++)
			{
				printf("%c", 'A' + j - 1);
			}
			//���
			for (int j = i - 1; j >= 1; j--)
			{
				printf("%c", 'A' + j - 1);
			}
			printf("\n");
		}
	}
	else
	{
		//����
		for (int i = 1; i < c - '1' + 1; i++)
		{
			//��ӡ�ո�
			for (int j = 1; j <= c - '1' + 1 - i; j++)//������ȥ�ڼ���
			{
				printf(" ");
			}
			//��ӡ����
			//����
			for (int j = 1; j <= i; j++)
			{
				printf("%c", '1' + j - 1);
			}
			//���
			for (int j = i - 1; j >= 1; j--)
			{
				printf("%c", '1' + j - 1);
			}
			printf("\n");
		}
	}
	return 0;
}




////�����ĸ������
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	//����
//	for (int i = 1; i <= n; i++)
//	{
//		//��ӡÿ�пո�
//		for (int j=n-i;j>0;j--)
//		{
//			printf(" ");
//		}
//		//��ӡÿ����ĸ
//		for (int k = i * 2 - 1; k > 0; k--)
//		{
//			printf("%c", 'A' + i - 1);
//		}
//		//����
//		printf("\n");
//	}
//	return 0;
//}