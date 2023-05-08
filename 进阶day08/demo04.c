#include <stdio.h>
// 定义一个宏 宏允许参数替换文本 简单替换有后面的替换 先替换再计算
// 不要吝啬括号
#define SQUARE(X) ((X) * (X))

int main()
{
    /* code */
    printf("%d\n", SQUARE(4));
    printf("%d\n", 4 * 4);
    // ((3+1)*(3+1))
    printf("%d\n", SQUARE(3 + 1));
    return 0;
}
