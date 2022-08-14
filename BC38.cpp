#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float arr(float r1, float r2)
{
    float R = 1.0 / (1.0 / r1 + 1.0 / r2);
    return R;
}
int main()
{
    float r1;
    float r2;
    scanf("%f %f", &r1, &r2);
    float R = arr(r1, r2);
    printf("%f", R);
    return 0;
}