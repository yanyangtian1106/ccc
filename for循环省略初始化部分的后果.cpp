#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)                                     //ʡ�Գ�ʼ�����ֺ����ڲ���forѭ��10��֮��j=10
			                                                    //�ⲿѭ��ѭ���ڶ���ʱ�ٽ����ڲ�ѭ��ʱj=10�������޷�
			                                                    //������ӡhehe���Ӷ�ʹ��ӡ100��hehe����˴�ӡ10��hehe
			                                                    //�������ʼ�����ֲ��Ͼ���ʵ�ִ�ӡ100��hehe
		{
			printf("hehe\n");
		}
	}
	return 0;
}