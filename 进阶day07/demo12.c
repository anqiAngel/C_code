#include <stdio.h>

int main()
{
    /* code */
    FILE *fp = fopen("test1.txt", "r");
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }
    else
    {
        /* code */
        // 读取字符
        // 指针右移一个字节
        int ch = fgetc(fp);
        printf("%c\n", ch); // a
        // 指针左移一个字节
        fseek(fp, -1, SEEK_CUR);
        ch = fgetc(fp);
        printf("%c\n", ch); // a
        // 指针右移一个字节
        fseek(fp, 1, SEEK_CUR);
        ch = fgetc(fp);
        printf("%c\n", ch); // c
        // 返回相对于起始位置的偏移量
        printf("%d\n", ftell(fp)); //
    }
    fclose(fp);
    fp = NULL;
    return 0;
}
