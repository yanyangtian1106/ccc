#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {

    char str[30] = { 0 };
    cin.getline(str, sizeof(str));
    int m;
    cin >> m;

    // write your code here......
    char arr1[30] = { 0 };
    char* arr = str + m - 1;//ָ���ַ������m��Ԫ��

    char* p = arr1;
    while (*arr != '\0')//ֱ���ַ������
    {
        *p = *arr; //����
        arr++;;//����ָ�붼����
        p++;
    }
    cout << arr1 << endl;
    return 0;
}