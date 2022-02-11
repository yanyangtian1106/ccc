#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float c;
    scanf("%f %f %f", &a, &b, &c);
    float p = sqrt(a + b + c) / 2;                                                            //sqrt开平方根，为库函数需要引头文件<math.h>
    printf("circumference=%.2f area=%.2f", a + b + c, p * (p - a) * (p - b) * (p - c));
    return 0;
}