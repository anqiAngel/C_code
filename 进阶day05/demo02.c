#include <stdio.h>

struct A
{
    /* data */
    int i;
    char c;
};

struct B
{
    /* data */
    char c1;
    int i;
    char c2;
};

int main()
{
    /* code */
    // 结构体大小计算
    struct A a1 = {0};
    struct B b1 = {0};
    printf("%d\n", sizeof(a1)); // 8
    printf("%d\n", sizeof(b1)); // 12
    return 0;
}
