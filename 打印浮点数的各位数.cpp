#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a;
    int b;
    int c;                                              //��ӡ�������ĸ�λ��
    scanf("%f",&a);
    b = a;
    c = b % 10;
    printf("%d", c);
        return 0;
}