#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void swap2(int* pa, int* pb)                                             //�޷���ֵ��void
{
	int sum = 0;
	sum = *pa;                                                         //��Ҫʹ��ָ�������Զ�̲ٿ�a��b��ֵ�Ľ���
	*pa = *pb;
	*pb = sum;
}
//void swap1(int x,int y)
//{
//	int sum = 0;                                                 //����ʹ��x��yֱ�ӽ�������Ϊx��y���Լ������ĵ�ַ��a��b�޹�
//	sum = x;                                                     //�ᵼ��a��b��ֵ�������ɹ�
//	x = y;
//	y = sum;
//}
int main()
{
	int a = 10;
	int b = 20;
	/*swap1(a, b);*/
	swap2(&a, &b);                                            //Ҫ�����ַ
	printf("a=%d\nb=%d", a, b);
	return 0;
}