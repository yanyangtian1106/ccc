#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a;
    int b;
    float c;
    float d;
    scanf("%d %d", &a, &b);
    c = b / 100.0;                                                       //��������������Ҫ�븡������������100Ӧд��100.0
    d = a / (c * c);
    printf("%.2f", d);
    return 0;
}