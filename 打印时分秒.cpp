#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int seconds = 0;
    scanf("%d", &seconds);
    printf("%d %d %d", seconds / 3600, (seconds % 3600) / 60, (seconds % 3600) % 60);
    return 0;
}