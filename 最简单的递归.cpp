#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	printf("hehe");          //�����������ı�̼��ɳ�֮Ϊ�ݹ�
	main();                 //��򵥵ĵݹ飬����ֵݹ鳣������ stack overflow��ջ�����ָ�ľ���ջ�ռ䱻�ĸ���
	return 0;
}