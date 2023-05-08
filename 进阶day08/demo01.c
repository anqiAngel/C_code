#include <stdio.h>

int main()
{
    /* code */
    // 当前文件名
    printf("%s\n", __FILE__);
    // 当前行号
    printf("%d\n", __LINE__);
    // 编译日期
    printf("%s\n", __DATE__);
    // 编译的时间
    printf("%s\n", __TIME__);
    // 编译器是否遵循ANSI C 是返回1 否返回0
    printf("%d\n", __STDC__);
    // 当前函数名
    printf("%s\n", __FUNCTION__);
    return 0;
}
