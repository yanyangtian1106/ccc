#define _CRT_SECURE_NO_WARNINGS 1
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	char arr1[] = { "wellcome to bit ! ! !" };//�������д����ַ����ķ�ʽ
	char arr2[] = { "                     " };
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//sizeof�����ַ����ĳ����ǰ���\0������Ҫ��ʾ���½ǵ��±�����Ҫ-2��
	int right = strlen(arr1) - 1;//strlen�����ַ��������ǲ�����\0������ֻ��Ҫ-1
	while (left <=right)
	{
		arr2[left] = arr1[left];                                             
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);                                                       //Sleep( )ʹ������Ϣһ��������У��⺯��Ҫ��ͷ�ļ�#include <windows.h>��
		system("cls");                                                     //system("cls")ִ��ϵͳ�����һ�������ǿ⺯����Ҫ����ͷ�ļ�#include <stdlib.h>-cls-�����Ļ
		left++;
		right--;
	}                                                                      //ʹ�ַ�������������һ�����м��ƶ�
	printf("wellcome to bit ! ! !");
	return 0;
}