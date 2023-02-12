#include <stdio.h>

int main()
{
    /* code */
    int arr[5] = {1, 2, 3, 4, 5};
    // 数组指针 -> 数组的地址 &arr是取出数组的地址
    // pr就是数组指针 存放的是数组的地址
    int (*pr) [5] = &arr;
    printf("%p %p\n",arr,pr);
    double* arr1[5];
    // 声明 数组元素类型 (*名) [数组元素个数] 
    double* (*p) [5] = &arr1;
    // arr和pr加一的结果不同 arr+1 -> +4 pr+1 -> +20
    printf("%p %p\n",arr+1,pr+1);
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*pa) [10] = &a;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        //(*pa) ->数组名 首元素地址 数组指针解引用时是首元素地址 等于数组名
        printf("%d ",*((*pa)+i));
    }
    printf("\n");

    return 0;
}
