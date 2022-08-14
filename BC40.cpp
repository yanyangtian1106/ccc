#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int c = b + (b - a);
    printf("%d", c);
    return 0;
}