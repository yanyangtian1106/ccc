#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int s[5] = { 1,2,2,1,0 }, c[3] = { 0 }, i;
	for (i = 0; i <5; i++)                                          //数组的套用
		c[s[i]]++;
	for (i = 0; i < 3; i++)
		printf("%d", c[i]);
	return 0;
}