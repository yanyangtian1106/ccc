#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));
    scanf("%s", &str);
    char* end = str;
    while (*end != '\0') end++; //找到字符串末尾
    printf("%d\n", end - str); //尾指针减头指针等于中间元素的个数 

    return 0;
}
//cin.getline()接收一个字符串并输出，函数的完整形式有三个参数：cin.getline(字符数组名, 字符个数, 结束标志)
//其头文件#include <iostream>，使用这个头文件的时候要用using namespace命名空间