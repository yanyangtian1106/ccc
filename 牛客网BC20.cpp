#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    scanf("%d %d", &a, &b);
    c = a + b;
    d = (c % 100) / 10;                                           //一个算式只取其值的十位和个位
    e = c % 10;
    if (d == 0)
    {
        printf("%d", e);
    }
    else
    {
        printf("%d%d", d, e);
    }
    return 0;
}