#include <stdio.h>
// 第一种方法打印元素
void print1(int arr[3][5], int r, int c){
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

// 第二种方法打印元素
void print2(int (*p)[5], int r, int c){
    for (int i = 0; i < r; i++)
    {
        /* code */
        for (int j = 0; j < c; j++)
        {
            /* code */
            printf("%d ", *(*(p+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    /* code */
    // 定义二维数组
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    print1(arr,3,5);
    print2(arr,3,5);
    return 0;
}
