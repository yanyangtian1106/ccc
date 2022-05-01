#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//ึธี๋สýื้
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p\n", arr[i]);
		printf("%d\n", *(arr[i]));
	}
	return 0;
}