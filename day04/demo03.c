#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    // 输入密码并确认
    char pwd[20] = {0};
    printf("请输入密码:>");
    // 字符串变量名本身就是地址 不需要用&取地址
    scanf("s",pwd);
    printf("请确认密码(Y/N):>");
    int temp = 0; 
    // 处理\n和空格
    while ((temp = getchar()) != '\n')
    {
        /* code */
        ;
    }
    int ch = getchar();
    if (ch = 'Y')
    {
        /* code */
        printf("确认成功\n");
    }else{
        printf("确认失败\n");
    }
    
    return 0;
}
