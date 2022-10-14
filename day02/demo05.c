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
    int input = 0;
    printf("请输入:>");
    scanf("%d",&input);
    if (input == 1)
    {
        /* code */
        printf("毕业好offer~~~");
    }
    else{
        /* code */
        printf("毕业烤红薯~~~");
    }
    
    return 0;
}