#define _CRT_SECURE_NO_WARNINGS 1
//请编写函数fun，函数的功能是查找x在s所指数组中下标的位置，
//并作为函数值返回，若x不存在，则返回－1。

//#include  <stdio.h>
//#include  <stdlib.h>
//#define   N   15
//
//void NONO();
//
//int  fun(int arr[], int x)
//{
//    int i;
//
//    for (i = 0; i < N; i++)
//        if (arr[i] == x)     
//            return i;  
//        else
//             return -1;
//
//}
//int main()
//{
//    int arr[N] = { 29,13,5,22,10,9,3,18,22,25,14,15,2,7,27 }, i, x, index;
//
//    printf("arr数组中的数据 :\n");
//    for (i = 0; i < N; i++)
//        printf("%4d", arr[i]); 
//        printf("\n");
//
//    printf("给x输入待查找的数 :  ");  
//    scanf("%d", &x);
//
//    index = fun(arr, x);
//
//    printf("index=%d\n", index);
//    /*NONO();*/
//}

//void NONO()
//{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
//    FILE* fp, * wf;
//    int i, j, a[10], x, index;
//
//    fp = fopen("in.dat", "r");
//    wf = fopen("out.dat", "w");
//    for (i = 0; i < 10; i++) {
//        for (j = 0; j < 10; j++) {
//            fscanf(fp, "%d ", &a[j]);
//        }
//        fscanf(fp, "%d", &x);
//        index = fun(a, x);
//        fprintf(wf, "%d\n", index);
//    }
//    fclose(fp);
//    fclose(wf);
//}