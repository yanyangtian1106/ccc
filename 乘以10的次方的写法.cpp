#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int age;
    long long s;
    scanf("%d", &age);//age输入200
    s = age * 3.156e7;                                        //e7表示乘以10的7次方                      
    printf("%lld", s);                                        //打印long long 要用%lld才行                     
        return 0;
}