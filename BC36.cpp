#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float hot(float f)
{
    float c = (f - 32) * 5.0 / 9;          //c为浮点数所以/两边要有一边为浮点数才能得到浮点数，/两边都是整数得到的是一个整数
    return c;
}
int main()
{
    float f;
    scanf("%f", &f);
    float c = hot(f);
    printf("%.3f\n", c);
    return 0;
}