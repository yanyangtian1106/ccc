#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
float esa(float r)
{
    float S = 3.14 * pow(r, 2);
    return S;
}
int main()
{
    float r;
    scanf("%f", &r);
    float S = esa(r);
    printf("%f", S);
    return 0;
}