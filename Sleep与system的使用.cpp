#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
	char passworld[30] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", passworld);
		if (strcmp(passworld, "1035282452") == 0)                                       //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��strcmp( , )==0 �����бȽϣ�strcmp�ǿ⺯����Ҫ����ͷ�ļ�<string.h>
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("����24Сʱ");
	}

	return 0;
}