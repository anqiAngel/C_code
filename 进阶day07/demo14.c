#include <stdio.h>

int main()
{
    /* code */
    // 拷贝test.txt文件
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL)
    {
        /* code */
        perror("test.txt");
    }
    FILE *fp1 = fopen("test5.txt", "w");
    if (fp1 == NULL)
    {
        /* code */
        fclose(fp);
        fp = NULL;
        perror("test5.txt");
    }
    int ch = fgetc(fp);
    while (ch != EOF)
    {
        /* code */
        fputc(ch, fp1);
    }
    if (feof(fp))
    {
        /* code */
        printf("遇到文件结束标志,文件读取正常结束\n");
    }
    else if (ferror(fp))
    {
        /* code */
        printf("文件读取失败结束\n");
    }

    fclose(fp);
    fp = NULL;
    fclose(fp1);
    fp1 = NULL;
    return 0;
}
