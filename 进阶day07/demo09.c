#include <stdio.h>

struct S
{
    /* data */
    char arr[10];
    int num;
    float sc;
};

int main()
{
    /* code */
    // 格式化数据输入输出
    struct S s = {"abcdef", 10, 5.5f};
    FILE *fp = fopen("./test3.txt", "w");
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }
    else
    {
        /* code */
        // 二进制写文件
        fwrite(&s, sizeof(struct S), 1, fp);
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
