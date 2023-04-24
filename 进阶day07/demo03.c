#include <stdio.h>

int main()
{
    /* code */
    // 从标准输入流里读
    // 1.标准输入流读取字符
    // 2.fget(stdin)获取一个字符输出
    printf("%c\n",fgetc(stdin));
    printf("%c\n",fgetc(stdin));
    printf("%c\n",fgetc(stdin));
    return 0;
}