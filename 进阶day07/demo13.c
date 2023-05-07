#include <stdio.h>

int main()
{
    /* code */
    int num = 10000;
    FILE *fp = fopen("test4.txt", "wb");
    if (fp == NULL)
    {
        /* code */
        perror("test4.txt");
    }
    else
    {
        /* code */
        // 写文件
        fwrite(&num, sizeof(int), 1, fp);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
