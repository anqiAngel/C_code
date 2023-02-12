#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 本质上是把首字符的地址存储在了str中
    // 最好加上const
    const char* str = "hello bit";
    // *str = 'a';
    // 常量改变不了
    // 数组名是字符串首字符的地址
    char str1[] = "hello bit"; 
    printf("%c\n",*str);
    printf("%c\n",*str1);
    // 打印字符串只需要首地址 就可以打印字符串
    printf("%s\n",str);
    printf("%s\n",str1);
    return 0;
}
