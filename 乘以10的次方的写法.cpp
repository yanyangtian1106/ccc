#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int age;
    long long s;
    scanf("%d", &age);//age����200
    s = age * 3.156e7;                                        //e7��ʾ����10��7�η�                      
    printf("%lld", s);                                        //��ӡlong long Ҫ��%lld����                     
        return 0;
}