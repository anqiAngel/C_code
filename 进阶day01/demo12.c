#include <stdio.h>

int main()
{
    /* code */
    // 用*打印菱形
    int line = 0;
    scanf("%d",&line);
    // 上半部分
    for (int i = 0; i < line; i++)
    {
        /* code */
        // 打印空格
        for (int j = 0; j < line - 1 - i; j++)
        {
            /* code */
            printf(" ");
        }
        // 打印*
        for (int k = 0; k < 2*i+1; k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }

    // 下半部分
    for (int i = 0; i < line - 1; i++)
    {
        /* code */
        // 打印空格
        for (int j = 0; j <= i; j++)
        {
            /* code */
            printf(" ");
        }
        // 打印*
        for (int k = 0; k < 2*(line-1-i)-1; k++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}
