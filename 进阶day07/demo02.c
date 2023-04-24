#include <stdio.h>

int main()
{
    /* code */
    // 打开成功返回指针 否则返回NULL
    FILE* fp = fopen(".\\test.txt","r");
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }else
    {
        /* code */
        // 读文件
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));
    }
    // 关闭文件
    fclose(fp);
    fp = NULL;
    return 0;
}