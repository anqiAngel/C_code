#include <stdio.h>
#define PRINT 10

int main()
{
    /* code */
    // 定义了就打印否则返回
    // 条件编译 常量表达式为真就参加编译,否则就不参加编译
#ifdef PRINT
    printf("hehe\n");
#endif
    return 0;
}
