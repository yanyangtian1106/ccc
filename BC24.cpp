#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    scanf("%f %f %f", &a, &b, &c);
    d = a + b + c;
    e = (a + b + c) / 3;
    printf("%.2f %.2f", d, e);
    return 0;
}