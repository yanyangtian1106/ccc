#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.3f", 4.0 / 3.0 * 3.1415926 * pow(a, 3));                                          //pow��a��3����ʾa�����η���powΪ�⺯������Ҫ��ͷ�ļ�<mat.h>
    return 0;
}