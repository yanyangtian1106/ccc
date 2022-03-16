#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("%p\n", arr);                                      //通常情况下数组名就是该数组的首元素地址（但是有两个例外）	
	printf("%p\n", arr + 1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);

	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);

	printf("%d\n", *arr);
	int se = sizeof(arr) / sizeof(arr[0]);                    //sizeof(数组名)---数组名表示的是整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
															  //&数组名，数组名代表的是整个数组，&数组名，代表的是整个数组			
	return 0;
}