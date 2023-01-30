#include <stdio.h>

int main()
{
    /* code */
    //const关键字用来修饰变量
    const int a = 10;
    const int c = 20;
    // a = 100;
    // printf("%d",a);
    const int* const b = &a;
    // 以此类推int const *const *const p
    // b = &c;
    // *b = 100;
    printf("%d",*b);
    return 0;
}
