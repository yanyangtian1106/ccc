#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", ((a % 100) - (a % 10)) / 10);
    return 0;
}