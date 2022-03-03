#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%x %o", &a, &b);
    printf("%d", a + b);
    return 0;
}