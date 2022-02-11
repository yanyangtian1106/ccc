#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    float c;
    float d;
    scanf("%d %d", &a, &b);
    c = b / 100.0;                                                       //浮点数进行运算要与浮点数运算所以100应写成100.0
    d = a / (c * c);
    printf("%.2f", d);
    return 0;
}