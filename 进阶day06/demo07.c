#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    // 在有序顺序表里找插入位置 输入一个数 在顺序表中找插入位置并将这个数插入
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);
    // 从后面开始找 一次循环
    int m = 0;
    scanf("%d", &m);
    int i = 0;
    for (i = n - 1; i >= 0; i--)
    {
        /* code */
        if (arr[i-1] > m)
        {
            /* code */
            // 大于m的向后移动
            arr[i] = arr[i-1];

        }else
        {
            /* code */
            // 小于或等于的在其后面一个位置插入m
            arr[i] = m;
            break;
        }
    }
    if (i < 0)
    {
        /* code */
        arr[0] = m; 
    }
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
