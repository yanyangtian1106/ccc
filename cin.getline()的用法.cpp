#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));
    scanf("%s", &str);
    char* end = str;
    while (*end != '\0') end++; //�ҵ��ַ���ĩβ
    printf("%d\n", end - str); //βָ���ͷָ������м�Ԫ�صĸ��� 

    return 0;
}
//cin.getline()����һ���ַ����������������������ʽ������������cin.getline(�ַ�������, �ַ�����, ������־)
//��ͷ�ļ�#include <iostream>��ʹ�����ͷ�ļ���ʱ��Ҫ��using namespace�����ռ�