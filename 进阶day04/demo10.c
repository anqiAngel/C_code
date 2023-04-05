#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    /* code */
    // 打开文件 成功返回文件指针 打开失败返回NULL
    FILE *fp = fopen("./demo11.c", "r");
    // 打印错误码
    if (!fp)
    {
        /* code */
        printf("错误是:%s\n",strerror(errno)); // No such file or directory
    }else
    {
        /* code */
        printf("没错\n");
    }
    // perror打印错误 
    //将错误码转化为错误信息并打印
    perror("perror打印的错误是");
    fclose(fp);
    fp = NULL;
    return 0;
}
