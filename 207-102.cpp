#define _CRT_SECURE_NO_WARNINGS 1
//���д����fun�������Ĺ����ǲ���x��s��ָ�������±��λ�ã�
//����Ϊ����ֵ���أ���x�����ڣ��򷵻أ�1��

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
//    printf("arr�����е����� :\n");
//    for (i = 0; i < N; i++)
//        printf("%4d", arr[i]); 
//        printf("\n");
//
//    printf("��x��������ҵ��� :  ");  
//    scanf("%d", &x);
//
//    index = fun(arr, x);
//
//    printf("index=%d\n", index);
//    /*NONO();*/
//}

//void NONO()
//{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
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