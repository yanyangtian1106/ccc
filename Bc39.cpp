#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    int h;
    int r;
    int c = 10000;
    int b = 0;
    float V;
    scanf("%d %d", &h, &r);
    V = 3.14 * h * pow(r, 2);
    while (c > 0)
    {
        c = c - V;
        b++;
    }
    printf("%d", b);
    return 0;
}