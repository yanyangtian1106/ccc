#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
float arr(int r)
{
    float V = (4.0 / 3) * 3.14 * pow(r, 3);
    return V;
}
int main()
{
    int r;
    scanf("%d", &r);
    float V = arr(r);
    printf("%.2f", V);
    return 0;
}