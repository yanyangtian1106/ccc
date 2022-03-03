#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    float a;
    int b;
    scanf("%f", &a);
    b = a;
    printf("%d", b % 10);
    return 0;
}