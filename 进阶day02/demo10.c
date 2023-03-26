#include <stdio.h>

struct Test
{
    /* data */
    int Num;
    char* pcName;
    short sDate;
    char cha[2];
    short sBa[4];
}* p;


int main()
{
    /* code */
    printf("%p\n",p + 0x1); // 地址+20 0000000000000020
    printf("%p\n",(unsigned long)p + 0x1); // 值+1 0000000000000001
    printf("%p\n",(unsigned int*)p + 0x1); // 地址+4 0000000000000004
    int arr[4] = {1, 2, 3, 4};
    int* ptr1 = (int*)(&arr+1); // ptr1指向下一个数组 
    int* ptr2 = (int*)((int)arr+1); // ptr2指向下一个单元开始的4个字节的值 
    printf("%x,%x",ptr1[-1],*ptr2); // %x以16进制整数输出 4 2000000
    int a[3][2] = {{0, 1},{2, 3},{4, 5}};
    int* p;
    p = a[0];
    printf("%d",p[0]); // 0
    return 0;
}
