#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a;
    int b;
    int c;                                              //打印浮点数的个位数
    scanf("%f",&a);
    b = a;
    c = b % 10;
    printf("%d", c);
        return 0;
}