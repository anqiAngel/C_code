#include <stdio.h>
#include <string.h>

int main()
{
    /* code */
    char str1[20] = "12345";
    char str2[20] = {0};
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        /* code */
        printf("请输入密码:>");
        scanf("%s",str2);
        if (strcmp(str1,str2) == 0)
        {
            /* code */
            printf("密码正确,登录成功~~~");
        }else{
            printf("密码错误~~~还有%d次机会\n",2-i);
        }
    }
    if (i == 3)
    {
        /* code */
        printf("登录失败~~~退出~~~");
    }
    
    return 0;
}
