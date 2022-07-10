#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
float mmax(float arr[], int n)
{
	float max = 0;
	int i = 0;
	max = arr[0];
	for (i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
float  mmin(float arr[], int n)
{
	float min = 0;
	int i = 0;
	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
float ping(float arr[], int n)
{
	int i = 0;
	float he = 0;
	for (i = 0; i < n; i++)
	{
		he += arr[i];
	}
	return he / n;
}
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);



	float arr[3] = { 0 };
	for (i = 0; i < n; i++)
		scanf("%f", &arr[i]);
	float a, b, c;
	a = mmax(arr, n);
	b = mmin(arr, n);
	c = ping(arr, n);
	printf("%.2f %.2f %.2f", a, b, c);
	return 0;
}