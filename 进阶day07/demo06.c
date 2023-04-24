#include <stdio.h>

int main()
{
    /* code */
    // 打开成功返回指针 否则返回NULL
    FILE *fp = fopen(".\\test1.txt", "r");
    char str[10] = "";
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }
    else
    {
        /* code */
        // 读文件 - 按照行来读 读n-1个字符
        fgets(str, 4, fp);
        printf("%s\n", str);
        fgets(str, 4, fp);
        printf("%s\n", str);
    }
    // 关闭文件
    fclose(fp);
    fp = NULL;
    return 0;
}