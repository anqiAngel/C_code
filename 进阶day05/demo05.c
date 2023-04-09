#include <stdio.h>
#include <stdlib.h> 

// 联合体的定义
union Un
{
    /* data */
    char c; // 占一个字节
    int i;  // 占四个字节 第一个字节与 char c公用
    // 改i可能会改变c 改c可能会改变i
};

union Un1
{
    /* data */
    char a[5]; // 5
    int i; // 4
} un1;


// 检查系统是大端存储还是小端存储 结构体解法
int check_sys(){

    union Un
    {
        /* data */
        char c;
        int i;
    } u;
    u.i = 1;
    if (u.c == 1)
    {
        /* code */
        // 小端返回0
        return 0;
    }else
    {
        /* code */
        // 大端返回1
        return 1;
    }
       
}
    
int main(int argc, char const *argv[])
{
    /* code */
    union Un u;
    printf("%p\n",&u); 
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    printf("%d\n",sizeof(u)); // 4
    if (check_sys())
    {
        /* code */
        printf("大端存储\n");
    }else
    {
        /* code */
        printf("小端存储\n");
    }
    printf("%d\n",sizeof(un1)); // 8
    return 0;

}