#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int hour;
    int min;
    int howmin;
    scanf("%d:%d %d", &hour, &min, &howmin);
    hour = (hour + (howmin + min) / 60) % 24;
    min = (howmin + min) % 60;
    printf("%#02d:%#02d", hour, min);
    return 0;
}