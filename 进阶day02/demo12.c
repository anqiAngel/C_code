#include <stdio.h>

int main()
{
    /* code */
    int a[5][5];
    int (*p)[4];
    p = a;
    
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); // 整型指针 - 整型指针 = 指针之间的元素个数(大地址-小地址) -4 小地址-大地址是负数
    // FFFFFFFFFFFFFFFC,-4
    return 0;
}
