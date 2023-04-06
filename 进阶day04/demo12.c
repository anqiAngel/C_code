#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // memcmp(内容1指针,内容2指针,大小)内存比较函数 与strcmp()返回值相同
    // 函数返回值 如果比较的两个内容相等返回0,内容1>内容2 返回大于0的数,内容1<内容2 返回小于0的数
    float arr[] = {0.0, 1.0, 2.0};
    float arr1[] = {0.0, 2.0, 3.0};
    int ret = memcmp(arr, arr1, 4);
    int ret1 = memcmp(arr, arr1, 8);
    printf("%d\n", ret); // 0
    printf("%d\n", ret1); // 1
    // memset(指针,内容,大小) 将指针指向的空间设为指定值
    int arr2[10] = {0};
    // 按字节操作
    memset(arr2, 1, 20);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}
