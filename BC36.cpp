#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float hot(float f)
{
    float c = (f - 32) * 5.0 / 9;          //cΪ����������/����Ҫ��һ��Ϊ���������ܵõ���������/���߶��������õ�����һ������
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