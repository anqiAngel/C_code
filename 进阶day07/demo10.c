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
    struct S s = {0};
    FILE *fp = fopen("./test3.txt", "r");
    if (fp == NULL)
    {
        /* code */
        perror("fopen");
    }
    else
    {
        /* code */
        // 二进制读文件
        fread(&s, sizeof(struct S), 1, fp);
    }
    printf("%s %d %f\n", s.arr, s.num, s.sc);
    fclose(fp);
    fp = NULL;
    return 0;
}
