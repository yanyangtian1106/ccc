#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float z = 0, zi = 0;
	float x = 0, xi = 0;
	scanf("%f %f %f %f", &z, &zi, &x, &xi);
	printf("和=%.0f+%.0fi\n", z + x, zi + xi);                                 //4题
	printf("差=%.0f-%.0fi\n", z - x, zi - xi);
	printf("积=%.0f+%.0fi\n", z * x - zi * xi, zi * x + z * xi);
	printf("商=%f+%fi\n", (z * x + zi * xi) / (x * x + xi * xi), (zi * x - z * xi) / (x * x + xi * xi));
	return 0;
}