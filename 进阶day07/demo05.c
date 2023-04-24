#include <stdio.h>

int main()
{
    /* code */
    // 打开成功返回指针 否则返回NULL
    FILE *fp = fopen(".\\test1.txt", "w");
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }
    else
    {
        /* code */
        // 写文件 - 按照行来写 文本写 ASCII码值
        fputs("abcdef", fp);
        // 不换行接着写
        fputs("abcdefg", fp);
        // 换行加\n
        fputs("abc\ndefg", fp);
    }
    // 关闭文件
    fclose(fp);
    fp = NULL;
    return 0;
}