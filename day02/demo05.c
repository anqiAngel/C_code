#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 单行注释
    /*多行
    注释*/
    printf("ab\tcd\n ");
    printf("ab\ncd\n");
    printf("%c\n",'\'');
    printf("%c\n",'\"');
    printf("\a\a\a");
    printf("%c\n",'\101');
    printf("%c\n",'\x30');
    return 0;
}
