#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float f;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    f = (a + b + c + d + e) / 5.0;
    printf("%.1f", f);
    return 0;
}