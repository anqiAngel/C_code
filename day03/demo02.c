#include <stdio.h>
#include <string.h>

// extern用来生命外部符号的
extern int g;
extern void test();
// #define定义标识符常量
#define PI 3.14
// #define定义宏
#define ADD(X,Y) (X+Y)
int main()
{
    /* code */
    printf("%d",g);
    printf("\n");
    printf("%d\n",ADD(2,3));
    printf("%d\n",4*ADD(2,3));
    test();
    return 0;
}
