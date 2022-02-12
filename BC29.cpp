#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 2;
    int b = 0;
    int n = 0;
    scanf("%d", &n);
    b = pow(a, n);
    printf("%d", b);
    return 0;
}