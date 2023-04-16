#include <stdio.h>
#include <stdlib.h>

// qsort实现函数
int compare(const void *num1, const void *num2)
{
    /* code */
    return *(int *)num1 - *(int *)num2;
}

int main()
{
    /* code */
    // 在有序顺序表里找插入位置 输入一个数 在顺序表中找插入位置并将这个数插入
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    scanf("%d", &arr[9]);
    // 排序实现
    qsort(arr, 10, sizeof(arr[0]), compare);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
