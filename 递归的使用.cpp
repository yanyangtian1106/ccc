#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ʹ����ʱ����������һ���ַ��Ĵ�С
int my_strlen(char* str)                                      //ָ�봫���ַ��������ַ��ĵ�һ�����ŵĵ�ַ
{
	//�������ַ����ǡ�0���ͼ�һλ�ٴ��ж�
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}