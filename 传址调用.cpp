#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

// write your code here......
void change(int* m, int* n)
{
    int eum = 0;
    eum = *m;
    *m = *n;
    *n = eum;
}

int main()
{

    int m, n;
    cin >> m;
    cin >> n;

    // write your code here......
    change(&m, &n);

    cout << m << " " << n << endl;

    return 0;
}