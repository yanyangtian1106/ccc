#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %8d %8d", a, b, c);
    return 0;
}