#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // getchar或取一个字符输入 返回输入字符的ASCII码值整型值
    // putchar在终端中换行输出一个字符
    int ch = getchar();
    printf("%c\n",ch);
    putchar(ch);
    return 0;
}
