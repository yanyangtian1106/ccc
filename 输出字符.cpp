#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    char a;
    int b;
    double c;
    scanf("%c %d %lf", &a, &b, &c);
    printf("%c %d %.6lf", a, b, c);
    return 0;
}