#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
void print(int n)
{
	if (n > 9)                                                    //����һ���޷��ŵ����֣���ӡ������ÿһλ��
	{
		print(n / 10);
	}
	printf("%d ", n % 10);                                        //�ݹ��������Ҫ����
																  //���������������������������������ʱ�򣬵ݹ�㲻�ټ��������ǻ�ԭ·����
																  //ÿ�εݹ����֮��Խ��Խ�ӽ������������
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}