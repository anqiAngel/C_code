#include <stdio.h>

int main()
{
    /* code */
    // 指针数组
    // int* arr[3];
    int a = 10;
    int b = 20;
    int c = 30;
    int* arr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("%p\n",arr[i]);
    }
    int d[5] = {1, 2, 3, 4, 5};
    int e[] = {2, 3, 4, 5, 6};
    int f[] = {3, 4, 5, 6, 7};
    int* arr1[3] = {d, e, f};
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            printf("%d ",arr1[i][j]);

        }
        printf("\n");
        
    }
    return 0;
}
